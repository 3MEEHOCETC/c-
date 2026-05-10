#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

template <typename T>
class ThreadSafeQueue {
    private:
    std::queue<T> queue;
    mutable std::mutex mutex;
    std::condition_variable cond;
    public:
    void push(T value) {
        std::lock_guard<std::mutex>lock(mutex);
        queue.push(std::move(value));
        cond.notify_one();
    }

    void wait_and_pop(T& value) {
        std::unique_lock<std::mutex>lock(mutex);
        cond.wait(lock, [this] { return ! queue.empty(); });
        value = std::move(queue.front());
        queue.pop();
    }
};

int main() {
    ThreadSafeQueue<int> q;
    //поток-отправитель producer
    std::thread t1([&q]() {
        for (int i = 0; i < 5; ++i) {
            std::cout << "Pushing: " << i << std::endl;
            q.push(i);
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    });
//поток-получатель consumer
std::thread t2([&q]() {
    for (int i = 0; i< 5; ++i) {
        int val;
        q.wait_and_pop(val);
        std::cout << "Popped: " << val << std::endl;
    }
});
t1.join();
t2.join();

return 0;
}

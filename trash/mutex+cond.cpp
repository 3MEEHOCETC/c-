#include <queue>
#include <mutex>
#include <condition_variable>

template <typename T>
class ThreadSafeQueue;
{
    private:
    std::queue<T> queue;
    std::mutex mutex;
    std::condition_variable cond;

    public:
    //добавление элемента
    void push(T value) 
    {
        std::lock_guard<std::mutex>lock(mutex); // захватываем мьютекс
        queue.push(std::move(value));
        cond.notify_one(); // будим спящий поток (если есть)
    }
//извлечение элемента (блокирующее)
void wait_and_pop(T& value)
{
    std::unique_lock<<std::mutex>lock(mutex);
    //ждем пока очередь не станет пустой
    cond.wait(lock, [this] {return ! queue.empty(); });
    value = std::move(queue.front());
    queue.pop();
}
bool empty() {
    std::lock_guard<std::mutex>lock(mutex);
    return queue.empty();
    }
};
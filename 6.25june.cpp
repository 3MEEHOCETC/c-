#include <iostream>
#include <utility> //нужен для std::pair

std::pair<int, int> getNumbers()
{
    return {6,8}; //возвращаем пару чисел одновременно
}

int main() {
    auto [first, second] = getNumbers(); // деструктуризация С++17
    std::cout << first << " и " << second << std::endl; // выведет 6 и 8
    return 0;
}

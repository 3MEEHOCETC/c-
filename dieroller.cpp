// Программа Die Roller
// Демонстрирует генерирование случайных чисел
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0)));
    // Запускаем генератор случайных чисел
    int randomNumber = rand(); // Генерируем случайное число
    int die = (randomNumber % 6) + 1; // Получаем число между 1 и 6
    std::cout << "You rolled a " << die << std::endl;
    return 0;
}

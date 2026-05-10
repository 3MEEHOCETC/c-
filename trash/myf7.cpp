#include <iostream>

int main() {
    int myHealth = 100; //обычная переменная
    int* ptr = &myHealth; //указатель ptr теперь хранит адрес переменной myHealth

    std::cout << "Value: " << myHealth << std::endl;
    std::cout << "Memory Address: " << ptr << std::endl; //выведет адрес

    //идем по адресу и меняем значение
    *ptr = 80;

    std::cout << "New health: " << myHealth << std::endl; //теперь тут 80

    return 0;
}
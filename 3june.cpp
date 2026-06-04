#include <iostream>
int main() {
    std::cout << "Enter a number: "; //просим ввести число
    int a = 0;
    std::cin >> a; //получаем число от пользователя
    std::cout << "You entered: " << a << std::endl;
    return 0;
}
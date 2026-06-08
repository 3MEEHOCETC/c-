#include <iostream>

int add(int x, int y); // предварительное объявление функции add() //(используется ее прототип)

int main() 
{std::cout << "The sum of 383 and 493 is: " << add(383, 493) << std::endl; // работает так как предварительно выше функции main() объявили функцию add()
return 0;}

int add(int x, int y) // определение функции add() находится ниже её вызова
{
    return x + y;
}
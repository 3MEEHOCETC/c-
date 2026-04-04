//  Программа String Tester
// Демонстрирует работу со строковыми объектами
#include <iostream>
#include <string>
int main()
{
    std::string word1 = "Game";
std::string word2("Over");
std::string word3(3, '!');
std::string phrase = word1 + " " + word2 + word3;
std::cout << "The phrase is: << phrase << "\n\n";

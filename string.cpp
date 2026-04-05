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
std::cout << "The phrase is: " << phrase << "\n\n";
std::cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
std::cout << "the character at position 0 is: " << phrase[0] << "\n\n";
std::cout << "Changing the character at position 0.\n";
phrase[0] = 'L';
std::cout << "the phrase is now: " << phrase << "\n\n"; 
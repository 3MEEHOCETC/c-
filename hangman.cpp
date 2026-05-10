// Классическая игра "Виселица"

#include <iostream>
#include <vector>
#include <cctype>
#include <ctime>
#include <algorithm>
#include <string>
int main() {
    //подготовка
    const int MAX_WRONG = 8; //количество ошибок
std::vector<std::string>words; //подборка загаданных слов
words.push_back("GUESS");
words.push_back("HANGMAN");
words.push_back("DIFFICULT");
srand(static_cast<unsigned int>(time(0)));
random_shuffle(words.begin(), words.end());
const std::string THE_WORD = words [0]; // слово для отгадывания


}
// Классическая игра "Виселица"
//загружает через мак
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
int wrong = 0; // количество ошибочных вариантов
std::string soFar(THE_WORD.size(), '-'); //часть слова открытая на данный момент
std::string used = ""; // уже отгаданные слова
std::cout << "Welcome to Hangman! Good luck!\n";

}
// Игра Word Jumble
// Игра-головоломка с разгадыванием слов
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 5;
    const std::string WORDS[NUM_WORDS][NUM_FIELDS] = 
    {
       {"wall", "Do you feel you're banfinf your head against something?"},
       {"glasses", "These might help you see the answer."},
       {"labored", "Going slowly, is it?"},
       {"persistent", "Keep at it."}.
       {"humble", "It's what the game is all about."}
    };
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    std::string theWord = WORDS[choice][WORD]; //  слово, которое нужно угадать
    std::string theHint = WORDS[choice][HINT]; // подсказка для слова

    std::string jumble = theWord; // перемешанный вариант слова
    intlength = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        
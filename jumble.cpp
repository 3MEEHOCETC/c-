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
       {"persistent", "Keep at it."},
       {"humble", "It's what the game is all about."}
    };
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    std::string theWord = WORDS[choice][WORD]; //  слово, которое нужно угадать
    std::string theHint = WORDS[choice][HINT]; // подсказка для слова

    std::string jumble = theWord; // перемешанный вариант слова
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    std::cout << "\t\t\tWelcome to Word Jumble!\n\n";
    std::cout << "Unscramble the letters to make a word.\n";
    std::cout << "Enter 'hint' for a hint.\n";
    std::cout << "Enter 'quit' to quit the game.\n\n";
    std::cout << "The jumble is: " << jumble;
    std::string guess;
    std::cout << "\n\nYour guess: ";
    std::cin >> guess;

    while ((guess != theWord) && (guess != "quit"))
    {
      if (guess == "hint")
      {
         std::cout << theHint;
      }
      else 
      {
         std::cout << "Sorry, that's not it.";
      }
      std::cout << "\n\nYour guess: ";
      std::cin >> guess;
   }

   if (guess == theWord)
   {
      std::cout << "\nThat's it! You guessed it!\n";

   }
   std::cout << "\nThanks for playing.\n";
   return 0;
}
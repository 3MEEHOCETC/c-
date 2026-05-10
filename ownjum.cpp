#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

int main() 
{
setlocale(LC_ALL, "Russian");
srand(static_cast<unsigned int>(time(0)));

std::vector<std::string> words = { "программа", "конфигуратор", "интерфейс", "указатель", "массив" };

// Выбираем случайное слово
std::string targetWord = words[rand() % words.size()];
std::string jumbleWord = targetWord;

// Перемешиваем буквы 
random_shuffle(jumbleWord.begin(), jumbleWord.end());

int score = 0; // Текущий счет
int hintPenalty = 3; // Штраф за подсказку
std::string guess;

std::cout << "\t\tДобро пожаловать в Словомеску!\n\n";
std::cout << "Разгадайте слово: " << jumbleWord << std::endl;
std::cout << "Команды: 'hint' (подсказка, -" << hintPenalty << " очков), 'quit' (выход).\n\n";

while (guess != targetWord && guess != "quit") {
std::cout << "[Счет: " << score << "] Ваш вариант: ";
std::cin >> guess;

if (guess == "hint") {
if (score >= hintPenalty) {
score -= hintPenalty;
std::cout << "-> Подсказка: первая буква слова - '" << targetWord[0] << "'\n";
} else {
std::cout << "-> Недостаточно очков для подсказки!\n";
}
}
else if (guess == targetWord) {
int pointsEarned = targetWord.length();
score += pointsEarned;
std::cout << "\nВерно! Вы угадали слово '" << targetWord << "'." << std::endl;
std::cout << "Получено очков: " << pointsEarned << std::endl;
std::cout << "Итоговый счет: " << score << std::endl;
}
else if (guess != "quit") {
std::cout << "Неправильно. Попробуйте еще раз.\n";
}
}
std::cout << "\nСпасибо за игру! До встречи!\n";
return 0;
}

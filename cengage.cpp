// Программа Hero's Invertory
// Демонстрирует работу с массивами
#include <iostream>
#include <string>
int main()
{
    const int MAX_ITEMS = 10;
    std::string invertory[MAX_ITEMS];
    int numItems = 0;
    invertory[numItems++] = "sword";
    invertory[numItems++] = "armor";
    invertory[numItems++] = "shield";
    std::cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i)
    {
    std::cout << invertory[i] << std::endl;
}
    std::cout << "\nYou trade your sword for a battle axe.";
    invertory[0] = "battle axe";
    std::cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)
{
    std::cout << invertory[i] << std::endl;
}
    std::cout << "\nThe item name '" << invertory[0] << "' has ";
    std::cout << invertory[0].size() << " letters in it.\n";
    std::cout << "\nYou find a healing potion.";
    if (numItems < MAX_ITEMS)
    {
    invertory[numItems++] = "healing potion";
}
else 
{
    std::cout << "You have too many items and can't carry another.";
}
std::cout << "\nYour items:\n";
for (int i = 0; i < numItems; ++i)
{
    std::cout << invertory[i] << std::endl;
}
return 0;
}


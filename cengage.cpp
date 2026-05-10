// Программа Hero's Inventory 2.0
// Демонстрирует работу с векторами
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> invertory;
    invertory.push_back("sword");
    invertory.push_back("armor");
    invertory.push_back("shield");
    std::cout << "You have " << invertory.size() << " items.\n";
    std::cout << "\nYour items:\n";
    for (unsigned int i = 0; i < invertory.size(); ++i)
    {
    std::cout << invertory[i] << std::endl;
    }
    std::cout << "\nYou trade your sword for a battle axe.";
    invertory[0] = "battle axe";
    std::cout << "\nYour items:\n";
    for (unsigned int i = 0; i < invertory.size(); ++i)
    {
std::cout << invertory[i] << std::endl;
}
std::cout << "\nThe item name '" << invertory[0] << "' has ";
std::cout << invertory[0].size() << " letters in it.\n";
std::cout << "\nYour shield is destroyed in a fierce battle.";
invertory.pop_back();
std::cout << "\nYour items:\n";
for (unsigned int i = 0; i < invertory.size(); ++i)
{
std::cout << invertory[i] << std::endl;
}
std::cout << "\nYou were robbed of all of your possessions by a thief.";
invertory.clear();
if (invertory.empty())
{
std::cout << "\nYou have nothing.\n";
}
else
{
std::cout << "\nYou have at least one item.\n";
}
return 0;
}
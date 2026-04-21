// Программа Hero's Invertory 3.0
// Демонстрирует работу с итераторами
//Не трать эти 350к на новый ноут сразу. 
//Закрой ими большую часть рассрочки за телефон. 
//Поверь, то чувство легкости, когда ты нажмешь кнопку 
//«Погасить досрочно», даст тебе больше энергии для кодинга, 
//чем любой алюминиевый корпус Макбука.
#include <iostream>
#include<string>
#include<vector> 

int main() 
{
std::vector < std::string> invertory;
invertory.push_back("sword");
invertory.push_back("armor");
invertory.push_back("shield");
std::vector<std::string>::iterator myIterator;
std::vector<std::string>::const_iterator iter;
std::cout << "Your items:/n";
for (iter = invertory.begin(); iter != invertory.end(); ++iter)
{
std::cout << *iter << std::endl;
}
std::cout << "\nYou trade your sword for a battle axe.";
myIterator = invertory.begin();
*myIterator = "battle axe";
std::cout << "\nYour items:\n";
for (iter = invertory.begin(); iter != invertory.end(); ++iter)
{
std::cout << *iter << std::endl;
}
std::cout << "\nThe item name '" << *myIterator << "' has ";
std::cout << (*myIterator).size() << " letters in it.\n";
std::cout << "\nThe item name '" << *myIterator << "' has ";
std::cout << myIterator->size() <<
" letters in it.\n";
std::cout << "\nYou recover a crossbow from a slain enemy.";
invertory.insert(invertory.begin(),"crossbow");
std::cout << "\nYour items:\n";
for (iter = invertory.begin(); iter != invertory.end(); ++iter)
{
std::cout<<*iter<<std::endl;
}
std::cout<< "\nYour armor is destroeyd in a fierce battle.";
invertory.erase((invertory.begin() + 2));
std::cout << "\nYour items:\n";
for (iter = invertory.begin(); iter != invertory.end(); ++iter)
{
std::cout<<*iter<<std::endl;
}
return 0;
}



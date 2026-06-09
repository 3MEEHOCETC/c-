#include <iostream>

//int add(int x, int y); // в прототипе не хватает 3 переменной

//int main() 
//{
//    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << std::endl;
//    return 0; 
//}

//int add(int x, int y)
//{
//    return x + y;
//}

int add(int x, int y, int z);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << std::endl;
    return 0;
}

int add(int x, int y, int z)
{
    return x + y + z;
}
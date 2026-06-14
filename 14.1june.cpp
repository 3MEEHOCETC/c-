#include <iostream>

int return7()
{
    return 7;
    
    int return9() // идентификатор не определен
    {
        return 9;
    }
}

int main()
{
    std::cout << return7() + return9() << '\n'; // return9() - не определен так как нельзя вкладывать функцию в функцию, можно только вызывать их

    return 0;
}
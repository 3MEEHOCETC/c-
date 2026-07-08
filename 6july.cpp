#include <iostream>

int add(int f, int g)
{
    std::cerr << " add() called (f=" << f << ", g=" << g << ")\n ";
    return f + g;
}
// add(int f, int g)
// std::cerr << " add() called (f=" << f << ", g=" << g << ")\n";
//add(int r, int t)
//std::cerr << "add() called (r=" << r << ", t=" << t << ")\n";

void printResult(int h)
{
    //void printNum(int r)
    //std::cerr << " printNum() called (r=" << r << ")\n";
    //void textNum(int u)
    //std::cerr << " textNum called (u=" << u << ")\n";
    std::cerr << "printResult() called (h=" << h << ")\n";
    std::cout << "The answer is: " << h << '\n';
}

int maxInput()
{
    std::cerr << "maxInput() called\n";
    std::cout << "Enter a value: ";
    int f{};
    std::cin >> f;
    std::cerr << " maxInput::f = " << f << '\n'; 
    return --f;
}

int main()
{
    std::cerr << "main() called\n";
    int f{ maxInput() };
    std::cerr << "main::f = " << f << '\n';
    int g{ maxInput() };
    std::cerr << "main::g = " << g << '\n';
    
    int h{ add(f, g) };
    std::cerr << "main::h = " << h << '\n';
    printResult(h);

    return 0;
}
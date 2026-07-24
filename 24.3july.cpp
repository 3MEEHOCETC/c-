#include <iostream>

// assume int is 4 bytes
int main()
{
    unsigned int u{2};
    signed int s{3};

    std::cout << u - s << '\n'; // 2 - 3 = 42949677295

    return 0;
}
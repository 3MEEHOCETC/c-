#include <iostream>

// assume int is 4 bytes
int main()
{
    signed int s { -1 }; //- 2 147 483 648 ... 2 147 483 647
    unsigned int u {1 }; // 0... 4 294 967 295

    if ( s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
    std::cout << "-1 is less than 1\n";
    else 
    std::cout << "1 is less than -1\n"; // this statement executes

    return 0;
}
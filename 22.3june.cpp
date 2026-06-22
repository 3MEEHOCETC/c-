#include <iostream>

void doIt(int x, int y, int z)
{
   y = 4;
   z = 6;
   
    std::cout << "doIt: x = " << x << " y = " << y << " z = " << z << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << " z = " << z << '\n';
}

int main()
{
    int x{1};
    int y{2};
    int z{5};

    std::cout << "main: x = " << x << " y = " << y << " z = " << z << '\n';

    doIt(x, y,z);

    std::cout << "main: x = " << x << " y = " << y << " z = " << z << '\n';

    return 0;
}

// execution starts at the top of main()
// main's variable x is created and initialized with value 1
//main's variable y is created and initialized with value 2
//std::cout prints main: x =1 y = 2
//doIt is called with argument 1
// doIt's parameter x is created and initialized with value 1
// doIt's variable y is created and initialized with value 4
// doIt prints doIt: x = 1 y = 4
// doIt's variable x is assigned the new value 3
// std::cout prints doIt: x = 3 y = 4
// doIt's y and x are destroyed
// std::cout prints main: x = 1 y = 2
// main returns 0 to the operating system
// main's y and x are destroyed
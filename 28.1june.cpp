#include <iostream>
#include "penta.h"

int main()
{
    std::cout << "a penta has " << getPentaSides() << " sides\n";
    std::cout << "a penta of length 9 has perimeter length " << getPentaPerimeter(9) << '\n';

    return 0;
}
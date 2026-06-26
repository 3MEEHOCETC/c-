#include <iostream>

#define FOO 9 // here's a macro substitution
#ifdef FOO // This FOO does not get replaced with 9 because is's part of another preprocessor directive
std::cout << FOO << '\n'; // this FOO gets replaced with 9 beacuse is's part of the normal code
#endif

#include <iostream>

int main()
{
    std::cout << "Josh\n";

    #if 1 // always true, so the following code will be compiled
    std::cout << "Jeff\n";
    /* Some
    * multi-line
    * comment here
    */
   std::cout << "Steve\n";
   #endif

   return 0;
}
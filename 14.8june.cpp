#include <iostream>

// Function that doesn't return a value
void returnNothing()
{
}

// Function that returns a value 
int returnFive()
{
    return 5;
}

int main()
{
    // When calling a function by itself, no value is required
    returnNothing; //we can call a function that does not return a value 
    returnFive;   //we can call a function that returns a value, and ignore that return value
    // When callin a function in a context that requires a value  
}
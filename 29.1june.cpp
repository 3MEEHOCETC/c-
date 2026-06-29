#include <iostream>

// Full implementation of the GetMaxgoals
int getMaxGoals()
{
    std::cout << "Enter a goal of the day: " << '\n';
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    // Get first Max's goal
    int goal{ getMaxGoals() }; // Now I've included code here to test the return value!
    std::cout << goal << '\n'; // Debug code to ensure getMaxGoals() is working, I'll remove this later

    // Get goal operation from me
    // getGoalOperation();

    // Get second goal from me
    // getMaxGoals();

    // Calculate result
    // calculateResult();

    // Print result
    // priintResult():

    return 0;

}
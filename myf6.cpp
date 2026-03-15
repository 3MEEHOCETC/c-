#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {10, 20, 30};

    //showing full size of vector
    std::cout << "Vector size: " << numbers.size() << std::endl;

    //Iterate over each number (n) in the vector (numbers)
    std::cout << "All elements: ";
    for (int n : numbers) {
        std::cout << n << " ";

    }
    std::cout << std::endl;

    return 0;
}
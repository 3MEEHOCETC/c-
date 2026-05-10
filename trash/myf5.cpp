#include <iostream>
#include <vector>

int main() {
    //1. creating
    std::vector<int> numbers;

    //2. added at the end (O(1))
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    //3. Access by index
    std::cout << "First element: " << numbers[0] << std::endl;

    //4. Find out the current size
std::cout << "Size: " << numbers.size() << std::endl;

//5. deleting the last unit
numbers.pop_back();
return 0;

}
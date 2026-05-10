#include <iostream>
#include <vector>
#include <string>

int main() {
    //используем вектор - динамический массив
    std::vector<std::string> goals = {"Code", "Build", "Success"};

    std::cout << "Starting the C++ journey in Linux..." << std::endl;

    for(const auto& goal : goals) {
        std::cout << "Goal: " << goal << std::endl;
    }
    return 0;
}
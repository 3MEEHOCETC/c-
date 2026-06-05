#include <iostream>
int main() {
    float f_num = 5.0f;
    float f_zero = 0.0f;

    double d_num = 5.0;
    double d_zero = 0.0;
    
    std::cout <<   "Float: " << f_num / f_zero << std::endl;
    std::cout << "Double: " << d_num / d_zero << std::endl;

    return 0;
}
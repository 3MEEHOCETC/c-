#include <iostream>
#include <string>

int main()
{
    //1. объявляем переменные
    float fuelLevel; // процент топлива
    bool engineOk = true; //статус двигателя
    int temperature; //температура за бортом

    std::cout << "--- System Check v1.0 ---" << std::endl;

    //2. ввод данных
    std::cout << "Enter fuel level (0-100%): ";
    std::cin >> fuelLevel;
    
    std::cout << "Enter outside temperature (Celsius): ";
    std::cin >> temperature;
    
//3. логика (Level 1: if/else)
if (fuelLevel < 30.0f) {
    std::cout << "Warning: Low fuel!" << std::endl;
    }

    if (temperature < -20 || temperature >= 35) {
        std::cout << "Critical: Extreme temperature conditions!" << std::endl;
        engineOk = false;
        }

        //4. Итоговый вердикт
        if (engineOk && fuelLevel > 5.0f) {
            std::cout << "READY TO GO." << std::endl;
        } else {
            std::cout << "SYSTEM HALTED. Check parameters." << std::endl;
        }
        return 0;
        }
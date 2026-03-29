#include <iostream>
#include <vector>
#include <algorithm> // здесь готовые функции поиска, но сделаем вручную

int main() {
    // 1. Наши цены - условные 24 часа
    double prices[24] = {
        65000, 65200, 64800, 66000, 67500, 67200, 68000, 69000,
        68500, 67000, 66000, 65000, 64000, 63000, 63500, 64000,
        64500, 65000, 65500, 66000, 66500, 67000, 67500, 68000
    };

    // 2. Инициализация (стартуем с первой цены)
    double minPrice = prices[0];
    double maxPrice = prices[0];

    // 3. Цикл поиска ( самое важное в С++)
    for (int i =0; i < 24; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    // 4. Считаем волатильность 
    double volatility = ((maxPrice - minPrice) / minPrice) * 100;

    std::cout << "Max: " << maxPrice << " USD" << std::endl;
    std::cout << "Min: " << minPrice << " USD" << std::endl;
    std::cout << "Daily Volatility: " << volatility << "%" << std::endl;

    return 0;
}
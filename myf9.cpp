//#include <vector>

//std::vector<int> numbers(1'000'000, 1);
//long long sum = 0;

//for (int i = 0; 1 < 1'000'000; ++i) {
//    sum +=numbers[i]; // процессор берет число и заранее подгружает следующие
//}


//#include <list>

//std::list<int> numbers_list(1'000'000, 1);
//long long sum =0;
 
//for (int n : numbers_list) {
//sum += n; //процессор берет число, видит адрес следующего, и в шоке
// этого адреса нет в кэше - бежит в Ram
//}

//разница в скорости между чтением из кэша и 
//чтением из RAM может быть в 100-200 раз

#include <iostream>
#include <vector>
#include <chrono> // для замера времени

//размер матрицы (чем больше, тем заметнее разница)
const int ROWS = 10000;
const int COLS = 10000;

int main() {
    //создаем огромную матрицу и заполняем ее единицами
    std::vector<std::vector<int>> matrix(ROWS, std::vector<int>(COLS, 1));
    long long sum = 0;

    // --- Способ 1: Обход по строкам (Кэш-френдли) ---
    auto start_time = std::chrono::high_resolution_clock::now(); //начало замера

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j]; //доступ последовательный: [i][0], [i][1], [i][2]..
                }
            }

auto end_time = std::chrono::high_resolution_clock::now(); //Конец замера
auto duration_row = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

std::cout << "Время обхода по строкам: " << duration_row.count() << " мс" << std::endl;
std::cout << "Сумма (для проверки): " << sum << std::endl; //выводдим сумму чтобы компилятор не оптимизировал цикл

//сбрасываем сумму
sum = 0;

// ---способ 2: обход по столбцам (Кэш-промахи) ---
start_time = std::chrono::high_resolution_clock::now(); // начало замера

for (int j = 0; j< COLS; ++j) {
for (int i =0; i < ROWS; ++i) {
    sum += matrix[i][j]; //доступ с прыжками: [0][j], [1][j], [2][j]...
    }
}

end_time = std::chrono::high_resolution_clock::now(); //конец замера
auto duration_col = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

std::cout << "Время обхода по столбцам: " << duration_col.count() << " мс" << std::endl;
std::cout << "Сумма (для прооверки): " << sum << std::endl;

return 0;
}

        
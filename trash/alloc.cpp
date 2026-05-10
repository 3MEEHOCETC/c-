#include <iostream>
#include <cstdint> //для типов типа uint8_t - хранит значение 0 -255 (int хранит 9223372036854)
#include <cstddef> //для size_t для взаимодействия с системой

class ArenaAllocator {
    private:
    uint8_t* buffer; // начало всей памяти
    size_t bufferSize; // общий размер
    size_t offset; // сколько байт уже занято

    public:
    //конструктор: сразу выделяем общий кусок 
    ArenaAllocator(size_t size) : bufferSize(size), offset(0) {
        buffer = (uint8_t*)std::malloc(size);
        }
        //деструктор: освобождаем все одним махом
        ~ArenaAllocator() {
            std::free(buffer);
        }
         
        //главная фишка: отрезаем кусок памяти
        void* allocate(size_t size) {
            if (offset + size > bufferSize) return nullptr; //места нет

            void* ptr = buffer + offset; //берем адрес текущего свободного места
            offset += size; // сдвигаем метку занятого
            return ptr;
            }

            //мгновенная очистка всей памяти
            void reset() {
                offset = 0;
            }
};

int main() {
    ArenaAllocator arena(1024); //выдели 1 КБ
    //просим место под число
    int* myNum = (int*)arena.allocate(sizeof(int));
    *myNum = 42;

    std::cout << "Value: " << *myNum << " at address: " << myNum << std::endl;

    return 0;
}
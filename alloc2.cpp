#include <iostream>
#include <cstdint> //для типов типа uint8_t - хранит значение 0 -255 (int хранит 9223372036854)
#include <cstddef> //для size_t для взаимодействия с системой
#include <memory> // добавил заголовок для std::align
#include <cstdio>
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
         
        void* allocate(size_t size, size_t alignment =8 ) {
            //вычисляем, сколько места нам нужно с учетом возможного сдвига для выравнивания 
            size_t space = bufferSize - offset;
            void* ptr = buffer + offset;

            //std::align сдвинет ptr до ближайшего адреса, кратного alignmnet,
            // и уменьшит space на величину этого сдвига
            if (std::align(alignment, size, ptr, space)) {
                //если выравнивание прошло успешно, вычисляем новый offset
                uint8_t* alignedPtr = (uint8_t*)ptr;
                offset = (alignedPtr - buffer) + size;
                return ptr;
            }
            return nullptr; //если места не хватило после выравнивания
        }
};

int main() {
    ArenaAllocator arena(1024); //выдели 1 КБ
    //просим место под число
    int* myNum = (int*)arena.allocate(sizeof(int));
    if (myNum) {
    *myNum = 42;
// %p выводит адрес в шестнадцатеричном виде, %d - само число
printf("Value: %d at address: %p\n", *myNum, (void*)myNum);
}

    return 0;
}
#include <iostream>
#include <cstdint> //для типов типа uint8_t - хранит значение 0 -255 (int хранит 9223372036854)
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
        buffer = new uint8_t[size];
        }
        //деструктор: освобождаем все одним махом
        ~ArenaAllocator() {
            delete[] buffer;
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
        void reset() {
            offset = 0;
        }
};
// класс для теста

class Task {
    public:
    int id;
    Task(int _id) : id(_id) {
        printf(" [+] Task %d created\n", id);
            }
            ~Task() {
                printf(" [-] Task %d destroyed\n", id);
            }
};

int main() {
    ArenaAllocator arena(1024); //выдели 1 КБ
    
    printf("Allocating array of 5 Tasks...\n");
    int count = 5;

    //1. выделяем сырую память под 5 объектов Task
    void* rawMem = arena.allocate(sizeof(Task) * count, alignof(Task));

    if (!rawMem) {
        printf("Failed to allocate memory!\n");
        return 1;
    }

    //приводим указатель к типу Task*
    Task* army = (Task*)rawMem;

    //2. размещаем объекты (placement new)
    for (int i = 0; i < count; ++i) {
        new (&army[i]) Task(i + 1);
    }

    printf("Array address: %p\n", (void*)army);

    //3. ручной вызов деструктора (обязательно!)
    printf("Cleaning up tasks...\n");
    for (int i = 0; i< count; ++i) {
        army[i].~Task();
    }

    //4. сброс арены
    arena.reset();
    printf("Arena reset complete,\n");

    return 0;
}
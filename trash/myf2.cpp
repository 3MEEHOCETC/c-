#include <cstdio>
int main(){
    int money = 100;

    printf("Value: %d\n", money);
    printf("Address: %p\n", (void*)&money);//void* универсальная записка с адресом -
    // ему все равно что там, просто адрес в памяти
    return 0;
}
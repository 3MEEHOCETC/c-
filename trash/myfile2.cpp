#include <iostream>
int main() {   
 int money = 100; // создали переменную
 int* note = &money; // создали указатель который смотрит на переменную money
 *note = 200;// через * (указатель * означает залезть внутрь меняем значение
 printf("Money now: %d\n", money);
 return 0;
}
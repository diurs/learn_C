
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    //вместо макроса исп. константу
    const int SIZE = 20;
    //Размер массива должен быть задан явно, как "константное выражение"
    int A[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                  1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, rnd;
    int tmp;
 
    //Инициализируем генератор псевдослучайных чисел
    //В качестве начального числа берём системное время
    srand(time(NULL));
 
    //Алгоритм Дюрштенфельда, модифицированный алгоритма Фишера-Ятса
    //Элементарный алгоритм, записать который легче, чем выучить название
    for (i = SIZE - 1; i > 0; i--) {
        rnd = rand() % i;   //Случайное число в пределе от 0 до i
        tmp = A[i];
        A[i] = A[rnd];
        A[rnd] = tmp;
    }
 
    for (i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
}

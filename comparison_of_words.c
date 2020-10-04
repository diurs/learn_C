#include <stdio.h>
 
int main() {
    char firstWord[128];    //Первое слово
    char secondWord[128];   //Второе слово
    unsigned i;             //Счётчик
    int cmpResult = 0;      //Результат сравнения
 
    scanf("%127s", firstWord);
    scanf("%127s", secondWord);
 
    for (i = 0; i < 128; i++) {
        if (firstWord[i] > secondWord[i]) {
            //Больше даже если второе слово уже закончилось, потому что
            //тогда оно заканчивается нулём
            cmpResult = 1;
            break;
        } else if (firstWord[i] < secondWord[i]) {
            cmpResult = -1;
            break;
        }
    }
 
    printf("%d", cmpResult);
 
}

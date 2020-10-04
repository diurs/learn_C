#include <stdio.h>
#define BLOCKSIZE 16
int main()
{
  char a[4]; // объявлен массив a из 5 элементов
  int i;
  // Ввод элементов массива
  for (i = 0; i<4; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%s", &a[i]); // &a[i] - адрес i-го элемента массива
  }
  
char b[4]; // объявлен массив a из 5 элементов
  
  // Ввод элементов массива
  for (i = 0; i<4; i++) 
  {
    printf("b[%d] = ", i);
    scanf("%s", &b[i]); // &a[i] - адрес i-го элемента массива
  }
  char c[i];
  for (i = 0; i < BLOCKSIZE; i++)
    c[i] = a[i]^b[i];
  printf("%c", c[i]);
}




char a = 12;
  char b = 85;
  char c = a ^ b;
  printf("%d", c);

#include <stdio.h>
#define BLOCKSIZE 16


int main(){
	char i;
	char key[] = {2,2,3,5,6,7,8,7,9,1,2,2,3,4,5,6};
  	char b[] = {4,5,6,6,7,8,9,8,1,2,3,4,5,6,7,8};
  	char c[i];
    //int i;
    for (i = 0; i < BLOCKSIZE; i++)
    {
        c[i] = key[i] ^ b[i];
        printf("результат: %d \n", c[i]);
    }
  	
  	
	char j;
	char s[] = {252, 238, 221, 17, 207, 110, 49, 22,251, 196, 250,218, 35, 197,4,77};

	for (i = 0; i < 16 ; i++) {
	    for (j=0; j< 16 ; j++){
	    if (c[i] == j) 
	        c[i] = s[j];

	    }

	}
		printf("%d \n", c[i]);
}



/*


#include <stdio.h>

int main()
{
  char a[5]; // объявлен массив a из 5 элементов
  int i;
 
  for (i = 0; i<5; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%s", &a[i]);
  }
  
char b[5]; 
  int j;
 
  for (j = 0; j<5; j++) 
  {
    printf("b[%d] = ", j);
    scanf("%s", &b[j]); 
  }
  char c[] = a[i] ^ b[j];
  printf("%s", c);
}




#include <stdio.h>

int main()
{
  char a[] = {1,2,3,4,5}; // объявлен массив a из 5 элементов
 
    printf("a[%d] = ", i);

char b[5] = 
  
  char c[] = a[] ^ b[];
  printf("%s", c);
}


*/
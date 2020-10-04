#include<stdio.h>
#include<stdlib.h>
int Read(char *text,char *key, FILE *f);
int Xor(char *xor,char *key);
int main(int argc,char* argv[])
{
	FILE *f;
	if ((f = fopen("testovui.txt" ,  "r+")) == NULL)
	{
		perror("fopen");
		//printf("ошибка открытия\n");
		return -1;
	}
	char *ky;
	ky = (char*)malloc(10*sizeof(char));

	char *mas2;
	mas2 = (char*)malloc(10*sizeof(char));
	Read(ky ,mas2, f);
	Xor(ky, mas2);
	
	fclose(f);
	return 0;
}

int Read(char *text,char *key,FILE *f)
{

	printf("text: ");
	gets(text);
	
	printf("key: ");
	gets(key);
	printf("\ntext: %s\n", text);
	printf("in bytest\nThe text:\n");
	for(int i=0;i<10;i++) printf("%2x ",text[i]);
	printf("\nThe key:\n");
	for(int i=0; i<10;i++) printf("%2x ",key[i]);
	printf("\n");
	return 0;
}

int Xor(char *xor, char *key) 

	
{
	printf("Result: ");
	for (int i = 0; i < 9; ++i) 
	{
		xor[i]^= key[i];
		printf("%2x - ", xor[i]);
	}
	printf("\n");

	return 0;

}

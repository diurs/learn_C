#include<stdio.h>
int main() {

	int a1,a2,a3;
	scanf("%d" , &a1);
	scanf("%d" , &a2);
	scanf("%d" , &a3);

	if (a1 > a2) {
		if (a1 > a3) {
			printf("%d\n", a1);
		}
		if (a1 < a3) {
			printf("%d\n",a3);
		}
	}

	if (a1 < a2) {
		if (a2 < a3) 
		{
			printf("%d\n", a3);
		}
		if (a2 > a3)
		{
			printf("%d\n", a2);
		}
	}

}
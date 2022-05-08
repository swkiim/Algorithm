#include <stdio.h>
#include <math.h>
#define LEN 40

int main()
{
	int b[8] = {0, };
	int d = 0;
	int dec = 0;
	int a = 0;
	int n;
	
	printf("Binary num is ");
	scanf("%d", &n);
	
	while(n != 0)
	{
		d = n % 10;
		n /= 10;
		dec += d * pow(2, a);
		++a;
	}
	printf("Demical number is %d\n", dec);
	return dec;
}
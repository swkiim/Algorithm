#include <stdio.h>
#include <math.h>
#define LEN 40

int main()
{
	int b[8] = {0, };
	int s = 0;
	int d = 0;
	int dec = 0;
	int a = 0;
	
	for(a = 7; a >=0; a--)
	{
		printf("input : ");
		scanf("%d", &d);
		
		if(d == 1)
		{
			dec += pow(2, a);
		}
	}
	printf("\n Demical number is %d\n", dec);
}

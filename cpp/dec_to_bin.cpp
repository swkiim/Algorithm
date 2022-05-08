#include <stdio.h>
int main()
{
	int b[10] = {0, };
	int s = 0;
	int d = 0;
	int mok = 1;
	int nmg = 0;
	printf("input number : ");
	scanf("%d",&d);
	
	while (mok != 0)
	{
		mok = d/2;
		nmg = d - mok * 2;
		b[s++] = nmg;
		d = mok;
	}
	printf("Binary number is : ");
	for (int i = 7; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
	
	return 0;
}
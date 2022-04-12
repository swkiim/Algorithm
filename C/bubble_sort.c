#include <stdio.h>

void bubble(int a[])
{
	int temp;
    for(int i = 0; i < 4; i++)
    {
    	for(int j = 0; j < 4 - i; j++)
        	if(a[j] > a[j + 1])
            {
            	temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
	}
}

main()
{
	int a[] = {10, 53, 35, 100, 87}
    bubble(a);
    for(int i = 0; i < 5; i++)
    {
    	printf("d%", a[i]);
    }
}

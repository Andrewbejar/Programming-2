#include <stdio.h>

int main()
{
    int i, x, num;
    float sum;

    printf("insert a number:\n");

    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
	printf("1/%d", i);

        if(i != num)
	    printf(" + ");

	sum = sum+1.0/i;
    }

    printf("\n");

    printf("Sum of series up to %d terms is: %f\n", num, sum);

}

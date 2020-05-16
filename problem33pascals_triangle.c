
#include <stdio.h>

int main()
{
    int num, i, j, k, spaces, x;

    printf("enter in a number:\n");

    scanf("%d", &num);

    spaces = num-1;

    for(i=0; i<num; i++)
    {
	for(j=1; j<=spaces; j++)
	    {
	        printf(" ");
	    }

	for(k=0; k<=i; k++)
	{
	    if(k==0 || i==0)
                x = 1;
            else
	        x = x*(i-k+1)/k;

	    printf("%d ", x);
	}

	printf("\n");
	spaces--;
    }

}


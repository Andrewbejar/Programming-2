#include <stdio.h>

int main(){
    int i, j, num;

    printf("Enter in a number\n");

    scanf("%d", &num);

    printf("\n");

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=i; j++)
	{
            printf("%d ",j);
	}
        printf("\n");
    }
}

/*

1
1 2
1 2 3
1 2 3 4 5
1 2 3 4 5 6
1 2 3 4 5 6 7

*/

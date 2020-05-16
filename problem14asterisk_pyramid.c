#include <stdio.h>

int main()
{
    int i, j, k, num, spaces;

    printf("enter in a number\n");

    scanf("%d", &num);

    spaces = num-1;

    for(i=1; i<=num; i++)
    {
	for(j=1; j<=spaces; j++)
	   printf(" ");

        for(k=1; k<=i; k++)
            printf("* ");

    printf("\n");
    spaces--;

    }
}

/*

    *
   * *
  * * *
 * * * *
* * * * *

   *
  * *
 * * *
* * * *

  *
 * *
* * *

 *
* *

*

*/

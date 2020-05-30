#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, i;
    const char *N[] = {"null", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	

    for(i=a; i<=b; i++)
        {
            if(i>0 && i<10)
                printf("%s\n", N[i]);
            else if(i%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }

    return 0;
}



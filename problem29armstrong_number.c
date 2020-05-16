#include <stdio.h>
#include <math.h>

int main()
{
    int i, num, number, no, sum=0, y=0, x, digits=0;

    printf("insert number:\n");

    scanf("%d", &num);

    number = num;

    do
    {
	num = num/10;
	digits++;
    }
    while(num!=0);

    no = number;

    for(i=1; i<=digits; i++)
    {
        x = number%10;
	sum = sum+pow(x, digits);
	number=number/10;
    }

    if(sum==no)
	printf("\n%d is an armstrong number\n", no);

    else
	printf("\n%d is not an armstrong number\n", no);
}

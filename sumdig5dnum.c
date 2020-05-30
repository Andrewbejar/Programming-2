#include <stdio.h>

int main(){
	
    int n, x, num, sum, i, digits=0;
    scanf("%d", &n);
    
    num=n;

    do
    {
        n/=10;
        digits++;
    }
    while (n!=0);

    for(i=1; i<=digits; i++)
    {
	if(i!=1)
	    num/=10;

        x=num%10;
        sum+=num;

	if(i==digits)
	    break;

        sum = num;
    }
    printf("%d", sum);

    return 0;
}

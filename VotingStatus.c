#include <stdio.h>

int main()
{
        int age;

        printf("enter in your age\n");

        scanf("%d", age);

        if(age<18 && age>0)
        printf("You are not old enough to vote\n");

	else if(age>18)
		printf("You can vote\n")

	else
		printf("You are unable to vote\n")}

}

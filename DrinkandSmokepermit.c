/*Shows whether given an integer (age) you are not old enough
to drink nor smoke, smoke but not drink, smoke nor drink
*/

#include <stdio.h>

int main()
{
        int age;

        printf("enter in your age\n");

        scanf("%d", &age);

        if(age<18 && age>0)
        printf("You are not old enough to drink nor old enough to smoke");

        else if(age>=18 && age<21)
        printf("You are not old enough to drink but old enough to smoke");

        else if(age>21 && age<122)
        printf("You are old enough to both drink and smoke");

        else
        printf("invalid answer");
}

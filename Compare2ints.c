/*Show the relationship between two integers
using  <,> or =.
*/

#include <stdio.h>

int main()
{
int x, y;

printf("Input two integer values\n");

scanf("%d %d", &x, &y);

if (x == y)
printf("%d = %d\n", x, y);

else if(x > y)
printf("%d > %d\n", x, y);

else
printf("%d < %d\n", x, y);

return 0;

}

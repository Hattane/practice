#include <stdio.h>
int main( void )
{
int x, y;
printf ( " Enter two integers : ");
scanf ( "% d%d " , &x, &y);
printf ( " The result of x == y : %d\n", x == y);
printf ( " The result of x != y : %d\n", x != y);
printf ( " Result of x > y : %d\n", x > y);
printf ( " The result of x < y : %d\n ", x < y);
printf ( " The result of x >= y : %d\n ", x >= y);
printf ( " The result of x <= y : %d\n ", x <= y);
return 0;
}

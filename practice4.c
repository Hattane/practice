#include < stdio.h >
int main( void )
{
int year, result;
printf ( " Enter the year : " );
scanf ( "%d" , &year);
result = ( (year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
printf ( "result=%d \n" , result);
return 0;
}

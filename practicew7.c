#include <stdio.h>

int main(){
int number;
printf("enter an integer: ");
scanf("%d", &number);

printf("The entered value is %d. \n", number);

if(number > 0)
{
printf("It is a positive number.");
}

if (number == 0){
printf("Its a neutral number.");
}

else{
printf("Its a negative number.") ;
}

    return 0;
}

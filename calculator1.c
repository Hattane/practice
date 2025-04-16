#include <stdio.h>
int main()
{
char op;
int x, y, result;

printf("Enter your operation:\n");
scanf("%d %c %d", &x, &op, &y);

if(op == '+'){
    result = x + y;
}
    else if ( op == '-' ){
    result = x -y;
    }
    else if ( op == '*' ){
    result = x * y;
}
    else if ( op == '/' ){
    result = x / y;
}
    else if ( op == '%' ){
    result = x % y;
    }
    else{
    printf ( " Unsupported operator ." );
    }
    printf( "%d %c %d = %d \n" , x, op, y, result);


    return 0;
}

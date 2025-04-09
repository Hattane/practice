#include<stdio.h>
#define SEC_PER_MINUTE 60 
int main(void){
    int input,minute,second;
    printf("Please enter seconds:");
    scanf("%d", &input);
    minute = input / SEC_PER_MINUTE;
    second = input % SEC_PER_MINUTE;
    printf("%d second is %d minute and %d second.\n", input, minute, second);

    return 0;
}

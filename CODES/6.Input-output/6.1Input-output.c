#include<stdio.h>
int main(){
    int a=7,b=6;
    printf("Hare Narayan\n"); // \n is a new line charector(escape sequence)
    printf("Value of a = %d\n",a);
    a=10;
    printf("Value of a = %d and Value of b = %d\n",a,b);
    printf("Sum of %d and %d is %d\n",a,b,(a+b));
    return 0;
}
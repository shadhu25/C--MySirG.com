#include<stdio.h>
int main(){
    int x,y;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("the square of %d is %d\n",x,(x*x));
    printf("Enter any two numbers : ");
    scanf("%d %d",&x,&y);
    printf("the Entered values is %d and %d\n",x,y);
    return 0;
}
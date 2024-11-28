// Write C function that takes two integers as arguments and returns their sum.
#include<stdio.h>
void sum(){
    int a , b, sum ;
    printf("enter two number");
    scanf("%d %d", &a, &b);
    sum=a+b;
    printf("%d", sum);
    return;
}

int main(){
    sum();
    
    return 0;
}
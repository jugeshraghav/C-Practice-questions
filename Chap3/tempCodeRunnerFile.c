#include<stdio.h>
#include<math.h>
int main(){
    float a,absNum;
    printf("enter a number: \n");
    scanf("%f",&a);
    absNum= abs(a);
    printf("The absolute of %f is %f.",a,absNum);
    return 0;
}
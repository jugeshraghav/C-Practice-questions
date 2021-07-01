//Author:Jugesh Raghav
//Date: 25-04-21
//Description:Functions

//Program 1
//
// #include<stdio.h>
// #include<conio.h>
// void message();
// int main(){
//     printf("hiii\n");
//      message();
// }
// void message(){
// printf("how are you");
// }

//program 2
// #include<stdio.h>
// #include<conio.h>
// int fact(int);
// int main(){
//     int a,Factorial;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     Factorial = fact(a);
//     printf("The factorial is %d",Factorial);
// }
// int fact(int n){
//     int i,Fact=1;
//     for(i=1;i<=n;i++)
//     Fact = Fact*i;
//     return Fact;
// }

//program 3
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int calcPower(int,int);
// int main(){
//     int a,b,power;
//     printf("Enter two values: ");
//     scanf("%d%d",&a,&b);
//     power =calcPower(a,b);
//     printf("%d to the power of %d is %d ",a,b,power);
//     return 0;
// }
// int calcPower(int x,int y){
//     int powerVal = pow(x,y);
//     return powerVal;
// }

//Program 4
// #include<stdio.h>
// #include<conio.h>
// void leapYear(int);
// int main(){
//     int year;
//     printf("Enter a year : ");
//     scanf("%d",&year);
//     leapYear(year);
// }
// void leapYear(int yr){
//   if(yr>999 && yr<10000){
//         if((yr%4==0 && yr%100!=0) || yr%400==0){
//             printf("It is a leap year");
//         }
//         else{
//             printf("It is not a leap year");
//         }
//     }
//     else{
//         printf("enter a correct format of year");
//     }
// }

// #include<stdio.h>
// int x=100;
// int g();
// int h();
// int main(){
//     int x=20;
//     g();
// }
// int g(){
//     h();
// }
// int h(){
//     printf("%d",x);
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d",&n);
    int sum=0;
    int i;
    for(i=0;i<=5;i++){
        sum= sum +(n%10);
        n = n/10;  
    }
     printf("%d",sum);
 return 0; 
}

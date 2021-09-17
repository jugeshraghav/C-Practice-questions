//Author:Jugesh Raghav
//Date: 20- August- 2021
//chapter: basics of C programming language.

// (a) If cost price and selling price of an item are input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit he
// made or loss he incurred.
// #include<stdio.h>
// int main(){
//     float cp, sp;
//     printf("Enter the cost price and the selling price: \n");
//     scanf("%f %f",&cp,&sp);
//     if(cp>sp){
//         printf("Loss of Rs: %f", cp-sp);
//     }
//     else{
//         printf("Profit of Rs: %f", sp-cp);
//     }
//     return 0;
// }


// (b) Any integer is input through the keyboard. Write a program to find
// out whether it is an odd number or even number.
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a number: \n");
//     scanf("%d",&a);
//     if(a%2==0)
//     printf("%d is even",a);
//     else
//     printf("%d is odd",a);

//     return 0;
// }


// (c) Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.
// (Hint: Use the % (modulus) operator)
// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter a year: \n");
//     scanf("%d", &year);
//     if(year%4==0){
//         if(year%400==0){
//             if(year%100!=0){
//                 printf("%d is a leap year", year);
//             }
//             else{
//                 printf("%d is not a leap year", year);
//             }
//         }
//         else{
//             printf("%d is not a leap year", year);
//         }
//     }
//     else{
//        printf("%d is not a leap year", year);
//     }
//     return 0;
// }


// (d) According to the Gregorian calendar, it was Monday on the date
// 01/01/01. If any year is input through the keyboard write a program
// to find out what is the day on 1st January of this year.
// (e) A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine whether
// the original and reversed numbers are equal or not.
// (f) If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.
// (g) Write a program to check whether a triangle is valid or not, when
// the three angles of the triangle are entered through the keyboard.
// A triangle is valid if the sum of all the three angles is equal to 180
// degrees.
// (h) Write a program to find the absolute value of a number entered
// through the keyboard.
// (i) Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.
// (j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
// to check if all the three points fall on one straight line.
// (k) Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)
// (l) Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin.
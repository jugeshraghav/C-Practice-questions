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
// #include<stdio.h>
// int main(){
//     int number, revNum, d1,d2,d3,d4,d5;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&number);
//     d5=number%10;
//     number=number/10;
//     d4=number%10;
//     number=number/10;
//     d3=number%10;
//     number=number/10;
//     d2=number%10;
//     number=number/10;
//     d1=number%10;
//     number=number/10;
//     revNum=d5*10000+d4*1000+d3*100+d2*10+d1;
//     number=d1*10000+d2*1000+d3*100+d4*10+d5;
//     printf("The reversed number is: %d \n", revNum);
//     if(number==revNum){
//     printf("both the numbers are equal");
//     }else
//     {
//     printf("The numbers are not equal");
//     }
//     return 0;
// }


// (f) If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.
// #include<stdio.h>
// int main(){
//     int Ram, Shyam, Ajay;
//     printf("Enter the ages of Ram , Shyam, Ajay: \n");
//     scanf("%d %d %d",&Ram,&Shyam,&Ajay);
//     if(Ram<Shyam && Ram<Ajay){
//         printf("Ram is the youngest among the three.");
//     }
//     else if(Shyam<Ram && Shyam<Ajay){
//         printf("Shyam is the youngest among the three.");
//     }
//     else if(Ajay<Ram && Ajay<Shyam){
//         printf("Ajay is the youngest among the three.");
//     }
// return 0;
// }


// (g) Write a program to check whether a triangle is valid or not, when
// the three angles of the triangle are entered through the keyboard.
// A triangle is valid if the sum of all the three angles is equal to 180
// degrees.
// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("Enter the sides of triangle: \n");
//     scanf("%f %f %f",&a,&b,&c);
//     if((a+b)>c && (b+c)>a && (a+c)>b)
//     printf("The triangle is possible with sides: %f %f %f",a,b,c);
//     else
//     printf("The triangle is not possible with sides: %f %f %f",a,b,c);
// }


// (h) Write a program to find the absolute value of a number entered
// through the keyboard.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,absNum;
//     printf("enter a number: \n");
//     scanf("%f",&a);
//     absNum= fabs(a);
//     printf("The absolute of %f is %f.",a,absNum);
//     return 0;
// }


// (i) Given the length and breadth of a rectangle, write a program to find
// whether the area of the rectangle is greater than its perimeter. For
// example, the area of the rectangle with length = 5 and breadth = 4
// is greater than its perimeter.
// #include<stdio.h>
// int main(){
//     float l,b,area,peri;
//     printf("Enter the length and breadth of rectangle: \n");
//     scanf("%f %f",&l,&b);
//     peri=(l+b)*2;
//     area=l*b;
//     printf("The perimeter is :%f \nThe area is: %f \n", peri, area);
//     if(peri>area){
//         printf("Perimeter is greate than the area.");
//     }
//     else{
//         printf("Area is greater than the perimeter.");
//     }
//     return 0;
// }


// (j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program
// to check if all the three points fall on one straight line.
// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main(){
//     int x1,y1,x2,y2,x3,y3,d1,d2,d3,s1,s2,s3;
//     printf("Enter the value of all the points: \n");
//     scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
//     d1=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
//     d2=sqrt(pow(abs(x3-x1),2)+pow(abs(y3-y1),2));
//     d3=sqrt(pow(abs(x2-x3),2)+pow(abs(y2-y3),2));
//     printf("The distances are: %d %d %d",d1,d2,d3);
//     if((d1+d2)==d3 || (d1+d3)==d2 || (d2+d3)==d1)
//     printf("The points are collinear.");
//     else
//     printf("The points are not collinear.");
// }

// Or 

// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// int main(){
//     int x1,y1,x2,y2,x3,y3,d1,d2,d3,s1,s2,s3;
//     printf("Enter the value of all the points: \n");
//     scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
//     s1=abs(x2-x1)/abs(y2-y1);
//     s2=abs(x3-x1)/abs(y3-y1);
//     s3=abs(x3-x2)/abs(y3-y2);
//     if(s1==s2 && s1==s3)
//     printf("The points are collinear.");
//     else
//     printf("The points are not collinear.");
//     return 0;
// }

// (k) Given the coordinates (x, y) of center of a circle and its radius, write
// a program that will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
// functions)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x1,y1,radius,x2,y2,dis;
//     printf("Enter the radius of circle: \n");
//     scanf("%d",&radius);
//     printf("Enter the coordinates of center: \n");
//     scanf("%d %d",&x1,&y1);
//     printf("Enter the coordinates of point: \n");
//     scanf("%d %d",&x2,&y2);
//     dis=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
//     if(dis<radius)
//     printf("The point lies inside the circle");
//     else if(dis==radius)
//     printf("The point lies on the circle");
//     else if(dis>radius)
//     printf("The point lies outside the circle");
//     return 0;
// }


// (l) Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin.
    // #include<stdio.h>
    // int main(){
    //    int x,y;
    //    printf("Enter the coordinates: \n");
    //    scanf("%d %d",&x,&y);
    //    if(x==0 && y!=0)
    //    printf("The point lies on the y-axis");
    //    else if(y==0 && x!=0)
    //    printf("The point lies on the x-axis");
    //    else if(x==0 && y==0)
    //    printf("The point lies on the origin");
    //    else
    //    printf("The point lies somewhere on the plane");
    //    return 0; 
    // }
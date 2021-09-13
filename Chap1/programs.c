//Author:Jugesh Raghav
//Date: 20- August- 2021
//chapter: basics of C programming language.

// (a) Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.
/*#include<stdio.h>
#include<conio.h>
int main(){
    float bsalary, dallow, hrent, gsalary;
    printf("Enter the basic salary of Ramesh : ");
    scanf("%f", &bsalary);
    dallow = 0.4 * bsalary;
    hrent = 0.2 * bsalary;
    gsalary = bsalary + dallow + hrent;
    printf("The gross salary of Ramesh is: %f", gsalary);
}*/


// (b) The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.
/*#include<stdio.h>
int main(){
    int km, m ,ft, inch,cm;
    printf("Enter the distance in km: ");
    scanf("%d",&km);
    m= km*1000;
    cm=m*100;
    inch= cm/2.54;
    ft=inch/12;
    printf("THe distance in km is : %d\n",km);
    printf("THe distance in m is : %d\n",m);
    printf("THe distance in cm is : %d\n",cm);
    printf("THe distance in ft is : %d\n",ft);
    printf("THe distance in inch is : %d\n",inch);
}*/



// (c) If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int m1,m2, m3, m4, m5,agg;
//     float  per;
//     printf("Enter the marks obtained in 5 subjects: ");
//     scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
//     agg= m1+m2+m3+m4+m5;
//     per=agg/5;
//     printf("The aggregate marks of student are: %d\n", agg);
//     printf("The percentage of student is : %f", per);
// }



// (d) Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     float fah, centi;
//     printf("Enter the temperatur(in fahrenheit)");
//     scanf("%f", &fah);
//     centi = 9*(fah-32)/5;
//     printf("The temperture( in celcius) is: %f", centi);
// }



// (e) The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     float length,breadth, areaR, perimeter;
//     printf("Enter the length and breadth of the Rectangle:");
//     scanf("%f %f",&length,&breadth);
//     areaR= length*breadth;
//     perimeter = 2*(length+breadth);
//     printf("The area of reactangle is : %f and \n the perimeter of rectangle is : %f \n", areaR,perimeter);
//       float radius, areaC ,circumference;
//     printf("Enter the radius of circle:");
//     scanf("%f",&radius);
//     areaC= 3.14*radius*radius;
//     circumference = 2*3.14*radius;
//     printf("The area of circle is : %f and \n the circumference of circle is : %f", areaC, circumference);
// }


//(f)) Paper of size A0 has dimensions 1189 mm x 841 mm. Each
// subsequent size A(n) is defined as A(n-1) cut in half parallel to its
// shorter sides. Thus paper of size A1 would have dimensions 841
// mm x 594 mm. Write a program to calculate and print paper sizes
// A0, A1, A2, … A8
// #include<stdio.h>
// int main(){
//     int A0w, A0h, A1w, A1h, A2w, A2h, A3w, A3h, A4w, A4h, A5w, A5h, A6w, A6h, A7w, A7h,A8w, A8h;
//     printf("enter the width and height of paper 0: \n");
//     scanf("%d %d",&A0w,&A0h);
//     A1w=A0h;
//     A1h=A0w/2;
//     printf("The width and height of paper 1: %d %d \n", A1w,A1h);
//       A2w=A1h;
//     A2h=A1w/2;
//     printf("The width and height of paper 1: %d %d \n", A2w,A2h);
//        A3w=A2h;
//     A3h=A2w/2;
//     printf("The width and height of paper 1: %d %d \n", A3w,A3h);
//        A4w=A3h;
//     A4h=A3w/2;
//     printf("The width and height of paper 1: %d %d \n", A4w,A4h);
//     A5w=A4h;
//     A5h=A4w/2;
//     printf("The width and height of paper 1: %d %d \n", A5w,A5h);
//     A6w=A5h;
//     A6h=A5w/2;
//     printf("The width and height of paper 1: %d %d \n", A6w,A6h);
//     A7w=A6h;
//     A7h=A6w/2;
//     printf("The width and height of paper 1: %d %d \n", A6w,A6h);
//     A8w=A7h;
//     A8h=A7w/2;
//     printf("The width and height of paper 1: %d %d \n", A8w,A8h);
//     return 0;
// }
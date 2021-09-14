//Author:Jugesh Raghav
//Date: 20- August- 2021
//chapter: basics of C programming language.

// (a) If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits. (Hint: Use the modulus
// operator ‘%’)
// #include<stdio.h>
// int main(){
//     int num, sumOfDigits=0,i,digit;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&num);
//     for (i=1;i<=5;i++){
//         digit = num%10;
//         num=num/10;
//         sumOfDigits=sumOfDigits+digit;
//     }
//     printf("the sum of digit is : %d", sumOfDigits);
//     return 0;
// }

//or

// #include<stdio.h>
// int main(){
//     int num, sumOfDigits,d1,d2,d3,d4,d5;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&num);
//         d1 = num%10;
//         num=num/10;
//          d2 = num%10;
//         num=num/10;
//          d3 = num%10;
//         num=num/10;
//          d4 = num%10;
//         num=num/10;
//          d5 = num%10;
//         num=num/10;

//        sumOfDigits=d1+d2+d3+d4+d5;
//     printf("the sum of digit is : %d", sumOfDigits);
//     return 0;
// }


// (b) If a five-digit number is input through the keyboard, write a
// program to reverse the number.
// #include<stdio.h>
// int main(){
//     int num, revNum,d1,d2,d3,d4,d5;
//     printf("Enter a five digit number: \n");
//     scanf("%d",&num);
//         d5 = num%10;
//         num=num/10;
//          d4 = num%10;
//         num=num/10;
//          d3 = num%10;
//         num=num/10;
//          d2 = num%10;
//         num=num/10;
//          d1 = num%10;
//         num=num/10;

//       revNum= d5*10000+d4*1000+d3*100+d2*10+d1;
//     printf("the reversed num is : %d", revNum);
//     return 0;
// }


// (c) If lengths of three sides of a triangle are input through the
// keyboard, write a program to find the area of the triangle.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float a,b,c,semiP,area;
//     printf("Enter the sides of triangle: \n");
//     scanf("%f %f %f",&a,&b,&c);
//     semiP=(a+b+c)/2;
//     area=sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));
//     printf("the area of trianlge is : %f", area);
//     return 0;
// }


// (d) Write a program to receive Cartesian co-ordinates (x, y) of a point
// and convert them into polar co-ordinates (r,s ).
// Hint: r = sqrt ( x2+ y2) and s=tan-1( y / x )
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x,y,r,s;
//     printf("Enter the cartesian coordinates(in degrees): \n");
//     scanf("%d %d",&x,&y);
//     x=x*(3.14/180);
//     y=y*(3.14/180);
//     r=sqrt(pow(2,x)+pow(2,x));
//     s=atan(y/x);
//     printf("The value of polar coordinates is : %d %d", r,s);
// }


// (e) Write a program to receive values of latitude (L1, L2) and longitude
// (G1, G2), in degrees, of two places on the earth and output the
// distance (D) between them in nautical miles. The formula for
// distance in nautical miles is:
// D = 3963 cos-1( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     float L1,L2,G1,G2,D;
//     printf("Enter tha values of latitudes: \n");
//     scanf("%f %f", &L1,&L2);
//     printf("Enter the values of longitudes: \n");
//     scanf("%f %f",&G1,&G2);
//     D= 3963* acos((sin(L1)*sin(L2))+((cos(L1)*cos(L2))*cos(G2-G1)));
//     printf("The distance in nautical miles is : %f",D);
//     return 0;
// }



// (f) Wind chill factor is the felt air temperature on exposed skin due to
// wind. The wind chill temperature is always lower than the air
// temperature, and is calculated as per the following formula:
// wcf = 35.74 + 0.6215t + ( 0.4275t - 35.75 ) * v
// 0.16
// where t is the temperature and v is the wind velocity. Write a
// program to receive values of t and v and calculate wind chill factor
// (wcf).
// (g) If value of an angle is input through the keyboard, write a program
// to print all its Trigonometric ratios.
// (h) Two numbers are input through the keyboard into two locations C
// and D. Write a program to interchange the contents of C and D.
// (i) Consider a currency system in which there are notes of seven
// denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
// a sum of Rs. N is entered through the keyboard, write a program to
// compute the smallest number of notes that will combine to give Rs.
// N
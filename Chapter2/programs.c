//Author:Jugesh Raghav
//Des:Calculation of simple interest
//Date:21-04-21

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int p,r,t,si=0;
//     printf("Enter Principal:");
//     scanf("%d",&p);
//     printf("Enter Rate:");
//     scanf("%d",&r);
//     printf("Enter Time:");
//     scanf("%d",&t);
//     si=(p*r*t)/100;
//     printf("The Simple Interest is=%d",si);
// }


// Program 1: Find area of triangle using herons formula
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c,s,Area;
//     printf("enter three sides of triangle:");
// //scanf("%d %d %d\n",&a,&b,&c); eror:it takes 4 values instead of three
//     scanf("%d %d %d",&a,&b,&c);
//     s=(a+b+c)/2;
//     Area=sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("The area of triangle is : %d",Area);
// }

//program 2: reverse a five digit number

// #include<stdio.h>
// int main(){
//     int num,d1,d2,d3,d4,d5;
//     long int newNo;
//     printf("enter a five digit no: ");
//     scanf("%d",&num);
//     d5=num%10;
//     num=num/10;
//     d4=num%10;
//     num=num/10;
//     d3=num%10;
//     num=num/10;
//     d2=num%10;
//     num=num/10;
//     d1=num%10;
//     num=num/10;
//     newNo=d5*10000+d4*1000+d3*100+d2*10+d1;
//     printf("so,new number is : %ld",newNo);
// }

/**Program 3: finding minimum number of notes**/
// #include<stdio.h>
// int main(){
//      int money,nohun,nofifty,notwenty,noten,nofive,notwo,noone;
//      printf("enter the money: ");
//      scanf("%d",&money);
//      nohun=money/100;
//      money=money%100;
//      nofifty=money/50;
//      money=money%50;
//      notwenty=money/20;
//      money=money%20;
//      noten=money/10;
//      money=money%10;
//      nofive=money/5;
//      money=money%5;
//      notwo=money/2;
//      money=money%2;
//      noone=money;
//      printf("total no of rs 100 notes are:%d\n",nohun);
//      printf("total no of rs 50 notes are:%d\n",nofifty);
//      printf("total no of rs 20 notes are:%d\n",notwenty);
//      printf("total no of rs 10 notes are:%d\n",noten);
//      printf("total no of rs 5 notes are:%d\n",nofive);
//      printf("total no of rs 2 notes are:%d\n",notwo);
//      printf("total no of re 1 notes are:%d\n",noone);
     
//      printf("total no of notes are:%d",nohun+nofifty+notwenty+noten+nofive+notwo+noone);
// }

/**Program 4: Two numbers are input through the keyboard into two locations C and D . Write a 
 program to interchange the  contents of C and D.***/
//  #include<stdio.h>
//  int main(){
//      int C,D,T;
//      printf("Enter two numbers:  ");
//      scanf("%d %d",&C,&D);
//      printf("the original values of C= %d and D= %d\n",C,D);
//      T=C;
//      C=D;
//      D=T;
//      printf("the new values of C= %d and D= %d",C,D);
//  }

/*Program 5: If the value of an angle is input through the keyboard , WAP to print all its trignometric ratios.*/
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float angle;
//     printf("enter the angle in degrees: ");
//     scanf("%f",&angle);
//     angle = angle*3.14/180;
//     printf("sin = %f\n",sin(angle));
//     printf("cosec = %f\n",1/sin(angle));
//     printf("cos = %f\n",cos(angle));
//     printf("sec = %f\n",1/cos(angle));
//     printf("tan = %f\n",tan(angle));
//     printf("cot = %f",1/tan(angle));

// }

/*Program 6: WAP to calculate the sum of the digits of a five digit number entered through the keyboard.*/
// #include<stdio.h>
// int main(){
//     int number, sum=0,i;
//     printf("Enter a five digit number: ");
//     scanf("%d",&number);
//     for(i=1;i<=5;i++){
//         sum=sum+(number%10);
//         number=number/10;
//     }
//     printf("sum of all the digits is : %d",sum);
// }

/*Program 7:WAP to recieve Cartesian coordinates (x,y) of a point and convert them into polar coordinates (r,s)
Hint: r=sqrt(x*x + y*y) and s=atan(y/x)  here atan= tan inverse*/

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x,y;
//     float r,s;
//     printf("enter two Cartesian coordinates:");
//     scanf("%d %d",&x,&y);
//     printf("The Cartesian coordinates are: (%d,%d)\n",x,y);
//     r=sqrt((x*x)+(y*y));
//     s=atan(y/x);
//     printf("The polar coordinates are: (%d, %d)",r,s);
// }

/*Program 8:WAP to recieve the values of latitude(l1,l2) and longitude(g1,g2), in degrees, of two places on the earth 
and output the distance d between them in nautical miles. The formula for distance in nautical miles is 
d=3963*acos(sinl1*sinl2+cosl1*cosl2*cos(g2-g1))*/

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float l1,l2;
//     float g1,g2;
//     float d;

//     printf("Enter the latitudes l1 and l2(in degrees): ");
//     scanf("%f%f",&l1,&l2);
//     printf("Enter the longitudes g1 and g2(in degrees): ");
//     scanf("%f%f",&g1,&g2);
//     l1=l1*3.14/180;
//     l2=l2*3.14/180;
//     g1=g1*3.14/180;
//     g2=g2*3.14/180;

// d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
// printf("The distance in nautical miles is : %0.2f",d);
// }
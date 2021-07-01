/**Author: Jugesh Raghav ***/
/**Dated: 1 may 2021 **/

/*******************************************PROGRAM 1*****************************************************/
/*A five-digit number is entered through the keyboard. Write s program to obtain the reversed number and to 
determine whether the original number and reversed numbers are equal or not.*/
// #include<stdio.h>
// int main(){
//     int number,d1,d2,d3,d4,d5,newnumber;
//     printf("Enter a five digit number: ");
//     scanf("%d",&number);
//     printf("number is : %d\n",number);
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
    
//     number=d1*10000+d2*1000+d3*100+d4*10+d5;
//     newnumber=d5*10000+d4*1000+d3*100+d2*10+d1;
//     printf("new number is : %d\n",newnumber);
    
//    if(number==newnumber)
//    printf("Both the numbers are equal");
//    else
//    printf("Both the numbers are not equal");

//     return 0;
// }

/***********************************PROGRAM 2 *********************************************************************/
/*If ages of ram, shyam and ajay are input through the keyboard. WAP to determine the youngest of the three.*/

// #include<stdio.h>
// int main(){
//     int RamAge,ShyamAge,AjayAge;
//     printf("Enter the age of Ram, Shyam and Ajay: ");
//     scanf("%d%d%d",&RamAge,&ShyamAge,&AjayAge);
//     if(RamAge<ShyamAge && RamAge<AjayAge)
//     printf("Ram is the youngest of all.");
//     else if(ShyamAge<RamAge && ShyamAge<AjayAge)
//     printf("Shyam is the youngest of all.");
//     else if(AjayAge<RamAge && AjayAge<ShyamAge)
//     printf("Ajay is the youngest of all.");
//     else
//     printf("All are of same age.");

//     return 0;
// }

/************************** PROGRAM 3 *****************************************************************/
/*WAP to check whether the triangle is valid or not based on angles.*/

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the values of three angles(whole numbers): ");
//     scanf("%d%d%d",&a,&b,&c);
//     if((a+b+c)==180)
//     printf("It is a valid triangle.");
//     else
//     printf("It is not a valid triangle.");

//     return 0;
// }

/***********************************PROGRAM 4****************************************************/
/*WAP to find the absolute value of a number entered through the keyboard.*/
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number: ");
//     scanf("%d",&number);
//     // printf("The absolute of the entered number is: %d",abs(number)); it is also correct
//     if(number>=0)
//     printf("The absolute of the entered number is: %d\n",number);
//     else
//      printf("The absolute of the entered number is: %d",-number);
//     return 0;
// }


/*************************************PROGRAM 5***************************************************/
// #include<stdio.h>
// int main(){
//     int l,b,area,perimeter;
//     printf("Enter the length and breadth of the rectangle: ");
//     scanf("%d%d",&l,&b);
//     area=l*b;
//     perimeter=2*(l+b);
//     printf("The area is : %d\n",area);
//     printf("The perimeter is : %d\n",perimeter);

//     if(area>perimeter)
//     printf("The area is greater.");
//     else if(area<perimeter)
//     printf("Perimeter is greater.");
//     else
//     printf("Both are equal.");

//     return 0;
// }


/********************************************* PROGRAM 7 ***********************************************************/ 

// #include<stdio.h>
// int main(){
// int x,y;
// printf("Enter the coordinates: ");
// scanf("%d%d",&x,&y);
// if(x==0){
//     if(y==0){
// printf("The coordinates lie on the origin.");
// }
// else
// printf("The coordinates lie on y-axis");
// }
// else{
//     if(y==0){
//     printf("The coordinates lie on x-axis.");
//     }
//     else
//     printf("The coordinates lie somewhere on the plane.");
// }

// return 0;

// }

/**********************************PROGRAM 8 **********************************************/

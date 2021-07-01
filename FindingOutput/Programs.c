//author : Jugesh raghav
//Date : 27-04-21
//topic:Pointers

///program 1 //output=52
// #include<stdio.h>
// void fun(int,int);
// int main(){
//     int i = 5, j=2;
//     fun(i,j);
//     printf("%d%d\n",i,j);
//     return 0;
// }
// void fun(int i, int j){
//     i=i*i;
//     j=j*j;
// }


//program 2 //output = 254
// #include<stdio.h>
// void fun (int *,int *);
// int main(){
//     int i=5,j=2;
//     fun(&i,&j);
//     printf("%d%d\n",i,j);
//     return 0;
// }
// void fun(int *i,int *j){
//     *i = *i * *i;
//     *j = *j * *j;
// }

//Program 3
// #include<stdio.h>
// int main(){
//     float a= 13.5;
//     float *b, *c;
//     b=&a;
//     c=b;
//     printf("%u%u%u\n",&a,b,c);
//     printf("%f%f%f%f%f\n",a,*(&a),*&a,*b,*c);

// #include<stdio.h>
// int main(){
//     int a = 4;
//     int *ptr = &a;
//     int **ptr2 = &ptr;
//     int ***ptr3 = &ptr2;
//    printf("Address of a is %d\n",&a);
//    printf("Address of ptr is %d\n",&ptr);
//    printf("Address of ptr2 is %d\n",&ptr2);
//     printf("Address of ptr3 is %d\n",&ptr3);
//    printf(" Value at a %d\n",a);
//    printf(" Value at ptr %d\n",ptr);
//    printf(" Value at ptr2 %d\n",ptr2);
//    printf(" Value at ptr3 %d\n",ptr3);
//    printf("%d\n",*ptr);
//    printf("%d\n",**ptr2);
//    printf("%d\n",***ptr3);
// }


//Topic:Recursion
// #include<stdio.h>
// int main(){
//     printf("Hii\n");
//     main();
//     return 0;
// }
///output:infinite loop

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a=0;
//     a++;
//     if(a<=5){
//         printf("hii\n");
//         exit(0);
//         main();
//     }
//     return 0;
// }
///output:hii

///Topic:Data Types Revisited

//Program 1
// #include<stdio.h>
// int i=0;
// void val();
// int main(){
//     printf("main's i= %d\n",i);
//     i++;
//     val();
//     printf("main's i = %d\n",i);
//     val();
//     printf("main's i = %d\n",i);
//     val();
//     return 0;
// }
// void val(){
//     i = 100;
//     printf("val's i = %d\n",i);
//     i++;
// }

//Program 2
// #include<stdio.h>
// int main(){
//     static int count = 5;
//     printf("count = %d\n",count--);
//     if(count !=0)
//     main(); 
//     return 0;
// }

//Program 3
// #include<stdio.h>
// void func();
// int main(){
//     func();
//     func();
//     return 0;
// }
// void func(){
//     auto int i = 0;
//     register int j = 0;
//     static int k = 0;
//     i++;
//     j++;
//     k++;
//     printf("%d%d%d\n",i,j,k);
// }

//Program 4
// #include <stdio.h>
// int x=10;
// int main(){
//     int x= 20;
//     {
//         int x=30;
//         printf("%d\n",x);
//     }
//     printf("%d\n",x);
//     return 0;
// }


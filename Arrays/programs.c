// #include<stdio.h>
// int main(){
// int original[10]={0,1,2,3,4,5,6,7,8,9};
// int i,t,j;

// // for(i=0;i<=9;i=i+2){
// // t=original[i];
// // original[i]=original[i+1];
// // original[i+1]=t;
// // }

// for(i=0;i<=8;i=i+2){
// for(j=1;j<=9;j=j+2){
// t=original[i];
// original[i]=original[j];
// original[j]=t;
// }}

// for(i=0;i<=9;i++){
// printf("%d ", original[i]);
// }
// return 0;
// }


/**program 1: to reverse the array**/
// #include<stdio.h>
// int main(){
// int original[5]={1,2,3,4,5};
// int new[5];
// int i,j;
 
//   for(i=0,j=4;i<=4,j>=0;i++,j--){
   
//        new[i]=original[j];
//         printf("%d",new[i]);  
//   }
//                                                          //printf("\n%d",new[0]); optional
// return 0;
// }



/**Program 2: to find the frequency **/
// #include<stdio.h>
// int main(){
//   int arr[10]={1,2,1,1,3,4,5,5,3,5};
//   int i,count=0,number;
//   printf("enter the number to be searched: ");
//   scanf("%d",&number);
//   for(i=0;i<=9;i++){
//     if(arr[i]==number){
//       count=count+1;
//     }
//   }
//    printf("frequency is: %d",count);
// }


/**Program 3***/
// #include<stdio.h>
// int main(){
//   int arr[25];
//   int i,countEven=0,countOdd=0,numberPositive=0,numberNegative=0;
//   printf("enter 25 numbers: ");
//   for(i=0;i<=24;i++)
//   scanf("%d",&arr[i]);
/**to find th number of even and number of odd variables in the array*/
//   for(i=0;i<=24;i++){
//     if(arr[i]%2==0){
//       countEven=countEven+1;
//     }
//     else{
//      countOdd=countOdd+1;
//     }
//   }
//     printf("number of even numbers in array are: %d \n",countEven);
//    printf("number of odd numbers in array are: %d \n",countOdd);
/***to find number of positive an dnumber of negetive variables in array***/
// for(i=0;i<=24;i++){
//     if(arr[i]>=0){
//       numberPositive=numberPositive+1;
//     }
//     else{
//      numberNegative=numberNegative+1;
//     }
//   }
//     printf("number of positive numbers in array are: %d \n ",numberPositive);
//    printf("number of negative numbers in array are: %d ",numberNegative);

// return 0;
// }

/****************************IMPORTANT*****************************************************************/
// #include<stdio.h>
// int main(){
//     int a[3]={10,12,3};//name of array (here a) acts as a pointer and stores the address of first element of array
//     printf("%d\n",*a); // it returns tha value at first address of array(10)
//     printf("%d\n",*a+1);// it returns the value at first address of array plus 1(10+1=11)
//     printf("%d",*(a+1));//value at adress of first element of array plus one(value at a[1])
// }
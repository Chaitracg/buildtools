#include<stdio.h>  
fact()    
{    
 int i,fact=1,number;    
 printf("==============================================\n");
 printf("***FACTORIAL***\nEnter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("\nFactorial of %d is: %d\n",number,fact);    
// return 0;  
}   

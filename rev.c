#include <stdio.h>
rev()
{
  char str[1000], rev[1000];
  int i, j, count = 0;
  printf("==============================================\n");
  printf("Enter the String : \n");
  scanf("%s", str);
  //finding the length of the string
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;

  //reversing the string by swapping
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }

printf("String After Reverse: %s\n", rev);
}

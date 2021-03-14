#include <stdio.h>
#include <string.h>

void main()
{
 int i = 0, sum = 0, length;
 char name[50];

 printf("\nPlease Enter any name You wish\n");
 scanf("%s", name);

 while(name[i]!='\0')
  {
   printf("\nThe ASCII value of the Character %c = %d\n",
   name [i], name [i]);
   sum = sum + name [i];
   i++;
  }
 printf("\nSum of all characters : %d ", sum);
}

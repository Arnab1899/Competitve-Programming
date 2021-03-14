 #include<stdio.h>
 int main()

 {
     char arry[20];
     int i;
     int j = 0;

     printf("Enter The Input: ");
     gets(arry);

     for(i=0; arry[i]!='\0'; i++)
     {
         j++;
     }

     printf("The length of '%s' = %d",arry,j);


     return 0;
 }

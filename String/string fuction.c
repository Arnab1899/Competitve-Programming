#include<stdio.h>
#include<string.h>

int main()
{
    char str1[80],str2[80];
    int i;

    printf("Enter The First String: ");
    gets(str1);

    printf("Enter The Second String: ");
    gets(str2);


    printf("%s Is %d Chars long\n",str1,strlen(str1));
    printf("%s Is %d Chars long\n",str2,strlen(str2));

    i = strcmp(str1,str2);

    if(!i)
    {
        printf("The Strings Are Equal.\n");
    }
    else if (i<0)
    {
        printf("%s Is Less Than %s.\n",str1,str2);
    }

    else
    {
        printf("%s is greater than %s.\n",str1,str2);
    }

    if(strlen(str1) + strlen(str2) < 80)
    {
        strcat(str1 , str2);
        printf("%s\n",str1);
    }

    strcpy(str1 , str2);
    printf("%s %s \n",str1,str2);



    return 0;
}

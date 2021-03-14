#include <stdio.h>
#include <string.h>

int main()
    {
    char str[3];
    int i,j;
    int s = 0;

    printf("Enter a string:");
    scanf("%s", str);

    j = strlen(str);

    for(i=0; i<j ;i++){
        if(str[i] != str[j-i-1]){
            s = 1;
            break;
   }
}
    if (s) {
        printf("It is not a palindrome",str);
    }
    else {
        printf("It is a palindrome",str);
    }

    return 0;
    }

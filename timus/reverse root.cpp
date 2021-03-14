#include<stdio.h>
#include<math.h>

int main ()

{
    int a = 0;
    unsigned long long b;
    float root[128 * 1024];

    while (scanf("%llu",&b) != NULL)
    {
        root[a++] = (float) sqrt (b*1.0);
    }
    for (; a>=0; --a)
    {
        printf("%.4f\n",root[a]);
    }

    return 0;
}

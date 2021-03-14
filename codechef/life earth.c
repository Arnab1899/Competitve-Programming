#include<stdio.h>
int main()
{
    int limit;
	scanf("%d",&limit);

    if(limit != 42)
    {
		printf("%d\n",limit);

		return main ();

	}
    return 0;
}

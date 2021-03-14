#include<iostream>
using namespace std;

int main ()
{
    int number,factorial;

    cin >> number;

    factorial = number;

    for(int i = number - 1; i>0; i--)
    {
        factorial = factorial*i;
    }

    cout << factorial << endl;

    return 0;
}

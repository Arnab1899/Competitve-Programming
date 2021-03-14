#include<iostream>
using namespace std;

int main ()
{
    int arry[2];

    cin >> arry[0] >> arry[1];

    cout << (((arry[0]) %2 == 0) || ((arry[1]) %2 != 0) ? "yes" : "no");

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int men,pen,notebook;

    cin >> men >> pen >> notebook;

    if ((pen-men) >=0 && (notebook-men) >=0)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;

}

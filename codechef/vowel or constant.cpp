#include<bits/stdc++.h>
using namespace std;

int main ()
{
    char check;

    cin >> check ;

    if (check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U')
    {
        cout << "Vowel" <<endl;
    }
    else{
        cout << "Consonant" << endl;
    }

    return 0;
}

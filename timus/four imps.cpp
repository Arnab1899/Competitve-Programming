#include<iostream>
using namespace std;

int main ()
{
    int world;

    cin >> world ;

    if(((world*(world+1))/2)%2 == 0)
    {
        cout << "black" <<endl;
    }
    else
        {
            cout << "grimy" << endl;
        }

        return 0;
}

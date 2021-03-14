#include <iostream>
using namespace std;

int main()
{
     unsigned long long a;
    cin>>a;

    if(a>=1 && a<=4)
        cout<<"few"<<endl;
    if(a>=5 && a<=9)
        cout<<"several"<<endl;
    if(a>=10 && a<=19)
        cout<<"pack"<<endl;
    if(a>=20 && a<=49)
        cout<<"lots"<<endl;
    if(a>=50 && a<=99)
        cout<<"horde"<<endl;
    if(a>=100 && a<=249)
        cout<<"throng"<<endl;
    if(a>=250 && a<=499)
        cout<<"swarm"<<endl;
    if(a>=500 && a<=999)
        cout<<"zounds"<<endl;
    if(a>=1000)
       cout<<"legion"<<endl;

    return 0;
}

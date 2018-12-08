#include<iostream>
#include<stdlib.h>

using namespace std;

int main()

{
    system("color a");

    int a,b,c;

    cout<<"--------------------------------------------"<<endl;
    cout<<"=========MENENTUKAN NILAI TERBESAR=========="<<endl;
    cout<<"--------------------------------------------"<<endl;

    cout<<"\tMasukan nilai A : "<<endl;
    cin>>a;
    cout<<"\tMasukan nilai B : "<<endl;
    cin>>b;
    cout<<"\tMasukan nilai C : "<<endl;
    cin>>c;

        if (a>b&&a>c)
        {
            cout<<a<<"\tAdalah nilai terbesar"<<endl;
        }
        else if (b>a&&b>c)
        {
            cout<<b<<"\tAdalah nilai terbesar"<<endl;
        }
        else if (c>a&&c>b)
        {
            cout<<c<<"\tAdalah nilai terbesar"<<endl;
        }
        else
        {
            cout<<"EROORRR!!";
        }

}

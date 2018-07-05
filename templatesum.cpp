#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
t sum(t x, t y)
{
    t z;
    z=(x+y);
    return z;
}

main()
{
    int a=6,b=8,c;
    float p=8.7,q=8.7,r;
    c=sum(a,b);
    cout<<"\nsum = "<<c;
    r=sum(p,q);
    cout<<"\nsum = "<<r;
}

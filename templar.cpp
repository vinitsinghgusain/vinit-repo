#include<iostream>
using namespace std;
template<class t>
t lar(t x, t y)
{
    if(x>y)
        return x;
    else
        return y;
}
main()
{
    int b=46,a=7;
    cout<<"\nlargest no. is : "<<lar(a,b)<<"\n";

}

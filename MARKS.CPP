#include <iostream>
using namespace std;
class sample
{
protected:
 int a,b;
public:
sample(int x,int y)
{a=x;
b=y;
}
void add()
{ int p=a+b;
cout<<"add" <<p;
}
};
class sub:public sample
{ int c;
public:
sub(int x,int y,int z):sample(x,y)
{
c=z;
}
void sum()
{
int m=a+b+c;
cout<<"sum" <<m;
}
};
int main()
{
sub s(2,4,5);
s.add();
cout<<endl;
s.sum();
return 0;
}

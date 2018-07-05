#include<iostream.h>
#include<conio.h>
class shape
{
protected :
 int s1,s2;
public:
virtual void area()
{ cout<<"will compute area through virtual functions";
}
};
class rect:public shape
{

 int arr;
 public:
    void getdata1()
 {
 cout<<"enter parameters of rect";
 cin>>s1>>s2;
 }
  void area()
 { arr=s1*s2;
 cout<<"\narea of rectangle is:\t"<<arr; }
 };
 class triangle:public shape
 {
 int ar;
 public:
 void getdata()
 {
 cout<<"\nenter parameters of triangle";
 cin>>s1>>s2;
 }
  void area()
 { ar=0.5*s1*s2;
 cout<<"\n area of triangle is\t"<<ar; }
 };
void main()
{ clrscr();
shape *sptr;
shape S;
rect R;
triangle T;

sptr=&S;
sptr->area();
R.getdata1();
sptr=&R;
sptr->area();
T.getdata();
sptr=&T;
sptr->area();
getch();
}
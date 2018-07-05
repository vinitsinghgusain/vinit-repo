#include<iostream>
using namespace std;
class  employ
{protected:
int empno;
char ename[20];
char des[20];
public:
void get()
{ cout<<"enter the ename "<<endl;
cin>>ename;
cout<<"enter the empno"<<endl;
cin>>empno;
cout<<"enter the designation"<<endl;
cin>>des;
}
};
class salary: public employ
{int hours;
 int hourrate;
 int sal;
public:
  void compute()
  {
    cout<<"enter hours of work"<<endl;
    cin>>hourrate;
    cout<<"enter hourrate of work"<<endl;
    cin>>hours;
    sal=hours*hourrate;
  }
  void display()
  {
    cout<<" ename is "<<ename<<endl;
   cout<<" empno is "<<empno<<endl;
   cout<<" designation is "<<des<<endl;
   cout << "salary is" <<sal<<endl;
  }
};

int main()
{ salary e;
  e.get();
  e.compute();
 e.display();
return 0;
}

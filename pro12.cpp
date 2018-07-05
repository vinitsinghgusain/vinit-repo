#include<iostream>
using namespace std;
class  student
{protected:
int m3;
int m2;
int m1;
int rollno;
public:
void get()
{ cout<<"enter the rollno "<<endl;
cin>>rollno;
cout<<"enter the m1"<<endl;
cin>>m1;
cout<<"enter the m2"<<endl;
cin>>m2;
cout<<"enter the m3"<<endl;
cin>>m3;

}
};
class sports: public student
{
  protected:
    int sportweight;
public:
   void get2()
  {
    cout<<"enter sportweight"<<endl;
    cin>>sportweight;

  }

};
class result:public sports
{int total;
public:
  void display()
  {total=0;
    total=m1+m2+m3+sportweight;
    cout<<"the rollno "<<rollno<<endl;
    cout<<"total marks "<<total<<endl;

  }
};

int main()
{ result e;
  e.get();
  e.get2();
 e.display();
return 0;
}

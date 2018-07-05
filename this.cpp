#include<iostream>
using namespace std;
class person
{public:
  int age;
  char address[20];
  char name[20];

  void input ()
  {
    cout<<"enter the age "<<endl;
    cin>>age;
    cout<<"enter the name"<<endl;
    cin>> name;
    cout<<"enter the address"<<endl;
    cin>>address;
  }
  void show()
  {
    cout<<"\n elder person age is"<<age<<endl;
    cout<<"address "<<address<<endl;
    cout<<"name "<<name<<endl;

  }
  person compute(person p)
  {
    if(p.age>age)
    {
      return p;
    }
    else
    {
      return *this;
    }
  }
};
int main()
{
  person n1,n2,n;
  n1.input();
  cout<<"now enter for 2nd person"<<endl;
  n2.input();
  n=n1.compute(n2);
  n.show();
  return 0;
}

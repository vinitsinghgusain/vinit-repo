#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  float m;char nm[20];
  ofstream fin("student");
  for (int i=0 ;i<3;i++)
  {
    cout<<"enter name and marks"<<endl;
    cin>>nm>>m;
    fin<<nm<<" "<<m<<endl;
  }
  fin.close();
    return 0;
  }

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  float m;char nm[20];
  ifstream fin("student");
  for (int i=0 ;i<3;i++)
  {
    fin>>nm>>m;
    cout<<nm<<" "<<m<<endl;

  }
  fin.close();
    return 0;
  }

#include <iostream>
#include <cstring>
#include <string>
#include<fstream>
using namespace std;

int main()
  {char ch[20];int count;
    ofstream fin("charecter");
    cout<<"enter charecter"<<endl;
    cin>>ch;
    fin<<ch;
    fin.close();
    char c[20];
    ifstream file("charecter");
    file>>c;
    cout << "you enter \n" <<c;
    file.close();
    return 0;
  }

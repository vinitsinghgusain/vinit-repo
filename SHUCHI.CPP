  #include<iostream>
using namespace std;
class  Compute_amount
{  int code;
  char name[20];
  int unitprice;
  int quantity;
  public:
  Compute_amount ()
  { cout<<"enter the name of product"<<endl;
  cin>>name;
  cout<<"enter the code of product"<<endl;
  cin>>code;
  cout<<"enter the unitprice of product"<<endl;
  cin>>unitprice;
  cout<<"enter the quantity of product"<<endl;
  cin>>quantity;
  }
  void display()
  {
    cout<<" name of product "<<name<<endl;
   cout<<" code of product "<<code<<endl;
   cout<<" unitprice of product "<<unitprice<<endl;
   cout<<" quantity of product "<<quantity<<endl;
  }
  };

 int main()
 { Compute_amount m;
   m.display();
 return 0;
 }

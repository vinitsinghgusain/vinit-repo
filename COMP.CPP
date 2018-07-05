#include<iostream>
using namespace std;
class complex
{
	int real,img;
public:
	void getdata()
	{
	cout<<"enter real part"<<endl;
	 cin>>real;
	 cout<< "enter imaginary part:"<<endl;
	 cin>>img;
	}

	void print()
	{
		cout<<"\n the sum of complex number "<<real<<"+"<<img<<"j";
	}
	 complex operator +(complex o2)
	{
	 complex o3;
	o3.real= real+o2.real;
	o3.img= img+o2.img;
	return o3;

	}

	 };


int main()
{
	  complex o1,o2;
	  o1.getdata();
	  o2.getdata();

	complex o3 = o1 + o2;
	 o3.print();
	 return 0;
	}

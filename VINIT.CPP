#include<iostream>
#include<conio.h>
class student
{ public:
	int rollno;
	char name[20];
};
class marks:public virtual student
{public:
	int m1,m2;
};
class sports:public virtual student
{public:
	int sport;
};
class drived:public marks,public sports
{public:
	  int tot;
	void total()
	{
	       tot=m1+m2+sport;
	}
	void get()
	{       cout<<"name = ";
		cin<<name;
		cout<<"rollno = ";
		cin<<rollno;
		cout<<"enter marks m1,m2,m3,sports in squence "<<endl;
		cin<<m1;
		cin<<m2;
		cin<<sports;

	}
	void display()
	{       cout<<"name = "<<name<<endl;
		cout<<"rollno = "<<rollno<<endl;
		cout<<"total marksb = " <<tot<<endl;

	}
};
int main()
{   drived d1;
	d1.get();
	d1.total();
	d1.display();
	getch();
	return 0;
}

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class voter
{
	int vid;
	char vname[20];
	long mi,ai;
 public:
	voter(int vid1,char* vn,long mi1)
	{
	  vid = vid1;
	  strcpy(vname,vn);
	  mi=mi1;
	}
	void compute()
	{
		ai=mi*12;
	}
	void putdata()
	{
	  cout<<"voterid"<<vid<<endl;
	  cout<<"name"<<vname<<endl;
	  cout<<"mouthly income"<<mi<<endl;
	  cout<<"anul income"<<ai<<endl;
	}

};

int main()
{
int vi;
char vn[20];
long mi2;

	  cout<<"voterid"<<endl; cin>>vi;
	  cout<<"name"<<endl; cin>>vn;
	  cout<<"mouthly income"<<endl; cin>>mi2;
     voter v(vi,vn,mi2);
     v.compute();
     v.putdata();


 return 0;


}

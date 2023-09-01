
#include<iostream>
   using namespace std;
 class Batsman
 {   
    int bcode;
	char bname[20];
	int innings,notout,runs;
	int batavg;
	void calcavg()
	{
		batavg=runs/(innings-notout);
	}

public :


void takedata()
{
	cout<<"Enter batsman code ";
	cin >> bcode;
	cout<<"Enter batsman name ";
	cin>>bname;
	cout<<"enter innings";
    cin>>innings;
    cout<<"enter notout";
    cin>>notout;
    cout<<"enter runs";
	cin>>runs;
	calcavg();
}
void showdata()
{
	cout<<"Batsman code "<<bcode;
    cout<<"\nBatsman name "<<bname;
    cout<<"\nInnings "<<innings;
    cout<<"\nNot out "<<notout;
    cout<<"\nRuns "<<runs;
    cout<<"\nBatting Average "<<batavg;
}
};
int main()
{
	Batsman bat;
    bat.takedata();
	
	
}
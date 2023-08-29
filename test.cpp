#include<iostream>
    using namespace std;
class TEST
{
  private:
	int TestCode;
	char Description[30];
	int NoCandidate;
	int CenterReqd;
	int CALCNTR()
	{
		return NoCandidate/100+1;
	}
  public:

void takedata()
{
	cout<<"Enter Test code ";
	cin>> TestCode;
	cout<<"Enter description ";
	cin>>Description;
	cout<< "Enter no of candidates ";
	cin>>NoCandidate;
	CenterReqd=CALCNTR();
}

void showdata()
{
	cout<<"Test code "<<TestCode;
    cout<<"\nDescripton "<<Description;
    cout<<"\nNo of candidate "<<NoCandidate;
    cout<<"\nCenter required "<<CenterReqd;
}
};
int main ()
{
	TEST obj;
	obj.takedata();
	obj.showdata();

	return 0;
}
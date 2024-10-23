#include <iostream>
   using namespace std;

class flight
{
 
   int  number;
   char destination[30];
   float distance,fuel,clfuel;

void calfuel()
{
    if(distance<=1000)
    {
        fuel=500;
    }
    else
    if((1000<=distance) && (distance<=3000))
    {
        fuel=2200;
    }       
}

   

public:

void FEEDINFO()
{
        cout<<"Enter flight Number \n";
		cin >>number;
		cout<<"Enter flight destination\n";
		cin >> destination;
		cout<<"Enter distance\n";
		cin >> distance;
        calfuel();

}
void SHOWINFO()
{ 
        cout<<"\nflight number is: "<< number;
        cout<<"\nflight destination : "<< destination;
        cout<<"\ndistance :"<< distance;
        cout<<"\ntotal fuel is"<<fuel<<endl;
        
        

        
}

};   

int main ()
{

  flight obj;
   
obj.FEEDINFO();
obj.SHOWINFO();


return 0;
}
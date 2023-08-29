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
    if((1000<=distance) && (distance<=2000))
    {
        fuel=2200;
    }
}

public:

void FEEDINFO()
{
        cout<<"Enter flight Number ";
		cin >>number;
		cout<<"Enter flight destination";
		cin >> destination;
		cout<<"Enter distance";
		cin >> distance;

        clfuel=calfuel();
}
void SHOWINFO()
{ 
        cout<<"flight number is : "<< number;
        cout<<"flight destination : "<< destination;
        cout<<"distance :"<< distance;
        cout<<"total fuel is"<< clfuel;
        

        
}

};   

int main ()
{

  flight obj;
   
obj.FEEDINFO();
obj.SHOWINFO();


return 0;
}
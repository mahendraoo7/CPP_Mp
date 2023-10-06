#include <iostream>
using namespace std;

class restorent
{
    string name;
    int number,qty,price ,netbill,tamt;
    double gst=0.005;
    int menu;


public:
void READINFO()
{
    cout << "Enter your name :"<<endl;
    cin >> name;

    cout << "Enter your number :"<<endl;
    cin >>number;

    cout <<"select your choice frome menu  :"<<endl;
    cout <<"enter number to select\n 1-pizza \n 2-burgar \n 3-frecky \n 4-tea \n 5-coffee\n 6-edalidhosa   : "<<endl;
    cin >>menu;
    cout <<"enter quentity"<<endl;
    cin >> qty;

if(menu==1)
{
   if(qty==1)
   {
     cout << "----->your order = pizaa \n qty= 1 \n price = 450 " <<endl;
   }
   else
   if(qty==2)
   {
      cout << "----->your order = pizaa \n qty= 2 \n price = 900 " <<endl;
   }     
}
else
if(menu==2)
{
   if(qty==1)
   {
    cout << " -----> your order = burger \n qty = 1 \n price = 150 "<<endl;
   }else
   if(qty==2)
   {
      cout << " -----> your order = burger \n qty= 2 \n price = 300" <<endl;
   }
 }

}
};

int main ()
{
restorent res;
res.READINFO();
}
#include <iostream>
   using namespace std;

class supraa
{
    
     int a,b;
    

public:

    void  SetData()
    {
      cout<<"enter value"<<endl;
      cin>>a;
    }   
  
    void SetData(int a)
    {
     b=a;
     cout<<"b value is"<<b<<endl;
    }
};   

 int main ()
 {
    supraa set;

    set.SetData();
    set.SetData(5);



 }
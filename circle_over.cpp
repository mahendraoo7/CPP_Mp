#include <iostream>
using namespace std;

class circle
{
int a;


  public:
  void setdata(int c)
  {
     a=c;
    
  }
  circle operator+(circle &g)
  {
    circle cir;
    cir.a=a+g.a;

    return cir;
  }
  int getdata()
  {
    return 3.14*a*a;
  }
    

};

  int main ()
  {
    circle cir1,cir2,cir3;

    cir1.setdata(5);
    cout<<"cir1 ="<<cir1.getdata()<<endl;

    cir2.setdata(6);
    cout<<"cir2 ="<<cir2.getdata()<<endl;

    cir3 = cir1 + cir2;
    cout<<"cir3 ="<<cir3.getdata()<<endl;

  }
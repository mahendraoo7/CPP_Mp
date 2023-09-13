#include <iostream>
using namespace std;

class circle
{
int a,b;


  public:
  void setdata(int c,int d)
  {
     a=c;
     b=d;
  }
  circle operator+(circle &g)
  {
    circle cir;
    cir.a=a+g.a;
    cir.b=b+g.b;

    return cir;
  }
  int getdata()
  {
    return (a*b)/2;
  }
    

};

  int main ()
  {
    circle cir1,cir2,cir3;

    cir1.setdata(5,9);
    cout<<"cir1 ="<<cir1.getdata()<<endl;

    cir2.setdata(6,8);
    cout<<"cir2 ="<<cir2.getdata()<<endl;

    cir3 = cir1 + cir2;
    cir1.setdata(5,9);
    cout<<"cir3 ="<<cir3.getdata()<<endl;

  }
#include <iostream>
   using namespace std;
class square 
{
   int len;

   public:

   void setdata(int a)
   {
    len=a;
   }

   square operator+(square &s)
   {
     square sq;
     sq.len=len+s.len;
     return sq;
   }
   int getdata()
   {
    return len*len;
   }


};

  int main ()
  {
    square sq1,sq2,sq3;

    sq1.setdata(2);
    cout<<"square 1="<<sq1.getdata()<<endl;
    sq2.setdata(5);
    cout<<"square 2="<<sq2.getdata()<<endl;
    sq3 = sq1+sq2;
    cout<<"square 3="<<sq3.getdata()<<endl;
    
  }
  
  

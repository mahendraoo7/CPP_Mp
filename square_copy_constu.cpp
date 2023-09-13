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
    len*len;
   }


};

  int main ()
  {
    square sq1,sq2,sq3;

    sq1.setdata(2);
    cout<<
  }

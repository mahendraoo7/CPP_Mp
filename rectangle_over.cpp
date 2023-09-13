#include <iostream>
  using namespace std;
class rectangle
{ 
   int len,he;

   public:

   void setdata(int a,int b)
   {
       len = a;
       he = b;
   }
   rectangle operator+(rectangle &b)
   {
    rectangle rec;
    rec.len=len+b.len;
    rec.he=he+b.he;

     return rec;
   }
   int getdata()
   {
     return len*he;
   }
}; 

   int main ()
   {
     rectangle rec1,rec2,rec3;

     rec1.setdata(5,6);
     cout<<"rect 1 ="<<rec1.getdata()<<endl;

     rec2.setdata(2,6);
     cout<<"rect 2 ="<<rec2.getdata()<<endl;
     
     rec3 = rec1 + rec2;
     cout<<"rect 3 ="<<rec3.getdata()<<endl;


   }  

#include <iostream>
  using namespace  std;
class Box
{
   int length, height, breath;

   public:
     void setdata(int len,int he,int bre)
    {
        length = len;
        height = he;
        breath = bre;

    }
    int getdata()
    {
        return length*height*breath;
    }
      friend Box operator+(Box &a, Box &b);
   };
   Box operator+( Box &a ,Box &b)
   {
      Box box;

      box.length = a.length + b.length;
      box.height = a.height + b.height;
      box.breath = a.breath + b.breath;

      return box;
   }
    
   int main ()
   {
    Box box1,box2,box3;

    box1.setdata(2,2,2);
    cout<<"box1 is :"<<box1.getdata()<<endl;

    box2.setdata(3,3,3);
    cout<<"box2 is :"<<box2.getdata()<<endl;

    box3=box1+box2;
    cout<<"box3 is :"<<box3.getdata()<<endl;

}

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


   Box operator+( Box &b)
   {
      Box box;

      box.length = length + b.length;
      box.height = height + b.height;
      box.breath = breath + b.breath;

      return box;

    }
    int getdata()
    {
      return length * height * breath;
    }
};  

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

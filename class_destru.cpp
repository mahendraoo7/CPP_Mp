#include <iostream>
  using namespace std;
class square
{

   int a=5;

   public:

square()
{
    cout<<"square default contructor is call -->";
}

square(double redius)
{
    double area;
    
    area=3.14*redius*redius;
    cout<<"area of circle is = :"<<area;;

}
square(double b ,double h)
{
    float area;
    
    area = 0.5*b*h;
    cout<<"\nArea of triangle is = "<<area;
    cout<<endl;
}
square(int len,double bre)
{
  float area;
    
    area = len*bre;
    cout<<"Area of rectangle is = "<<area;
    cout<<endl;
}
square(int len)
{
  float area;
    area = len*len;
    cout<<"\nArea of square is= "<<area;
    cout<<endl;  

}
 ~square()
{
    cout<<"\ndestructor class is call......";
}    


};  

int main ()
{

  square sq(2.3,5.6),sq1(15.3),sq2(23),sq3(12,10.5);
    
}

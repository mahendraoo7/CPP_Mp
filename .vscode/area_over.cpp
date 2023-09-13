#include <iostream>
  using namespace std;
class supraa
{

   int a=5;

   public:

void square()
{
    cout<<"square default contructor is call -->"<<endl;
}

void square(double redius)
{
    double area;
    
    area=3.14*redius*redius;
    cout<<"area of circle is = :"<<area<<endl;

}
void square(double b ,double h)
{
    float area;
    
    area = 0.5*b*h;
    cout<<"Area of triangle is = "<<area<<endl;
    
}
void square(int len,double bre)
{
  float area;
    
    area = len*bre;
    cout<<"Area of rectangle is = "<<area<<endl;
    
}
void square(int len)
{
  float area;
    area = len*len;
    cout<<"Area of square is= "<<area<<endl;
      

}
};  

int main ()
{

  supraa sq;
  sq.square();
  sq.square(2,5.2);
  sq.square(6);
  sq.square(2.1,3.2);
  sq.square(5.8);


  
    
}

#include <iostream>
    using namespace std;
class prime
{
    public:
    int a,b,i;

 void READ()
{
     cout <<"enter number to you reach"<<endl;
     cin>>a;

for(i=1;i<=a;i++)  
{
   if(a/2!=0)
{
   cout<<"prime number is :";
   cout<<a;
}
}
}
};
int main ()
{
  prime p;
  p.READ();

}
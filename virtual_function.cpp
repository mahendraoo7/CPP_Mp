#include <iostream>
   using namespace std;

   class Base
   {
    public :

    virtual void showPrint()
    {
        cout <<"base class output --------->"<<endl;
    }
   };

   class Derived : public Base
   {
    public :

    void showPrint ()
    {
        cout <<"derived class output --------> "<<endl;
    }
   };

     int main ()
     {
        Base a, *b;
        Derived d;

        b = &a;
        b->showPrint();

        b=&d;
        b->showPrint();
     }

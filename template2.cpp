#include <iostream>
using namespace std;

template <class T>
void display(T t1)
{
    cout << "displaying template :"
         << t1 <<endl;

}

template <class x, class y>
void display(x a,y b)
{
    cout << "displaying templates :"
    << a << "\t"
    << b << endl;

}

 int main ()
 {
    display(200);
    display(12.56);
    display('D');

    display('H',1.24);
    display('M',78);
    display(20,5.56);



 }
#include <iostream>
  using namespace std;

class Test
{

    int a =10, b = 20;

   public:
   Test (int a)
    {
      cout<<"Test contructor is call -->" << a;
    } 

    void getdata()
    {
        cout<<"sum is :"<< a + b;
    }
};


int main ()
{
    Test test(10);


    return 0;
}


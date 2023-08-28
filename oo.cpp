#include <iostream>

using namespace std;

// define a class

class my_class

{

public:

    // inside class definition of the function 

    void sum(int num1, int num2)                // function header

    {   

        cout << "The multiplacation of the numbers is: ";  // function body

        cout << (num1 * num2) << "\n\n";   

    }

};

int main()

{

    // create an object of the class

    my_class obj;

    // call the member function

    obj.sum(5, 200);

    return 0;

}


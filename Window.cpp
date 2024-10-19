#include <windows.h>
#include <winable.h>
#include <iostream>
using namespace std;

  int main () {
     cout << "Block Input" << endl;
     BlockInput(true);
     Sleep(9000);

    //  For Unblock
     cout << "Unblock" << endl;
     BlockInput(false);
     
     Sleep(2000);
     return 0;
     
  }

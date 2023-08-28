#include <iostream>
  using namespace std;

  int main ()
  {
    int  i,j,rows=5;
    char ch='Z';
     i=1;
    do{
        j=5;
    do{
        cout<<ch--<<" ";
        j--;
    }while(j>=i);
        cout<<"\n";
        i++;
    }while(i<=rows);
}
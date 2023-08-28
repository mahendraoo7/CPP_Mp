#include <iostream>

  using namespace std;
int main ()
{
    int i=1,j,rows;
    char ch='A';
    cin>>rows;
    i=1;

    do{
        j=1;
    do{
        cout<<ch++<<" ";
        j++;        
     }while(j<=i);
        cout<<"\n";
        i++;    
    }while(i<=rows);
}


 

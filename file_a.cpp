#include <iostream>
#include <fstream>
using namespace std;

int main ()
{

   char input[50];

   ofstream os;
   os.open("file3.txt");

   cout << "please Enter your name :"<<endl;
   cin.getline(input,100);
   os << input << endl;

   cout << "Please Enter contect number :" <<endl;
   cin >> input ;
   cin.ignore();
   os << input <<endl;

   os.close();

   //Read File Data 
   ifstream is;
   string line ;
   is.open("file3.txt");

   cout << endl << "Reading frome a text file :"<<endl;
   while(getline(is ,line ))
   {
    cout << line << endl;
   }

   is.close();
   return 0;

}   

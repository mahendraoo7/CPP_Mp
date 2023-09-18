#include <iostream>
   using namespace std;
class program
{
    int rate,dis,qty,amt,gst,billamt;
    double netbill;
    string name;


    public :

    program()
    {
       cout<<"Enter product name :";
       cin >> name;
       cout<<"Enter rate :";
       cin>>rate;
       cout<<"Enter qty :";
       cin>>qty;

       amt=rate*qty;
       dis=(amt*5/100);
       billamt=amt-dis;
       gst=billamt*18/100;
       netbill=billamt+gst;
    }

    void getdata()
    {
        cout<<name<<"\t"<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<
        "\t"<<billamt<<"\t"<<gst<<"\t"<<netbill<<"\t"<<endl;
    } 
};   
    int main ()
    {
        program Program[2];
        {
            cout<<"name\t"<<"rate\t"<<"qty\t"<<"amt\t"<<"dis\t"<<
            "billamt\t"<<"gst\t"<<"netbill\t"<<endl;

            for(int i=0;i<2;i++)


            Program[i].getdata();
        }
    }

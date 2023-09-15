  #include <iostream>
    using namespace std;

  class MarkSheet
  {
    int sci,math,guj,eng,total;
    double per;
    string name;

        public:
    
        MarkSheet()
        {
            cout <<endl
                 << " Enter student marks -----> :"<<endl;
            cout<<"Enter student name:";
            cin >>name;
            cout<<"Enter sci marks :" ;
            cin >>sci;    
            cout<<"Enter math marks:" ;
            cin >> math;    
            cout<<"Enter guj marks :" ;
            cin >> guj;  
            cout<<"Enter Eng marks :" ;
            cin >>eng;    
  
            total = sci + math + guj + eng ;
            per= total/4;
        }

        void getresult()
        {
            cout <<name<<"\t"<<sci<<"\t"<<math<<"\t"<<guj<<"\t"<<eng<<"\t"<<total<<"\t"<<
            per<<endl;
        }
    

  };
    int main ()
    {
        MarkSheet markSheet[4];

        cout<<endl << "name\t"<<"sci\t"<<"math\t"<<"guj\t"<<"eng\t"<<"total\t"<<
        "per\t"<<endl;

        for(int i=0;i<4;i++)
        {
            markSheet[i].getresult();
        }
    }
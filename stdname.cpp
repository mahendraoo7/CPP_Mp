#include <iostream>
    using namespace std;
class  student {
    int admno;
    char sname[20];
    float eng,math,sci,total;

    float ctotal()
    {
        return eng + math + sci;
    }

    public:
    void  takedata(){
          cout<< "enter student no. :";
          cin >> admno;
          cout<< "enter student name. :";
          cin >> sname;
          cout<< "enter student eng mark :";
          cin >> eng;
          cout<< "enter student math mark :";
          cin >> math;
          cout<< "enter student sci mark:";
          cin >> sci;

          total=ctotal();
    }
    
    void showdata(){
          cout<<"\nstudent no. is"<< admno;
          cout<<"\nstudent name is"<<sname;
          cout<<"\neng\tmath\tsci\ttotal";
          cout<<"\n" <<  eng <<"\t"<< math << "\t"<< sci <<"\t"  << total;

    }

};




int  main()
{
    student stu;

    stu.takedata();
    stu.showdata();

    return 0;


}
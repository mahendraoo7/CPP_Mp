#include<iostream>
using namespace std;

template <class T>
class map
{
    public :
    T*arr;
    int size;
        map(int m)
        {
            size = m;
            arr = new T[size];

        }
        T dproduct(map &v)
        {
            T d= 0;
            for(int i=0;i<size;i++)
            {
                d += this->arr[i]* v.arr[i];

            }

            return d;
        }
};

 int main ()
 {
    map <float>v1(3);
    v1.arr[0] = 2.0;
    v1.arr[1] = 1.8;
    v1.arr[2] = 6.9;
    map <float>v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 4.2;
    v2.arr[2] = 5.3;
    float a = v1.dproduct(v2);
    cout<< a <<endl;
    return 0;

}
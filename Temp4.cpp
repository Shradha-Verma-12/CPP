#include <iostream>
using namespace std;

//FUNCTION TEMPLATES 
//MAKES EASIER TO RUN MULTIPLE FUNCTIONS WITH SINGLE CODE 


/*float funcAvg (int a, int b)
{
    float avg = (a+b)/2.0;
    return avg;
} */

template <class T>
void swwap (T &a, T &b )
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T1, class T2>
float funcAvg (T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    
    return avg;
}
int main()
{
    float a;
    a= funcAvg(5,6);
    cout<<"The average of these numbers is = "<<a<<endl;
    a= funcAvg(5,2.6);
    cout<<"The average of these numbers is = "<<a<<endl;
    a= funcAvg(2.1,1.1);
    cout<<"The average of these numbers is = "<<a<<endl;

    int x = 5, y =7;
    swwap(x,y);
    cout<<x<<" "<<y;
     return 0;
}
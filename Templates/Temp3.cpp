#include <iostream>
using namespace std;

//DEFAULT TEMPLATE EXAMPLE 

template<class T1= int, class T2= float, class T3= char>
class example{
public:
T1 a;
T2 b;
T3 c;

example(T1 x, T2 y, T3 z)
{
    a = x;
    b = y;
    c = z;
}
 void display()
 {
     cout<<"Value of a is "<<a<<endl;
     cout<<"Value of b is "<<b<<endl;
     cout<<"Value of c is "<<c<<endl;
 }
};

 int main()
{
    example<> e(4,2.3,'c'); //use of default template
    e.display();
    cout<<endl;
    example<char, char, int> f('d','c', 2); //passed parameters to the template
    f.display();
 return 0;
}
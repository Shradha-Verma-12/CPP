#include <iostream>
using namespace std;

//OVERLOADING TEMPLATE FUNCTIONS 

template <class T>
class sas
{
    public:
       T data;
       sas (T a)
       {
         data = a;
       }
       
       void display();
       
};

template <class T> // template <class variable>
void sas<T>::display() // functionReturnType className<variable> :: functionName()
       {
           cout<<data;
       }

void function(int a)
{
  cout<<"I am the first function() "<<a<<endl;
};


template <class T>
void function(T a)
{
  cout<<"I am the first templatised function() "<<a<<endl;
};

template <class T>
void function1(T a)
{
  cout<<"I am the first templatised function() "<<a<<endl;
};

int main()
{
    //sas <float> h(2.4);
    //sas <int> h(2);
    //sas <char> h('a');
    //cout<<h.data<<endl;
    //h.display();


    function(4); // EXACT MATCH TAKES THE HIGHEST PRIORITY //key point
    function1(5);
 return 0;
}
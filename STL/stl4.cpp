#include <iostream>
#include <list>
//LIST STL
using namespace std;
int main()
{
    list <int> l;
    list <int> n(l); //copies empty l into n
    list <int> kay(5,100); //initialises five elements of kay with 100
    
    for (int i : n)
    {
        cout<<i<<" "; //nil
    }
    cout<<endl;

    for (int i : kay)
    {
        cout<<i<<" "; //100 100 100 100 100
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout<<i<<" "; //2 1
    }
    cout<<endl;
    l.erase(l.begin()); //deletes 2
    cout<<"After erase: "<<endl;
    for (int i:l)
    {
        cout<<i<<" "; //1
            }

    cout<<"\nSize: "<<l.size()<<endl;
     return 0;
}
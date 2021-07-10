#include <iostream>
#include <set>
using namespace std;

//SET (DS) STL

int main()
{
    set <int> se;
    se.insert(5);
    se.insert(5); 
    se.insert(1);
    se.insert(1);
    se.insert(4);
    se.insert(4);
    se.insert(2);
    se.insert(2);
    se.insert(3);

    for( auto i: se)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    se.erase(se.begin()); //deletes 1
    for( auto i: se)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    set <int> ::iterator it = se.begin();
    it++;
    se.erase(it); 
    for( auto i: se)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"5 is present or not: "<<se.count(5)<<endl;
    cout<<"-5 is present or not: "<<se.count(-5)<<endl;
    
    set <int> :: iterator itr = se.find(4);
    /* cout<<"Value present at itr-> "<<*it<<endl; */

    for (auto it =itr; it!=se.end();it++)
    {
        cout<<*it<<" ";  //returns 4 5
    }

 return 0;
}
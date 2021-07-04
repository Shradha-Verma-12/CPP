#include <iostream>
#include <vector>
using namespace std;
//VECTOR

int main()
{
    vector<int> v;
    cout<<"Capacity-> "<< v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<< v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<< v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"Capacity-> "<< v.capacity()<<endl; //gives the amount of space assigned for the elements
    cout<<"Size-> "<<v.size()<<endl; //gives the number of elements in the vector
    
    cout<<"Element at 1st index "<< v.at(1)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<"Before popback"<<endl;
    for (int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();
    cout<<"After popback"<<endl;
    for(int i: v)
    {
         cout<<i<<" ";
    }

    cout<<"\nBefore clear: "<<v.size();
    v.clear();
    cout<<"\nAfter clear: "<<v.size();
    

   
   return 0;
}
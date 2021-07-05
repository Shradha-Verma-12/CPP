#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque <int> d;
    d.push_back(1); //inserts the element at the end
    d.push_front(2); //insert the element at the beginning 
    d.push_back(12); //inserts the element at the end after 1
    d.push_front(6); //inserts the element at fron before 2
    for (int i:d)
    {
        cout<<i<<" ";  //prints 6 2 1 12
    }
    
    d.pop_front(); //delets an element from the start
    cout<<endl;
    for (int i:d)
    {
        cout<<i<<" "; //prints 2 1 12
    }
    d.pop_back(); //deletes an element from the end
    cout<<endl;
    for(int i:d)
    {
        cout<<i<<" "; //prints 2 1
    }

    cout<<"Print the element at 0th index: "<<d.at(0)<<endl;
    cout<<"Print front element: "<<d.front()<<endl; //2
    cout<<"Print back element: "<<d.back()<<endl; //1
    cout<<"Empty or not: "<<d.empty()<<endl;
    
 return 0;
}
#include <iostream>
#include <queue>
using namespace std;


int main()
{ 

//max heap
 priority_queue<int> maxi;

 //min heap
 priority_queue <int, vector <int>, greater<int>> mini;

 maxi.push(1);
 maxi.push(3);
 maxi.push(2);
 maxi.push(6);
 cout<<"Size: "<<maxi.size()<<endl;
 int n = maxi.size();

 for(int i= 0; i<n;i++) //we can not write i<maxi.size() directly because it keeps on changing with every pop.

 {
     cout<<maxi.top()<<" ";
     maxi.pop();

 } cout<<endl;


 mini.push(1);
 mini.push(3);
 mini.push(2);
 mini.push(6);
 cout<<"Size: "<<mini.size()<<endl;
 int m = mini.size();

 for(int i= 0; i<n;i++) 
 {
     cout<<mini.top()<<" ";
     mini.pop();

 } cout<<endl;


 cout<<"Is maxi empty: "<<maxi.empty()<<endl; //returns 1
 cout<<"Is mini empty: "<<mini.empty()<<endl; //returns 1
 return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector <int> v;
  v.push_back(3); 
  v.push_back(1);
  v.push_back(2);
  v.push_back(5); 

  cout<<"Finding five using binary search: "<<binary_search(v.begin(),v.end(),6)<<endl; //gives 1 since 5 is present 
  cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl; //returns an iterator
  cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

  int a= 5, b=3;
  cout<<"Max: "<<max(a,b)<<endl;
  cout<<"Min: "<<min(a,b)<<endl;
  cout<<"A: "<<a<<" B: "<<b<<endl;
  swap(a,b);
  cout<<"A: "<<a<<" B: "<<b<<endl;

  string ab = "abcef";
  reverse(ab.begin(),ab.end());
  cout<<"String: "<<ab<<endl;

  rotate(v.begin(),v.begin()+1, v.end());
  cout<<"After rotate(): "<<endl;
  for (int i:v)
  {
    cout<<i<<" ";
  }
  cout<<endl;
  sort(v.begin(), v.end());
   for (int i:v)
  {
    cout<<i<<" ";
  }
  return 0;
}
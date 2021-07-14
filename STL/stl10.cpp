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

  
  return 0;
}
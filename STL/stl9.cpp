#include <iostream>
#include <map>
using namespace std;

//MAP STL (DS)

int main()
{  map <int, string> ma;
  ma[1]= "Alina";
  ma[2]= "Kesha";
  ma[4]= "Zeke";
  ma.insert({5,"Rosy"});
  
  cout<<"Before erase "<<endl;
  for (auto i: ma)
  {
      cout<<i.first<<endl;
  }
  
  cout<<"Finding 4 -> "<<ma.count(4)<<endl;
  cout<<"Finding -4 -> "<<ma.count(-4)<<endl;
  
  ma.erase(4);
  cout<<"After erase "<<endl;
  for (auto i: ma)
  {
      cout<<i.first<<" "<<i.second<<endl;
  }

  auto it = ma.find(5);
  for (auto i= it; i!=ma.end();i++)
  {
      cout<< (*i).first<<" "<<(*i).second<<endl;
  }

   return 0;
}
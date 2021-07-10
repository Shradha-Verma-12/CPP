#include <iostream>
#include <queue>
using namespace std;

//QUEUE (DS) STL
int main() 
{
  queue <string> sample;
  sample.push("Shradha");
  sample.push("Verma");
  sample.push("Bio");

  cout<<"First element: "<<sample.front()<<endl; //Shradha
  cout<<"Size of queue before pop(): "<<sample.size()<<endl;
  sample.pop();

  cout<<"First element: "<<sample.front()<<endl; //Verma
  cout<<"Size of stack after pop(): "<<sample.size()<<endl;
 return 0;
}

#include <iostream>
#include <stack>
using namespace std;
//STACK STL
int main()

{ stack <string> sample;
  sample.push("Shradha");
  sample.push("Verma");
  sample.push("Bio");
  
  cout<<"Top element: "<<sample.top()<<endl; //Bio
  cout<<"Size of stack before pop(): "<<sample.size()<<endl;

  sample.pop();

  cout<<"Top element: "<<sample.top()<<endl; //Verma
  cout<<"Size of stack after pop(): "<<sample.size()<<endl;

  cout<<"Stack is empty or not: "<<sample.empty()<<endl;



 return 0;
}
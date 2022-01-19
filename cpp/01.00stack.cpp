#include<iostream>
#include <vector>
using namespace std;
class stack{
    public:
  vector<int> v1;
  void push(int i){
      v1.push_back(i);
  }
  auto top(){
      cout<<"\n"<<v1[v1.size()-1]<<"\n";
      return(v1[v1.size()-1]);
  }
  int pop(){
      while(v1.size()!=0){
      int t =top();
      v1.pop_back();
      return(t);
      }
        }
  void dis(){
      for(auto i:v1)
      cout<<i;
  }
};
int main ()
{
 stack s;
 s.push(1);
 s.push(2);
 s.push(3);
 s.push(4);
 s.push(5);
 s.dis();
 s.top();
 s.pop();
 s.dis();
  return 0;
}

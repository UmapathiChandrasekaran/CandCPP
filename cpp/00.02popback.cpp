#include <vector>
using namespace std;
int main ()
{
 
  vector < int >v2 = { 1, 2, 3, 4, 5 };
  
  //printing vector
  // v2
for (auto i:v2)
    {
      cout << i << " ";
    }
    cout<<"\nafter deletion elements\n";
  v2.pop_back();
  for (auto i:v2)
    {
      cout << i << " ";
    }
    
    
  return 0;
}

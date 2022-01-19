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
    cout<<"\n adding elements\n";
  v2.push_back(6);
  for (auto i:v2)
    {
      cout << i << " ";
    }
    
    
  return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
int
main ()
{
  //intializing vector
  vector < int >v1;
  //defining vector
  vector < int >v2 = { 1, 2, 3, 4, 5 };
  vector < int >v3
  {
  1, 2, 3, 4};
  // copying vector
  vector < int >v4 = v2;
  vector < int >v5 (v2);
  //vector size
  vector < int >v6 (3);
  vector < int >v7 (5, 3);

  //printing vector
  // v2
for (auto i:v2)
    {
      cout << i << " ";
    }
  cout << "\n";
  //v3
for (auto i:v3)
    {
      cout << i << " ";
    }
  cout << "\n";
  //v4
for (auto i:v4)
    {
      cout << i << " ";
    }
  cout << "\n";
  //v5
for (auto i:v5)
    {
      cout << i << " ";
    }
  cout << "\n";
  //v6
for (auto i:v6)
    {
      cout << i << " ";
    }
cout<<"\n";
  // v7
for (auto i:v7)
    {
      cout << i << " ";
    }
  return 0;
}

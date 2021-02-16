#include <iostream>

using namespace std;

int main() {
  int  k, n;
  int total = 0;
  cin >> n >> k;
  
  for (int i=0; i<n; i++)
  {
    int x;
    cin >> x;
    if (x%k == 0)
    {total ++;}
  }
  cout << total;
  
  return 0;
}

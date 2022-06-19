#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int n, q;
   cin >> n >> q; // n represents n vector arrays and q represents queries

   vector<vector<int>> arr(n); // vector arr of n vector arrays

   for (int i = 0; i < n; i++)
   {
      int k, m; // taking size of vectors and inserting m items into x
      cin >> k;
      vector<int> x(k, 0);

      for (int i = 0; i < k; i++)
      {
         cin >> m;
         x[i] = m;
      }

      arr[i] = x; 
   }
   
   for (int i = 0; i < q; i++)
   {
      int a, b; // taking 2 queries for each vectors
      cin >> a >> b;

      cout << arr[a][b] << endl; // prints the element located at each vector index
   }
   

   return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int N, temp;
   cin >> N;
   
   int nums[N];
   for (int i = 0; i < N; i++)
   {
      cin >> nums[i];
   }

   for (int i = 0; i < N / 2; i++)
   {
      temp = nums[i];
      nums[i] = nums[N - i - 1];
      nums[N - i - 1] = temp;
   }

   for (int i = 0; i < N; i++)
   {
      cout << nums[i] << " ";
   }

   return 0;
}
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
   // Complete this function
   stringstream ss(str);
   char ch;
   vector<int> arr;

   int temp;
   while (ss >> temp)
   {
      ss >> ch;
      arr.push_back(temp);
   }

   return arr;
}

int main()
{
   string str;
   cin >> str;
   vector<int> integers = parseInts(str);
   for (int i = 0; i < integers.size(); i++)
   {
      cout << integers[i] << "\n";
   }

   return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Complete the program

   string a, b;
   cin >> a;
   cin >> b;

   int m = a.size(); // calculating size of string a
   int n = b.size(); // calculating size of string b

   cout << m << " " << n << endl; // printing the size of both strings

   string c = a + b;
   cout << c << endl; // printing the string after concatenating both a and b

   int temp = a[0];
   a[0] = b[0];
   b[0] = temp;

   cout << a << " " << b << endl; // printing the two strings after replacing 0 index value with each other

   return 0;
}
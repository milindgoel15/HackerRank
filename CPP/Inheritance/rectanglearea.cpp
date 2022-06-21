#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
protected:
   int height;
   int width;

public:
   void display()
   {
      cout << height << " " << width << "\n";
   }
};

class RectangleArea : public Rectangle
{
protected:
   int area = 0;

public:
   void read_input()
   {
      cin >> height >> width;
   }

   void display()
   {
      area = (height * width);
      cout << area;
   }
};

int main()
{
   /*
    * Declare a RectangleArea object
    */
   RectangleArea r_area;

   /*
    * Read the width and height
    */
   r_area.read_input();

   /*
    * Print the width and height
    */
   r_area.Rectangle::display();

   /*
    * Print the area
    */
   r_area.display();

   return 0;
}
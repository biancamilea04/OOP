#include <iostream>
#include "canvas.h"
using namespace std;

int main()
{
    Canvas canvas(40, 40);
    //canvas.DrawCircle(10, 5, 3, '*');
    //cout << endl;
    canvas.FillCircle(15, 5, 3, '*');
    //cout << endl;
    //canvas.DrawRect(5, 2, 15, 8, '#');
    //cout << endl;
    //canvas.FillRect(7, 3, 13, 7, '.');
   // cout << endl;
   // canvas.DrawLine(2, 2, 18, 8, '@');
  //  cout << endl;
    canvas.Print();
   // cout << endl;
    canvas.Clear();
   // cout << endl;
    return 0;
}
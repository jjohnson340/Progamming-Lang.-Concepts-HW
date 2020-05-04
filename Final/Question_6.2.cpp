#include <iostream>
#include <iomanip>
#include <fstream>
#include<string>
using namespace std;

int main() {
   int n1, n2, n3, min, mid, max;
   cout << "Enter three Digit\n";
   cin >> n1>>n2>> n3;
   if (n1>n2&&n1>n3)
   {
       max = n1;
       if (n2>n3)
       {
           mid = n2;
           min = n3;
       }
       else
       {
           mid = n3;
           min = n2;
       }
   }
   else if (n2 > n1&& n2 > n3)
   {
       max = n2;
       if (n1 > n3)
       {
           mid = n1;
           min = n3;
       }
       else
       {
           mid = n3;
           min = n1;
       }
   }
   else
   {
       max = n3;
       if (n1 > n2)
       {
           mid = n1;
           min = n2;
       }
       else
       {
           mid = n2;
           min = n1;
       }
   }
   cout<<"Max "<< max << "\nMid " << mid << "\nMin " << min << endl;
}
#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
   int n1, n2, n3, min, mid, max;
   cout << "Enter three Digit\n";
   cin >> n1 >> n2 >> n3;
   min = n1;
   (min > n2) && (min = n2);
   (min > n3) && (min = n3);

   max = n1;
   (max < n2) && (max = n2);
   (max < n3) && (max = n3);

   mid = n1;
   (min == mid) && (mid = n2);
   (max == mid) && (mid = n3);
   cout << "Max " << max << "\nMid " << mid << "\nMin " << min << endl;

   return(0);
}
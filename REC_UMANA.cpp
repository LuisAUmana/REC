/******************************************************************************
//Created by Luis Umana 801018765

*******************************************************************************/
#include <stdio.h>
#include<iostream>

using namespace std;

int
main ()
{

  int n;			// random integer
  int m;			//  random integer
  cout << "Please enter values of m and n: ";
  cin >> m;
  cin >> n;

  int r = (m * n * (n + 1) * (m + 1)) / 4;	// Equation used to find total # of distinct rectangles

  cout << "The grid of " << m << " X " << n << " has " << r <<
    " number of distinct rectangles " << endl;

  return 0;
}

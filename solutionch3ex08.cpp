/*
Write a program to test an integer value to determine if it is odd or
even. As always, make sure your output is clear and complete. In other
words, don’t just output yes or no. Your output should stand alone,
like The value 4 is 
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ihosvany Marquez
 */

bool checkOdd(int integer)
{
  if(integer % 2 == 0)
  {
    return false;
  }
  else
    return true;
}

int main(void)
{
    int integer;
    cout << "What integer would you like to determine if it is even or odd?\n";
    cin >> integer;
    if(checkOdd(integer))
    {
        cout << integer << " is an odd number.";
        return 0;
    }
    else
    {
        cout << integer << " is an even number.";
    }
}
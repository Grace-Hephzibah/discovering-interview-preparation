/*
Leap Year
Your task is to write a program to find whether the given year is Leap year or Not.

Sample Input 1:

2100

Sample Output 1:

NOT LEAP YEAR



Sample Input 2:

2000

Sample Output 1:

LEAP YEAR


*/

#include <iostream>
using namespace std;

int main() 
{
	int year; cin>>year;
  if (year%400 == 0 || (year%4==0 && year%100!=0))
	cout<<"LEAP YEAR";
  else 
    cout<<"NOT LEAP YEAR";
  return 0;
}

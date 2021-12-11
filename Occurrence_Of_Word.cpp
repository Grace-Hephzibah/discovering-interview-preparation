/*
Find the occurrence of a word
Write a program to find the occurrence of a word in a parent string.

Sample Input:

This is my country and I love my country

is

Sample output:

Occurences = 2

Sample Input 2:

This is my country and I love my country

our

Sample Output 2:

Occurrences = 0

*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char input[1000], occur[1000]; 
  fgets(input, 1000, stdin);
  fgets(occur, 1000, stdin);
  int li = strlen(input), io = 0, lo = strlen(occur), count=0;
  
  for (int i=0; i<li; i++)
  {
    if (input[i] == occur[io]) io++;
    else io=0;
    
    if (io == lo) { count++; io=0; }
  }
  cout<<"Occurrences = "<<count;
}

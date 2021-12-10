/*
Occurrence of character in string
Write a program to find the most occurring character in the string.



Sample Input:

Happy coding



Output:

p
*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char input[100]; fgets(input, 1000, stdin);
   int hash[1000] = {0}, l = strlen(input), max = 0, temp,character;
  
  for (int i=0; i<l; i++)
  {
    temp = input[i]; // considering the ascii value 
    hash[temp]++; // increasing the corres. hash
    if (hash[temp] > max) 
    	{max = hash[temp]; character = temp; }
  }
  cout<<char(character);  
}

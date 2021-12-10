/*
Frequency Count
Problem Description:

Given a string, find the frequencies of each of the characters in it.

The input string contains only lowercase letters. The output string should contain a letter followed by its frequency, in the alphabetical order (from a to z).

Input Specification:

input1: the input string

Output Specification:

 Return a string representing the frequency counts of characters in the input string.

Example 1:

input1: babdc

Output: a1b2c1d1

Explanation: In the input string 'a' appears once, 'b' appears twice, 'c' and 'd' appear once. Therefore, in alphabetical order the output should be: a1b2c1d1

*/

#include <iostream>
using namespace std;

int main() 
{
   char input[100];
  cin>>input;
  int hash[26] = {0};
  for(int i=0; input[i] != '\0'; i++)
    hash[input[i] - 'a']++;
  
  for(int i=0; i<26; i++)
    if (hash[i] !=0)   cout<<char(i+'a')<<hash[i];
  
}

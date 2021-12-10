/*
Eliminate vowels
Write a program to eliminate vowels in the given string.

Input Format:

Input consists of String

Output Format:

Eliminate all vowels and print the string

Sample Input:

Education

Sample Output:

dctn
*/

#include <iostream>
using namespace std;

bool isvowel(char a)
{
  return  (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
           a=='A' || a=='E' || a=='I' || a=='O' || a=='U' );
}

int main() 
{
   char input[100]; cin>>input;
  for(int i=0; input[i]!='\0'; i++)
    if ( !isvowel(input[i])) cout<<input[i];
  
    return 0;
}

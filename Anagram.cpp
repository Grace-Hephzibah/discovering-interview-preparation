/*
Anagram
Write a program to find whether the given string is the anagram of the first string.



Sample Input 1:

eat

ate



Sample Output 1:

Anagram



Sample Input 2:

eat

abc



Sample Output 2:

Not Anagram


*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char str1[100], str2[100];
  cin>>str1>>str2;
  int l1 = strlen(str1), l2 = strlen(str2), c = 1,
  hash1[26] = {0}, hash2[26] = {0};
  
  if (l1 != l2) cout<<"Not Anagram";
  else 
  {
    for(int i=0; i<l1; i++)
    {
      hash1[str1[i] - 'a']++;
      hash2[str2[i] - 'a']++;
    }

    for(int i=0; i<26; i++)
    {
      if (hash1[i] != hash2[i])
      { cout<<"Not Anagram"; c = 0; break;} 
    }
    if (c) cout<<"Anagram";
  }
  return 0;  
}

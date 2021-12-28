/*
Highest frequency Character
Write a program to find the highest frequency character in a string.

Sample Input:

me and my friends love programming

Sample Output:

Maximum occurring character is ‘M' = 4 times.
*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char str[1000];
  fgets(str, 1000, stdin);
  int l = strlen(str), hash[26] = {0}, max = 0, j, max_c;
  
  for(int i=0; i<=l; i++)
  {
    j = str[i];
    if (j-'a'<26 && j-'a'>=0) j = j-'a';
    else if (j-'A'<26 && j-'A'>=0) j = j-'A';
    else continue;
    
    if (j>=0 && j<26) hash[j]++;
    
    if (hash[j] > max) { max = hash[j]; max_c = j;}
  }
  cout<<"Maximum occurring character is \'";
  cout<<char (max_c+'A')<<"\' = "<<max<<" times.";
    
    return 0;
}

/*
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	char str[100];
  	int ascii[26]={},i,max=0,max_char;
  	scanf("%[^\n]s",str);
  	for(i=0;str[i]!='\0';i++)
    {
      	if(str[i]>=97 && str[i]<=122)
          str[i]=str[i]-32;
      	if(str[i]!=' ')
        {
          	ascii[str[i]-65]++;
        }
    }
  	for(i=0;i<26;i++)
    {
      	if(ascii[i]>max)
        {
          max=ascii[i];
          max_char=i+65;
        }
    }
  char c=(char)max_char;
	cout<<"Maximum occurring character is '"<<c<<"' = "<<max<<" "<<"times.";
}
*/

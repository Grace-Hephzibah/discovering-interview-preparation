/*
Different letters in the string
Write a program to find the common letters present in the two strings and print the different letters in the string.

Input Format:

The input consists of two space-separated strings – stringSent and stringRec, representing the string that was sent through the network, and the string that was received at the receiving end of the network, respectively.

Output Format:

Print a character representing the character that was lost in the network during transmission and if there is no data loss transmission then print ”NA”

Sample Input:

abcdfjgerj abcdfjger

Sample Output:

 j


*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
  	int i,j;
    for(i=0, j=0;i<str1.length();i++)
    {
            if(str1[i]==str2[j])
                j++;
            else
                cout<<str1[i];  
    }
  	if(j==str1.length())
      	cout<<"NA";
    return 0;
}

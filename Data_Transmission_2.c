/*
Data Transmission - II
A company is transmitting its data to another server. To secure the data against malicious activity, they plan to reverse the data before transmitting. They want to know the number of data characters that do not change position even after the data stream is reversed. The network administrator has been tasked with ensuring the smooth transmission of the data.Write an algorithm for the network administrator to help him find the number of data characters that do not change position even after the data stream is reversed.

Input

The input consists of a string dataStream, representing the data to be transmitted through the network (N).

Output

Print an integer representing the number of data characters that do not change position even after the data stream is reversed. If no such character is found or the input string is empty then print 0.

Constraints

O < length of dataStream

Note

The input string dataStream is case sensitive and made up of English letters only. Uppercase characters and lowercase characters are counted as different.

Example

Input:

alphxxdida

Output: 4

Explanation:

The reversed datastream is "adidxxhpla".

The characters that do not change position after the data stream is reversed are the characters 'a' at the start and end position and the characters 'x' in the middle positions
*/

#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
   char data[100];  cin>>data;
	int l=strlen(data), count=0, i=0;
  
  for(i=0; i<l; i++)
    if (data[i] == data[l-i-1]) count++;
  cout<<count;
    return 0;
}

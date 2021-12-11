
/*
Digital machine
Problem:

  A digital machine generates binary data which consists of a string of 0s and 1s. A maximum signal M, in the data consists of the maximum number of either 1s or 0s appearing consecutively in the data but M can’t be at the beginning or end of the string. Design a way to find the length of the maximum signal.

Input

 The first line of the input consists of an integer N, representing the length of the binary string. The second line consist of a string of length N consisting of 0s and 1s only.

Output

 Print an integer representing the length of the maximum signal.



Example

Example 1:

Input

 6

 101000

Output

 1

Explanation

 For 101000, M can be 0 at second index or at third index so in both the cases max length = 1.  



Example2:

Input

 9

 101111110

Output

 6

Explanation

 For 101111110, M = 111111 so maxlength = 6.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin>>size;
	char arr[size+1];
	int max=0,count=0;
	int flag=0;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]=='1')
		{
			count++;
			flag=1;
		}

		else if(arr[i]=='0' && flag==1)
		{
			count=0;
			flag=0;
		}
		if(count>max)
		{
			max=count;
		}
	}
	cout<<max;
	return 0;
}

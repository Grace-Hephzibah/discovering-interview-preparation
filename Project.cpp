/*
Project
An employee in an organization has started working on N projects (numbered 1 to N). Every week he/she can work on a module of one of the projects. The modules that are chosen on any two successive weeks should be of a different project and a project I can have at most Ci modules. The modules of the projects are such that a module is completed in a week. Write an algorithm to determine the number of weeks for which he/she can work on projects following the above-mentioned rules.

Input Format:

The first line of the input consists of an integer N, representing the number of projects. The next line consists of N space-separated integers – C1, C2. CN representing the number of modules of the projects.

Output Format:

Print an integer representing the maximum number of weeks for which an employee can work on the projects.

Constraints:

1 < N < 5*104

1 < Ci < N

∑ Ci < 105

1 < i < N

Sample Input:

3

7 2 3

Sample Output:

11

Explanation:

The first, second and third project have 7, 2 and 3 modules respectively. The modules of different projects are selected on successive days in a sequence first, second, first, third, first, second, first, third, first, third, first. So, the maximum number of weeks an employee can work on these projects is 11.
*/

#include <iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
cin>>n;
	int c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
		if (i!=0) sum += c[i];
    }
  	cout<<sum*2 +1;
	return 0;
}

/*
#include <iostream>
using namespace std;

int main()
{
	int n,i,count=0;
cin>>n;
	int c[n];
	for(i=0;i<n;i++)
	{
		cin>>c[i];
	}
	i=1;
	while(1)
	{
		if(i != n)
		{
			if(c[n-i]!=0)
			{
				count++;
				c[n-i]--;
				count++;
				c[0]--;
			}
			else
				i++;
		}
		else
			break;
	}
	cout<<count+1;
	return 0;
}
*/

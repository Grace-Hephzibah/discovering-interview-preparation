'''
Check if a given string is a substring of another.
Write a program to check if a given string is a substring of another.

Input Format:

The first input corresponds to the integer.

The remaining consist of string.

Output Format:

Check whether sub string is there or not. If it is print "Yes" or "No".

Sample Input:

2

Madam mad

Madam Mad

Sample Output:

No

Yes
'''

test_cases = int(input())

for i in range(0,test_cases):
  string = input()
  substring = input()
  if substring in string: 
  	print("Yes")
  else:
  	print("No")

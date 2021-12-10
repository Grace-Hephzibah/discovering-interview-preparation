'''
Reverse each word of a string
Write the program to reverse the each word of a string.

Input Format:

input consist of one string

Output Format:

Reverse the each of a string

Sample Input:

Hello World

Sample Output:

World Hello
'''

string = input()
l = []
size = 0
beg = 0

for i in range(0,len(string)):
  if string[i]==' ' :
    l += [string[beg:i]]
    size += 1
    beg = i+1
l += [ string[beg:len(string)] ]
    
for i in range(size, -1, -1):
  print(l[i], end = " ")
    

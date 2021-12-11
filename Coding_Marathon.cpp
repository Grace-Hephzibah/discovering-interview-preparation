/*
Coding Marathon
Problem Description:

N number of people participated in a coding marathon where they were asked to solve some problems. Each problem carried 1 mark and at the end of the marathon, the total marks that each person achieved was calculated.

As an organizer, you have the list of the total marks that each person achieved. You have to calculate the sum of the marks of top K scorers from the list.

Input Specification:

input1: N, Total number of participants

input2: Top scorers

input3: An array of length N with the scores of all N participants

Output Specification:

Return S, sum of the marks of top K scorers from the list.

Example 1:

input1: 4

input2: 2

input3: {4, 1, 2, 5}

Output: 9

Explanation:

Top 2 scores are 5 and 4. Sum = 5+4=9.

Example 2:

input1: 4

input2: 3

input3: {4, 3, 6, 1}

Output: 13

Explanation:

Top 3 scores are 6, 4 and 3. Sum = 6+4+3=13.
*/

#include <iostream>
using namespace std;
int arr[100], a=-1;
void insert (int val)
{
  if (a==-1) {arr[++a] = val; return; }
  int i;
  for(i=a; i>=0; i--)
  {
    if (arr[i] < val) arr[i+1] = arr[i];
    else break;
  }
  arr[i+1] = val;
  a++;
}

int main() 
{
   int no, top, score;
  cin>>no>>top;
  for(int i=0; i<no; i++)
  {
    cin>>score;
    insert(score);
  }
  
  int sum=0;
  for(int i=0; i<top; i++) sum+= arr[i];
  
  cout<<sum;
  
}

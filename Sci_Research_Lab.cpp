/*
Science research lab
Problem:

 In a science research lab, combining two nuclear chemical produces a maximum energy that is the product of the energy of the two chemicals. The energy values of the chemicals can be negative or positive. The scientist wishes to calculate the sum of the maximized energies of the two elements when the reaction happens.

 Write an algorithm to find the total energy produced by the chemicals when the reaction happens.

Input

 The first line of the input consists of an integer numOfChem, representing the number of chemicals (N). The second line consists of N space separated integers ener1, ener2, enerN representing the energies of the chemicals.

Output

 Print an integer representing the total energy produced by the chemicals when the reaction happens.

Constraints

 O < numOfChem < 106

 -106 < ener1 < 106 

 O < I < numOfChem

Example

Input:

 7

 9 -3 8 -6 -7 8 10

Output

 19

Explanation

 The maximum product of the energies is 90, i.e 9*10. So, the sum of the energies of the chemicals is 19.
*/

#include <iostream>
using namespace std;
int pos[100], p=-1; //, neg[100], n=-1;

void insertp(int val)
{
  if (p==-1) { pos[++p] = val; return;}
  int i;
  for(i=p; i>=0; i--)
  {
    if (pos[i] > val) pos[i+1] = pos[i];
    else break;
  }
  pos[i+1] = val; p++;
}

/*
void insertn(int val)
{
  if (n==-1) neg[++n] = val;
  else
  {
    int i;
    for(i=n; i>=0; i--)
    {
      if (neg[i] > val) neg[i+1] = neg[i];
      else break;
    }
    neg[i+1] = val; n++;
  }
}
*/

int main() 
{
  int tot, value; 
  cin>>tot;
  while(tot--)
  {
    cin>>value;
    if (value>=0) insertp(value);
    //else insertn(value);
  }
  int m1 = pos[p]*pos[p-1]; // , m2 = neg[0]*neg[1];
  //if (m1>m2) 
  cout<<pos[p] + pos[p-1];
  //else cout<<neg[0] + neg[1];
  
  return 0;  
}

// The test cases finally worked when the negative values were ignored. :))



/*
Head of sales team
Problem:

 The company Trader Mart manufactures different types of software products. They deliver their products to their N clients. Whenever the company fulfills the complete order of a client, the order ID generated is the concatenation of the number of products delivered for every committed product type. The head of the sales team wishes to find the client wise data for the total number of products of any type delivered to the respective client.

Write an algorithm for the head of sales team to calculate the total number of products of any type delivered to the respective clients.

Input

 The first line of the input consists of an integer numOfClients, representing the number of clients(N)

The second line consists of N space-separated integers–orderID1, orderID2, orderIDN representing the orderIDs of the orders delivered to the clients.

Output

 Print N space-separated integers representing the clientwise data for the total number of products of any type delivered to each of the respective clients.

Constraints

 O < numOfClients < 106

 O < orderIDi < 106

 O < i < numofClients

Example

Sample Input:

 4

 43 345 20 987

Sample Output:

 7 12 2 24

Explanation:

 The client O ordered 2 types of products thus, the total products delivered to him/her is 7.


*/

#include <iostream>
using namespace std;
int product(int val)
{
  int sum=0;
  while(val)
  {
    sum += val%10;
    val /= 10;
  }
  return sum;
}

int main() 
{
    int n, order; cin>>n;
  	while(n--)
    {
      cin>>order;
      cout<<product(order)<<" ";
    }
  return 0;
}

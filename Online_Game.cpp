/*
Online game
Problem:

 You are playing an online game. In the game, a list of N numbers is given. The player has to arrange the numbers so that all the odd numbers of the list come after the even numbers. Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.
The methd of rearranging is simple. You have to swap every odd number in the right with a even number from the left. 

Hint // You won't see this in the test 
Make a pointer to move from the right and another from the left and do the check and swap if needed 

Input

 The first line of the input consists of an integer num, representing the size of the list(N). The second line of the input consists of N space-separated integers representing the values of the list

Output

 Print N space-separated integers such that all the odd numbers of the list come after the even numbers

Example

Sample Input

 8

 10 98 3 33 12 22 21 11

Sample Output

 10 98 12 22 3 33 21 11

Explanation

 All the even numbers are placed before all the odd numbers.
*/

#include<iostream>
using namespace std;

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}
int seperateEvenAndOdd(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while(left < right)
    {
        while(arr[left]%2 == 0 && left < right)
        {
            left++;
        }
     
while(arr[right]%2 == 1 && left < right)    
        {
            right--;
        } 
if(left < right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}
int main()
{
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
 
    for(int i=0;i<arr_size;i++)
    {
        cin >> arr[i];
    }
    int i=0;
    seperateEvenAndOdd(arr,arr_size);
   
    for(i=0;i<arr_size;i++)
	  cout << arr[i] << " ";
    return 0;
}

    


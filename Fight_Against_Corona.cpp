/*
Fight against Corona
Dinesh is fond of video games. Due to the pandemic, he designs a video game called Corona world. In this game, the player enters the game with a certain energy. The player should defeat all the corona infected zombies to reach the next level. When time increases the zombies will increase double the previous minute. Anyhow the player can manage to fight against all the zombies. In this case, definitely the player can not achieve the promotion. Hence the player gets a superpower to destroy all the zombies in the current level when the current game time is a palindrome. Anyhow the player can manage only if he knows the time taken to get the superpower. Help the player by providing the minimum minutes needed to get the superpower by which he can destroy all the zombies. You will be provided with the starting time of the game.



Input Format:

First-line contains a string representing the starting time.

Output:

A string representing the minimum minutes needed to get the superpower.



Constraints:

Input time will be in 24 hours format



Sample Input:

05:39

Sample Output:

11

Explanation:

It takes 11 minutes for minute value to become 50, 05:50 is a palindromic time.
*/


#include <iostream>
using namespace std;

int conv(char *str, int a)
{
  return ((str[a]-'0')*10 + (str[a+1]-'0'));
}
int main() 
{
   char time[5];   cin>>time;
  int hr = conv(time, 0), min = conv(time, 3);
  int palin = 0;
  while (hr%10 != min/10 || min%10 != hr/10)
  {
    min++;
    if (min == 60) { min =0; hr++;}
    if (hr == 24) hr==0;
    palin++;
  }
  cout<<palin;
}

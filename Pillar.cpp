/*
Pillar Level
In a gaming hub, N number of players were playing the same type of game. All players got stuck at the pillar level in the game, each with a different score. The owner of the gaming hub announced that players can pass that level if they can break two pillars. Both pillars have their own health points. The trick to break one pillar at a time that if the player's current score is multiplied up to a certain point then it should be equal to the pillar's health. The same trick is to be used for the other pillar. If there is no number that can be multiplied with the player score to make the score equal to the pillar's health, then that player loses. A player can only break one pillar at a time and if the player is not able to break both the pillars then they will not be able to clear the level.

Write an algorithm to find the total number of players who will clear that level of the game.

Input

The first line of the input consists of an integer

-numPlayers representing the number of players (N).

The second lines consist of N space-separated integers - score1, score2, ..., scoreN, representing the score of each player.

The last line of the input consists of two integers - health1, health2 representing the health of both the pillars respectively.

Output

Print the count of the players who will clear that level of the game.0

Constraints

0 < numPlayers < 103

0 < score < 103

score < health1, health2 < 105

0 < i < numPlayers

Example

Input:

5

15 5 3 7 9

135 90

Output:

4

Explanation:

Scores 15, 5, 3, 9 can be multiplied by another number to equal 135 and 90 which will break the pillar.

So, the output is 4.
*/

#include <iostream>
using namespace std;

int main() 
{
   int n, p1, p2, win=0, player;
  cin>>n;
  int players[n];
  for(int i=0; i<n; i++) cin>>players[i];
  cin>>p1>>p2;
  
  for(int i=0; i<n; i++) if ((p1%players[i]==0) && (p2%players[i]==0)) win++;
  cout<<win;
}

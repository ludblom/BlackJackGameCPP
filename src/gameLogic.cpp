#include <iostream>
#include <algorithm>
#include <vector>

#include "deck.h"
#include "gameLogic.h"
#include "terminalPrinting.h"

using namespace std;

// Cleanup
void
cleanAllCards(vector<Card> *player, int players)
{
  for(int i = 0; i < players; i++)
    {
      player[i].clear();
    }
}

void
startGame(vector<Card> *c, int players)
{
  // Num of players include dealer
  int allPlayers = players + 1;
  
  // Dealer and num of players
  vector<Card> player[allPlayers];
  
  for(int sus = 0; sus < 10; sus++)
    {
      // Cleanup to play
      cleanAllCards(player, allPlayers);
      
      // Dealer, setup game
      drawXCards(c, &player[0], 1);
      
      for(int i = 1; i < allPlayers; i++)
	{
	  // Players
	  drawXCards(c, &player[i], 2);
	}

      // Print out start of game
      // TODO: Make graphics, now terminal
      printStart();
      printOutDealer(player[0]);
      printOutCards(player, allPlayers);
    }
}

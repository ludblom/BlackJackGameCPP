#include <iostream>
#include <algorithm>
#include <vector>

#include "deck.h"
#include "gameLogic.h"

using namespace std;

int
main(int argc, char *argv[])
{
  vector<Card> c;
  
  // createDeck([VAR], [DECK], [SHUFFLES])
  createDeck(&c, 6, 20);

  // Play
  startGame(&c, 4);
  
  return 0;
}

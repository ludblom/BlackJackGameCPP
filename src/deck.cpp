#include <iostream>
#include <algorithm>
#include <vector>

#include "deck.h"

using namespace std;

// Empty initializer
Card::Card(){};

// Set a card
Card::Card(int v, int s)
{
  value = v;
  suit = s;
}

// Get value
int
Card::getValue()
{
  return value;
}

// Get suit
int
Card::getSuit()
{
  return suit;
}

// Draw card
Card
drawCard(vector<Card> *c)
{
  Card aCard = c->front();
  c->erase(c->begin());
  return aCard;
}

// Shuffle deck
void
shuffleDeck(vector<Card> *c, int shuffles)
{
  for(int s = 0; s < shuffles; s++)
    {
      // Generate a non-fixed seed to the random function
      srand(time(NULL));
      random_shuffle(c->begin(), c->end());
    }
}

void
createDeck(vector<Card> *c, int numDecks, int numShuffles)
{
  // Num of decks
  for(int d = 0; d < numDecks; d++)
    {
      // Select card's value
      for(int v = 1; v < 14; v++)
	{
	  // Select card's suit
	  for(int s = 0; s < 4; s++)
	    {
	      Card card(v, s);
	      c->push_back(card);
	    }
	}
    }

  // Shuffle the deck
  shuffleDeck(c, numShuffles);
}

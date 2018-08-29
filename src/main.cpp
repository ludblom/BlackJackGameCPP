#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// Represent a card
class Card
{
private:
  int suit;
  int value;

public:
  Card()
  {
    
  }

  Card(int v, int s)
  {
    suit = s;
    value = v;
  }

  void
  setNewVals(int v, int s)
  {
    value = v;
    suit = s;
  }
  
  int
  getValue()
  {
    return value;
  }
  
  int
  getSuit()
  {
    return suit;
  }
};

void
shuffleDeck(Card *c, int shuffles, int decks)
{
  // A vector, tmp deck and a card counter
  vector<int> pos;
  Card tmpCard[52*decks];
  int cardPlace = 0;

  // Create a vector deck
  for(int i = 0; i < 52*decks; i++) pos.push_back(i);

  // Shuffle the deck
  for(int s = 0; s < shuffles; s++)
    {
      random_shuffle(pos.begin(), pos.end());
    }

  // Place the card c and place into tmpCard[cardPlace]
  for(vector<int>::iterator it=pos.begin(); it != pos.end(); ++it)
    {
      Card card (c[*it].getValue(), c[*it].getSuit());
      tmpCard[cardPlace] = card;
      ++cardPlace;
    }

  for(int i = 0; i < 52*decks; i++)
    {
      c[i].setNewVals(tmpCard[i].getValue(), tmpCard[i].getSuit());
    }
}

int
main()
{
  // TODO: Should be as input instead
  int numDecks = 1;
  int numShuffles = 20;

  // Create a deck with enough memory
  vector<Card> c;

  static int cardsCreated = 0;
  
  // Select card's value
  for(int d = 0; d < numDecks; d++)
    {
      for(int v = 1; v < 14; v++)
	{
	  // Select card's suit
	  for(int s = 0; s < 4; s++)
	    {
	      Card card(v, s);
	      c[cardsCreated] = card;
	      ++cardsCreated;
	    }
	}
    }

  // Shuffle the deck
  shuffleDeck(c, numShuffles, numDecks);

  return 0;
}



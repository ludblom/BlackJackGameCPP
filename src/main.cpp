/*http://www.cplusplus.com/reference/algorithm/random_shuffle/*/

#include <iostream>
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

int
main()
{
  //TODO: Later input from main
  int numDecks = 10;
  int numShuffles = 9;

  // Create a deck vector
  vector<Card> c;
  
  // Select card's value
  for(int d = 0; d < numDecks; d++)
    {
      for(int v = 1; v < 14; v++)
	{
	  // Select card's suit
	  for(int s = 0; s < 4; s++)
	    {
	      Card card(v, s);
	      c.push_back(card);
	    }
	}
    }

  // Shuffle the deck
  shuffleDeck(&c, numShuffles);

  for(int i = 0; i < 52; i++)
    {
      Card aCard = c.front();
      cout << aCard.getValue() << "\t" << aCard.getSuit() << endl;
      c.erase(c.begin());
    }

  return 0;
}

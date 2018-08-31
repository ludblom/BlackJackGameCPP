#include <iostream>
#include <iterator>
#include <algorithm>

#include "terminalPrinting.h"
#include "deck.h"

using namespace std;

void
printStart()
{
  cout << endl;
  cout << "**************************" << endl;
  cout << "******** NEW GAME ********" << endl;
  cout << "**************************" << endl;
}

void
convert(int value, int suit)
{
  switch(suit)
    {
    case 0: cout << "\u2660"; break; // Spades
    case 1: cout << "\u2663"; break; // Clubs
    case 2: cout << "\u2665"; break; // Hearts
    case 3: cout << "\u2666"; break; // Diamonds
    }

  cout << "   ";
  
  switch(value)
    {
    case 1:  cout << "A"   << endl;   break;
    case 10: cout << "T"   << endl;   break;
    case 11: cout << "J"   << endl;   break;
    case 12: cout << "Q"   << endl;   break;
    case 13: cout << "K"   << endl;   break;
    default: cout << value << endl;   break;
    }
}

void
printOutDealer(vector<Card> dealer)
{
  // TODO: Have to make it a card
  cout << "Dealer" << endl;
  for(vector<Card>::iterator i = dealer.begin(); i != dealer.end(); ++i)
    {
      convert((*i).getValue(), (*i).getSuit());
    }
  cout << "X   X" << endl;
  cout << "**************************" << endl;
}

void
printOutCards(vector<Card> *player, int allPlayers)
{
  // TODO: Have to make it a card
  for(int i = 1; i < allPlayers; i++)
    {
      cout << "Player:" << i << endl;
      for(vector<Card>::iterator iter = player[i].begin(); iter != player[i].end(); ++iter)
	{
	  convert((*iter).getValue(), (*iter).getSuit());
	}
      cout << "**************************" << endl;
    }
}

#ifndef _DECK_H_
#define _DECK_H_
#include <vector>

// Represent a card
class Card
{
private:
  int suit;
  int value;

public:
  Card();

  Card(int v, int s);
  
  int getValue();
  
  int getSuit();
};

void createDeck(std::vector<Card> *c, int, int);
void drawXCards(std::vector<Card> *c, std::vector<Card> *player, int drawNum);
Card drawCard(std::vector<Card> *c);
#endif

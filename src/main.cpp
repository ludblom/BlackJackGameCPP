#include <iostream>
#include <algorithm>
#include <vector>

#include "deck.h"

using namespace std;

int
main()
{
  vector<Card> c;
  createDeck(&c, 6, 20);
  Card aCard = drawCard(&c);
  cout << aCard.getValue() << endl;
  return 0;
}

#ifndef _TERMINALPRINTING_H_
#define _TERMINALPRINTING_H_
#include "deck.h"
#include <vector>

void printStart();
void convert(int, int);
void printOutCards(std::vector<Card> *player, int);
void printOutDealer(std::vector<Card> dealer);

#endif

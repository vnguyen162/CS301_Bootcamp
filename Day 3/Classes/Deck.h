
#ifndef CS301_BOOTCAMP_DECK_H
#define CS301_BOOTCAMP_DECK_H

#include <iostream>
using namespace std;

const int MAX_DECK_SIZE = 52*4;

const string SUITNAMES[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
const string FACENAMES[] = {"Jack", "Queen", "King"};

enum SuitType {HEARTS, DIAMONDS, CLOVER, SPADES, BAD_SUIT};
enum FaceType {JACK, QUEEN, KING, NUMERAL, BAD_FACE};

struct Card {
    /* Put your card definition here */
    SuitType suit;
    FaceType face;
    int rank;   // value that is assigned to a card

    string toString() {
        // Use the FACENAMES array and face private variable to
        // determine the string representation of the card suit.

        // Use the SUITENAMES array and suit private variable to
        // determine the string representation of the card suit.

        // You may find it convenient to use to_string(rank)
        // to convert the rank private variable to a string.

        return "";  // You will need to change this
    }
};

const Card BAD_CARD = {BAD_SUIT, BAD_FACE, -999};   // Represents a bad card

class Deck {
public:
    Deck();

    void Shuffle();

    int NumCards() const;

    Card DrawTopCard();

    Card GetCard(int i);

    void AddCard(Card card);

private:
    Card cards[MAX_DECK_SIZE];
    int topCard;
};


#endif //CS301_BOOTCAMP_DECK_H

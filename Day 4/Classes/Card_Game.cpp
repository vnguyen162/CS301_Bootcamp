#include "Deck.h"

#include <iostream>

using namespace std;

int main() {

    Deck deck;

    cout << "The deck has " << deck.NumCards() << " cards." << endl;
    while (deck.NumCards() > 0) {
        cout << "Drew " << deck.DrawTopCard().toString() << endl;
    }
    cout << "The deck has " << deck.NumCards() << " cards." << endl << endl;

    Deck deck2;
    deck2.Shuffle();
    deck2.Shuffle();

    cout << "The deck2 has " << deck2.NumCards() << " cards." << endl;
    while (deck2.NumCards() > 0) {
        Card card = deck2.DrawTopCard();
        cout << "Drew " << card.toString() << endl;
        deck.AddCard(card);
    }
    cout << "The deck has " << deck.NumCards() << " cards." << endl;

    while (deck.NumCards() > 0) {
        cout << "Drew " << deck.DrawTopCard().toString() << endl;
    }

    return 0;
}
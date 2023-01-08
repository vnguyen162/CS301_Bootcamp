/**
 * Created by Varick Erickson on 10/25/2022.
 *
 * You should not remove or change any of the tests in this file.
 *
 * The purpose of this file is to test the functions for the various loop functions.
 */

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "../Deck.h"
#include <set>
#include <vector>
#include <stack>
#include "unit_test_utils.h"

// Using vector instead of a set to avoid implementing
// overloads in Card struct
bool CardExists(vector<Card> set, Card card) {
    for (int i = 0; i < set.size(); i++) {
        if (card.suit == set[i].suit &&
            card.face == set[i].face &&
            card.rank == set[i].rank) {
            return true;
        }
    }
    return false;
}

TEST_CASE("Deck Constructor") {
    Deck deck;

    if (deck.NumCards() != 52) {
        INFO("Deck has " << deck.NumCards() << " cards.");
        INFO("Expected 52 cards");
        FAIL();
    }
}

TEST_CASE("Card toString") {
    for (SuitType s = SPADES; s >= HEARTS; s = static_cast<SuitType>(s-1)) {
        for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
            string expectedStr = FACENAMES[f] + " of " + SUITNAMES[s];
            Card myCard = {s, f, 10};
            if (myCard.toString() != expectedStr) {
                INFO("toString() does not match expected");
                INFO("..Actual: " << myCard.toString());
                INFO("Expected: " << expectedStr);
                FAIL();
            }
        }
    }

    for (SuitType s = SPADES; s >= HEARTS; s = static_cast<SuitType>(s-1)) {
        for (int r = 1; r <= 10; r++) {
            string expectedStr = to_string(r) + " of " + SUITNAMES[s];
            Card myCard = {s, NUMERAL, r};
            if (myCard.toString() != expectedStr) {
                INFO("toString() does not match expected");
                INFO("..Actual: " << myCard.toString());
                INFO("Expected: " << expectedStr);
                FAIL();
            }
        }
    }
}

TEST_CASE("Deck DrawTopCard") {
    Deck deck;
    vector<Card> cardSet;

    while (deck.NumCards() > 0) {
        Card cardDrawn = deck.DrawTopCard();
        cardSet.emplace_back(cardDrawn);
    }

    if (deck.NumCards() != 0) {
        INFO("Deck has " << deck.NumCards() << " cards.");
        INFO("Expected 0 cards after drawing 52 cards");
        FAIL();
    }

    // Make sure each card exists
    for (int s = SPADES; s >= HEARTS; s--) {
        for (int n = 10; n >= 1; n--) {
            Card expectedCard = {};
            expectedCard.rank = n;
            expectedCard.face = NUMERAL;
            expectedCard.suit = (SuitType) s;
            if (!CardExists(cardSet, expectedCard)) {
                INFO("Deck missing card: ");
                INFO("Face: " << FACENAMES[expectedCard.face]);
                INFO("Suit: " << SUITNAMES[expectedCard.suit]);
                INFO("Rank: " << expectedCard.rank);
                FAIL();
            }
        }
        for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
            Card expectedCard = {};
            expectedCard.rank = 10;
            expectedCard.face = NUMERAL;
            expectedCard.suit = (SuitType) s;
            if (!CardExists(cardSet, expectedCard)) {
                INFO("Deck missing card: ");
                INFO("Face: " << FACENAMES[expectedCard.face]);
                INFO("Suit: " << SUITNAMES[expectedCard.suit]);
                INFO("Rank: " << expectedCard.rank);
                FAIL();
            }
        }
    }
}

#include "Deck.h"
#include<cstdlib>
#include"time.h"

Deck::Deck()
{
    topCard = -1;
    for (SuitType s = HEARTS; s <= SPADES; s = SuitType(s+1))
    {
        for (FaceType f = JACK; f <= KING; f = FaceType(f+1))
        {
            topCard++;
            cards[topCard] = Card {s, f, 10};
            //Card c = Card{s, f, 10};
            //cards[topCard] = c;

        }
        for (int i = 0; i<=10; i++)
        {
            topCard++;
            cards[topCard] = Card{s, NUMERAL, i};

        }
    }


}

void Deck::Shuffle()
{
    srand(time(0));
    for (int i = 0; i<= topCard; i++)
    {
        int randNum = rand() % (topCard  + 1);
        Card tempCard = cards[i];
        cards[i] = cards[randNum];
        cards[randNum] = tempCard;
    }
}

int Deck::NumCards() const
{
    return topCard + 1;
}

Card Deck::DrawTopCard()
{
    if (topCard < 0)
        return BAD_CARD;
    Card c = cards[topCard];
    topCard--;
    return c;
}

Card Deck::GetCard(int i)
{
    if (i < 0 || i > topCard)
        return BAD_CARD;
    return cards[i];
}

void Deck::AddCard(Card card)
{
    if (topCard >= MAX_DECK_SIZE - 1)
        return;
    topCard++;
    cards[topCard] = card;
}

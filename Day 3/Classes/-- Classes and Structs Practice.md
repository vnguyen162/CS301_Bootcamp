# Card Deck Class

Your goal is to create a Deck class that can represent a deck of cards.  
The class will require the following:

* A Deck constructor
* A public shuffle method that randomizes cards in the deck
* A draw function that "removes" the topmost card from the deck
* A get card function that returns the value of a card at a given location in the deck
* An add card function that adds a card to the top of the deck

```c++
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
```

## Private member variables
* `cards` is an array of cards
* `topCard` represents the "top" card of the deck.  If the
  deck has 52 cards, the `topCard` will have a value of 51.

## Card struct

We represent a single card using a struct.  The Deck class represents the deck
using an array of `Card` structs. 

The Card struct should have three private member variables:

* A member variable to store the suit (Hearts, Diamonds, Clubs, Spades)
* A member variable to store the face (Jack, Queen, King, Numeral)
* A member variable to store the rank (the number value of a card)
* A `toString` member function that uses the member variable values
  to return a string representation of the card.
  
Notice that the `toString()` function is part of the Card struct not the Deck class.

Note that a `SuitType` and `FaceType` is provided for you.

```c++
enum SuitType {HEARTS, DIAMONDS, CLOVER, SPADES, BAD_SUIT};
enum FaceType {JACK, QUEEN, KING, NUMERAL, BAD_FACE};
```

For the `FaceType`, `NUMERAL` represents a non-face number card.
These are the number cards from 1 to 10 (this includes Aces, which
are considered 1).

The `BAD_SUIT` and `BAD_FACE` are used to represent invalid cards 
or errors while using the Deck class.  We use these to define
the constant `BAD_CARD`.

```c++
const Card BAD_CARD = {BAD_SUIT, BAD_FACE, -999};   // Represents a bad card
```

## `string toString()`

The `toString()` function that is part of the Card struct uses
the member variables to return a string representation of the struct.

Example:
```c++
Card mycard;
mycard.suit = HEARTS;
mycard.face = KING;
mycard.rank = 10;

// mycard.toString() will return the string
// "King of Hearts"
cout << mycard.toString() << endl;
```

```c++
Card mycard;
mycard.suit = CLUBS;
mycard.face = NUMERAL;
mycard.rank = 2;

// mycard.toString() will return the string
// "2 of Clubs"
cout << mycard.toString() << endl;
```

The above 
Use the `FACENAMES` array and face private variable to 
determine the string representation of the card suit.

Use the `SUITNAMES` array and suit private variable to
determine the string representation of the card suit.

You may find it convenient to use `to_string(rank)`
to convert the rank private variable to a string.

> ### HINT
> 
> Take a look at the `TEST_CASE("Card toString")` in the ClassTest.cpp file.  Be sure to look at how `FACENAMES` and 
> `SUITNAMES` are used.  You should be using a similar approach.


### `Deck()` Constructor

The constructor should initialize the deck to have 52 cards and the `topCard`
to have the appropriate value.

Recall that it is possible to "loop" through enumerations.

Example:
```c++
// loop through all of the FaceTypes
for (FaceType f = JACK; f <= KING; f = static_cast<FaceType>(f+1)) {
    // do something useful with f
}
```

Here is a rough algorithm to initialize all 52 cards:

```c++
For each SuitType {
    // Add all the face cards for a given suit
    For each FaceType {
        Add card to cards array   
    }
    
    // Add all numeral cards for a given suit
    For each Numeral {
        Add card to cards array
    }
}
   
```

### `int NumCards() const`
This function returns the total number of cards in the deck.

### `void AddCard(Card card)`
This adds a card to the top of the deck provided there is space in the
deck.

### `Card DrawTopCard()`

This function returns the topmost card of the deck. This function
also removes the card from the deck.

### `void Shuffle()`

This function should randomize the cards in the deck.

A simple shuffle algorithm is as follows:
```c++
For each index in the deck
   find a random index in the deck
   swap the card from the current index with the random index
```

To find a random index, you can use the function `rand()` with modulus
to control the range.

Here are a few examples of how to use `rand()`:
```c++
int randIndex = rand() % 10;      // random value from 0 to 9
int randIndex = rand() % 101;     // random value from 0 to 100
int randIndex = rand() % 10 + 1;  // random value from 1 to 10
```

### `Card GetCard(int i)`

This function returns the card at a particular index. Index 0 
represents the card at the bottom of the deck.
If the index i is out of bounds, return BAD_CARD.

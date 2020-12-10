#include <stdio.h>

struct card
{
	char *face;
	char *suit;
}card;

int main(void)
{
	struct card aCard;
	struct card *cardPtr;

	aCard.face = "ACE";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
		cardPtr->face, " of ", cardPtr->suit,
		(*cardPtr).face, " of ", (*cardPtr).suit);
	return 0;
}
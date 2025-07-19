/**
 * @file cal_card_val.c
 * @brief Calculate the value of a playing card.
 *
 * This program calculates the value of a playing card based on its rank and suit.
 * The card value is determined as follows:
 * - Number cards (2-10) are worth their face value.
 * - Face cards (J, Q, K) are worth 10 points.
 * - Aces (A) are worth 11 points.
 *
 * The program prompts the user to enter a card rank and suit, then displays the
 * corresponding card value.
 */

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("Enter the card name (e.g., 2, 3, ..., 10, J, Q, K, A):");
    scanf("%2s", card_name);
    int val = 0;
    if (card_name[0] == 'K' || card_name[0] == 'Q' || card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }
    if (val < 1 || val > 10) {
        puts("Invalid card name.");
        return 1;
    }
    printf("The value of the card %s is: %d\n", card_name, val);

    if (val >= 3 && val <=6){
        puts("counts +");
    }
    else if (val == 10){
        puts("counts -");
    }
    else {
        puts("on you");
    }

    return 0;
}

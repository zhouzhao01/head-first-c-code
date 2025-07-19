#include <stdio.h>

int main(void) {
    char *cards = "JQK"; // 这里是字符串常量
    char a_card = cards[2];

    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];

    cards[2] = cards[1];
    cards[1] = a_card;

    puts(cards);
    return 0;
}
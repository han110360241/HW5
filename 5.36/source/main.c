#include <stdio.h>

void hanoi(long int plate, char A, char B, char C) {
    if (plate == 1) {
        printf("Move sheet from %c to %c\n", A, C);
    }
    else {
        hanoi(plate - 1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(plate - 1, B, A, C);
    }
}

int main() {

    hanoi(64, 'A', 'B', 'C');
    return 0;
}
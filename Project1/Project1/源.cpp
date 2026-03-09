#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 4 people: A, B, C, D
    // 0 = Knave, 1 = Knight
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c < 2; c++) {
                for (int d = 0; d < 2; d++) {
                    // A says: The amount of knights and knaves are same (2 knights)
                    int A_says = (a + b + c + d == 2);

                    // B says: A is not Knight
                    int B_says = !a;

                    // C says: B and C are not same
                    int C_says = (b != c);

                    // D says: A and D are the same
                    int D_says = (a == d);

                    // Check if all statements match their identities
                    if ((A_says == a) && (B_says == b) && (C_says == c) && (D_says == d)) {
                        printf("A is %s!\n", a ? "Knight" : "Knave");
                        printf("B is %s!\n", b ? "Knight" : "Knave");
                        printf("C is %s!\n", c ? "Knight" : "Knave");
                        printf("D is %s!\n", d ? "Knight" : "Knave");
                        printf("\n");
                    }
                }
            }
        }
    }
    return 0;
}
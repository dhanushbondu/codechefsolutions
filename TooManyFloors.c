#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t-- > 0) {
        int a, b;
        scanf("%d%d", &a, &b);

        int chef = 0;
        if (a >= 1 && a <= 10) {
            chef = 1;
        } else if (a >= 11 && a <= 20) {
            chef = 2;
        } else if (a >= 21 && a <= 30) {
            chef = 3;
        } else if (a >= 31 && a <= 40) {
            chef = 4;
        } else if (a >= 41 && a <= 50) {
            chef = 5;
        } else if (a >= 51 && a <= 60) {
            chef = 6;
        } else if (a >= 61 && a <= 70) {
            chef = 7;
        } else if (a >= 71 && a <= 80) {
            chef = 8;
        } else if (a >= 81 && a <= 90) {
            chef = 9;
        } else {
            chef = 10;
        }

        int chefina = 0;
        if (b >= 1 && b <= 10) {
            chefina = 1;
        } else if (b >= 11 && b <= 20) {
            chefina = 2;
        } else if (b >= 21 && b <= 30) {
            chefina = 3;
        } else if (b >= 31 && b <= 40) {
            chefina = 4;
        } else if (b >= 41 && b <= 50) {
            chefina = 5;
        } else if (b >= 51 && b <= 60) {
            chefina = 6;
        } else if (b >= 61 && b <= 70) {
            chefina = 7;
        } else if (b >= 71 && b <= 80) {
            chefina = 8;
        } else if (b >= 81 && b <= 90) {
            chefina = 9;
        } else {
            chefina = 10;
        }

        printf("%d\n", abs(chef - chefina));
    }

    return 0;
}


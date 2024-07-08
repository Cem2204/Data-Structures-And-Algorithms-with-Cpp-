#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("Value of a: %d\n", a);
    printf("Value of a using pointer p: %d\n", *p);
    printf("Value of a using pointer q: %d\n", **q);
    printf("Value of a using pointer r: %d\n", ***r);

    return 0;
}
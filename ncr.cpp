//
// Created by muhammad-anas on 7/10/25.
//
#include "ncr.h"


int factorial(int const n) {
    int f = 1, i = 1;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int nCr(int const n, int const r) {
    int fn = 0, fr = 0;
    fn = factorial(n);
    fr = factorial(r);
    int const fnr = factorial(n - r);
    return fn / (fr * fnr);
}
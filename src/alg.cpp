// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double value1;
value1 = value;
if (n == 0) {
     return 1;
     }
    for (int i = 1; i < n; i++) {
     value1 = value * value1;
    } return value1;
}

uint64_t fact(uint16_t n) {
  if (n == 0) { return 1; }
    if (n == 1) { return 1; }
      uint64_t fact1 = n * fact(n - 1);
       return fact1;
}

double calcItem(double x, uint16_t n) {
    if (x == 0) { return 0; }
     if (n == 0) { return 1; }
      double itog = pown(x, n) / fact(n);
        return itog;
}

double expn(double x, uint16_t count) {
     double exp, exp1;
        exp1 = 1;
         if (count == 1) {
           exp = calcItem(x, 1);
    }
      for (int i = 1; i <= count; i++) {
       exp = calcItem(x, i);
      exp1 = exp1 + exp;
} return exp1;
}

double sinn(double x, uint16_t count) {
  double sinx, sinx1;
  sinx1 = x;
  if (count == 1) {
  sinx1 = x;
}
  for (int i = 1; i < count; i++) {
sinx = pown(-1, i) * calcItem(x, 2 * i + 1);
sinx1 = sinx1 + sinx;
  }
  return sinx1;
}

double cosn(double x, uint16_t count) {
double cosx, cosx1;
cosx1 = 1;
if (count == 1) {
cosx1 = 1;
}
for (int i = 1; i < count; i++) {
cosx = pown(-1, i) * calcItem(x, 2 * i);
cosx1 = cosx1 + cosx;
} return cosx1;
}

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
	}
	return value1;
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

}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}

/*
 * MIllerRabinPrimality.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "MIllerRabinPrimality.h"

namespace src {

MIllerRabinPrimality::MIllerRabinPrimality() {
	// TODO Auto-generated constructor stub

}

bool MIllerRabinPrimality::millerTest(int n, int d) {
	Power p;

	int a = 2 + rand() % (n - 4);

	long x = p.power4(a, d, n);

	if (x == 1 || x == (n - 1))
		return true;

	while (d != n - 1) {

		x = (x * x) % n;
		d *= 2;

		if (x == 1)
			return false;
		if (x == n - 1)
			return true;

	}

}

bool MIllerRabinPrimality::isPrime(int n, int k) {

	if (n < 0 || n == 4)
		return false;
	if (n < 3)
		return true;

	int d = (n - 1);

	while (d % 2 == 0)
		d /= 2;

	while (k > 0) {

		k--;
		if (!millerTest(n, d))
			return false;
	}

	return true;
}

MIllerRabinPrimality::~MIllerRabinPrimality() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

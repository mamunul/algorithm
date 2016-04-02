/*
 * FermatPrimalityTest.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: Mamunul
 */

#include "FermatPrimalityTest.h"

namespace src {

FermatPrimalityTest::FermatPrimalityTest() {
	// TODO Auto-generated constructor stub

}

bool FermatPrimalityTest::isPrime(int n, int l) {
	Power p;

	if (n < 1 || n == 4)
		return false;
	if (n < 3)
		return true;

	while (l > 0) {

		int a = 2 + rand() % (n - 4);

		if (p.power4(a, n - 1, n) != 1)
			return false;
		l--;
	}

	return true;

}

FermatPrimalityTest::~FermatPrimalityTest() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

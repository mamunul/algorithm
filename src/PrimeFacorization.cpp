/*
 * PrimeFacorization.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "PrimeFacorization.h"

namespace src {

PrimeFacorization::PrimeFacorization() {
	// TODO Auto-generated constructor stub

}

void PrimeFacorization::primeFactors(int n) {

	while (n % 2 == 0) {
		cout << "2" << ",";
		n /= 2;
	}

	for (int i = 3; i * i < n; i += 2) {

		while (n % i == 0) {

			cout << i << ",";
			n /= i;
		}

	}

	if (n > 2)
		cout << n << endl;
}

PrimeFacorization::~PrimeFacorization() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

/*
 * SieveOfEratosthenes.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "SieveOfEratosthenes.h"

namespace src {

SieveOfEratosthenes::SieveOfEratosthenes() {
	// TODO Auto-generated constructor stub

}

void SieveOfEratosthenes::allPrimes(int n) {

	vector<bool> isPrime = vector<bool>(n + 1, true);

	for (int i = 2; i * i < n+1; i++) {

		if (isPrime[i])
			for (int j = i * 2; j < n+1; j += i)
				isPrime[j] = false;

	}

	for (int i = 1; i < n+1; i++)
		if (isPrime[i])
			cout << i << ",";

	cout << endl;

}

SieveOfEratosthenes::~SieveOfEratosthenes() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

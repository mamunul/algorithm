/*
 * PollardRho.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "PollardRho.h"

namespace src {

PollardRho::PollardRho() {
	// TODO Auto-generated constructor stub

}

long long int PollardRho::primeFactor(long long int n) {

	Power p;

	if (n == 1)
		return 1;

	if (n % 2 == 0)
		return 2;

	long long int x = 2 + rand() % (n - 2);
	long long int y = x;
	long long int c = 1 + rand() % (n - 1);

	long long int d = n;

	while (d == n) {

		d = 1;
		while (d == 1) {

			x = (p.power4(x, 2, n) + c + n) % n;

			y = (p.power4(y, 2, n) + c + n) % n;
			y = (p.power4(y, 2, n) + c + n) % n;

			d = gcd(abs(x - y), n);

//			cout << "d:" << d << endl;
		}
	}

	return d;
}

long long int PollardRho::gcd(long long int x, long long int y) {

	while (x != y) {
		if (x > y)
			x -= y;
		else
			y -= x;

	}

	return x;

}

PollardRho::~PollardRho() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

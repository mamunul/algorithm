/*
 * Power.cpp
 *
 *  Created on: Apr 2, 2016
 *      Author: Mamunul
 */

#include "Power.h"

namespace src {

Power::Power() {
	// TODO Auto-generated constructor stub

}

int Power::power1(int x, int y) {

	int res = 1;

	while (y > 0) {

		if (y & 1)
			res *= x;

		y = y >> 1;
		x = x * x;

	}
	return res;
}

long long int Power::power4(long long int x, long long int y, long long int mod) {

	long long int res = 1;

	x = x % mod;

	while (y > 0) {

		if (y & 1)
			res = (res * x) % mod;

		y = y >> 1;
		x = (x * x) % mod;

	}
	return res;
}

int Power::power2(int x, int y) {

	int t = 1;

	if (y == 0)
		return 1;
	t = power2(x, y / 2);

	if (y % 2 == 0)
		return t * t;
	else
		return t * t * x;

}

float Power::power3(float x, int y) {

	float t = 1.0;

	if (y == 0)
		return 1.0;
	t = power3(x, y / 2);

	if (y % 2 == 0)
		return t * t;
	else {
		if (y > 0)
			return t * t * x;
		else
			return (t * t) / x;
	}

}

Power::~Power() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

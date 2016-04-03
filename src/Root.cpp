/*
 * Root.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "Root.h"

namespace src {

Root::Root() {
	// TODO Auto-generated constructor stub

}

double Root::sqRoot(int n) {

	double l = 0;
	double h = n;

	double m = 0;

	while ((l - h) * (l - h) > 0.000001) {

		m = (l + h) / 2;

		if (m * m == n)
			break;
		else if (m * m > n)
			h = m;
		else
			l = m;

	}

	return m;

}

Root::~Root() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

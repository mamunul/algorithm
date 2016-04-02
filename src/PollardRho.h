/*
 * PollardRho.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef POLLARDRHO_H_
#define POLLARDRHO_H_

#include <algorithm>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <deque>
#include <set>

#include "Power.h"

using namespace std;

namespace src {

class PollardRho {
public:
	PollardRho();
	virtual ~PollardRho();
	long long int primeFactor(long long int n);

private:
	long long int gcd(long long int x, long long int y);
};

} /* namespace src */

#endif /* POLLARDRHO_H_ */

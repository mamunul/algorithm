/*
 * MIllerRabinPrimality.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef MILLERRABINPRIMALITY_H_
#define MILLERRABINPRIMALITY_H_

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

class MIllerRabinPrimality {
public:
	MIllerRabinPrimality();
	virtual ~MIllerRabinPrimality();
	bool millerTest(int n, int d);
	bool isPrime(int n, int k);
};

} /* namespace src */

#endif /* MILLERRABINPRIMALITY_H_ */

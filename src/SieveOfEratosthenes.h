/*
 * SieveOfEratosthenes.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef SIEVEOFERATOSTHENES_H_
#define SIEVEOFERATOSTHENES_H_


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

class SieveOfEratosthenes {
public:
	SieveOfEratosthenes();
	virtual ~SieveOfEratosthenes();
	void allPrimes(int n);
};

} /* namespace src */

#endif /* SIEVEOFERATOSTHENES_H_ */

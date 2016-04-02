/*
 * FermatPrimalityTest.h
 *
 *  Created on: Apr 2, 2016
 *      Author: Mamunul
 */

#ifndef FERMATPRIMALITYTEST_H_
#define FERMATPRIMALITYTEST_H_



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

class FermatPrimalityTest {
public:
	FermatPrimalityTest();
	virtual ~FermatPrimalityTest();
	bool isPrime(int n, int l);
};

} /* namespace src */

#endif /* FERMATPRIMALITYTEST_H_ */

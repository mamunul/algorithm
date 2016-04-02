/*
 * PrimeFacorization.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef PRIMEFACORIZATION_H_
#define PRIMEFACORIZATION_H_

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

class PrimeFacorization {
public:
	PrimeFacorization();
	virtual ~PrimeFacorization();
	void primeFactors(int n);
};

} /* namespace src */

#endif /* PRIMEFACORIZATION_H_ */

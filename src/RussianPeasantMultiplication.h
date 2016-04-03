/*
 * RussianPeasantMultiplication.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef RUSSIANPEASANTMULTIPLICATION_H_
#define RUSSIANPEASANTMULTIPLICATION_H_

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

class RussianPeasantMultiplication {
public:
	RussianPeasantMultiplication();
	virtual ~RussianPeasantMultiplication();
	long multiply(long x,long y);
};

} /* namespace src */

#endif /* RUSSIANPEASANTMULTIPLICATION_H_ */

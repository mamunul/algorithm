/*
 * MergeSort.h
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_

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

class MergeSort {
public:
	MergeSort();
	virtual ~MergeSort();
	void sort(vector<int> *n, int l, int h);

private:
	void merge(vector<int> *n, int l,int m, int h);
};

} /* namespace src */

#endif /* MERGESORT_H_ */

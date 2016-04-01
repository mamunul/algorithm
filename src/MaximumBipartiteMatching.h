/*
 * MaximumBipartiteMatching.h
 *
 *  Created on: Mar 30, 2016
 *      Author: Mamunul
 */

#ifndef MAXIMUMBIPARTITEMATCHING_H_
#define MAXIMUMBIPARTITEMATCHING_H_

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

using namespace std;

namespace src {

class MaximumBipartiteMatching {
public:
	MaximumBipartiteMatching();
	virtual ~MaximumBipartiteMatching();
	int execute();

private:
	bool mbm(int u, vector<bool> seen, vector<int> matchR, vector<string> g);
};

} /* namespace src */

#endif /* MAXIMUMBIPARTITEMATCHING_H_ */

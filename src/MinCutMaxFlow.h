/*
 * MinCutMaxFlow.h
 *
 *  Created on: Mar 31, 2016
 *      Author: Mamunul
 */

#ifndef MINCUTMAXFLOW_H_
#define MINCUTMAXFLOW_H_

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

class MinCutMaxFlow {
public:
	MinCutMaxFlow();
	virtual ~MinCutMaxFlow();
	void minCut();

private:
	vector<int> p;
	vector<bool> visited;
	bool m_dfs(int s,int t);
	void m_dfs2(int v);
};

} /* namespace src */

#endif /* MINCUTMAXFLOW_H_ */

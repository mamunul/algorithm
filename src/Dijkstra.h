/*
 * Dijkstra.h
 *
 *  Created on: Apr 4, 2016
 *      Author: Mamunul
 */

#ifndef DIJKSTRA_H_
#define DIJKSTRA_H_

#define N 6
#define M 6
#define INF 1000

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

class Dijkstra {
public:
	Dijkstra();
	virtual ~Dijkstra();
	void sortestPath(int s);

private:
	int g[N][M] = { { 0, 2, 3, 0, 0, 0 }, { 2, 0, 6, 5, 3, 0 }, { 3, 6, 0, 0, 1,
			0 }, { 0, 5, 0, 0, 1, 2 }, { 0, 3, 1, 1, 0, 4 },
			{ 0, 0, 0, 2, 4, 0 } };
};

} /* namespace src */

#endif /* DIJKSTRA_H_ */

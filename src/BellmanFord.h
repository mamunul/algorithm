/*
 * BellmanFord.h
 *
 *  Created on: Apr 6, 2016
 *      Author: Mamunul
 */

#ifndef BELLMANFORD_H_
#define BELLMANFORD_H_

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

#define M 8
#define N 8
#define INF 1000

using namespace std;

namespace src {

class BellmanFord {

	struct Edge {

		int s;
		int d;
		int w;

	};
public:
	BellmanFord();
	virtual ~BellmanFord();
	void shortestPath(int src);

private:
	vector<Edge> g;
	void createGraph1();
	int graph[N][M] = { { 0, 5, 0, 0, 9, 0, 0, 8 },
			{ 0, 0, 12, 15, 0, 0, 0, 4 }, { 0, 0, 0, 3, 0, 0, 11, 0 }, { 0, 0,
					0, 0, 0, 0, 9, 0 }, { 0, 0, 0, 0, 0, 4, 20, 5 }, { 0, 0, 1,
					0, 0, 0, 13, 0 }, { 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 7, 0,
					0, 6, 0, 0 } };
//	int graph[N][M] = { { 0, 4, 4, 0, 0, 0, 0, 0, }, { 0, 0, 0, 0, 0, 0, 0, 0 },
//			{ 0, 0, 0, 0, 4, -2, 0, 0 }, { 3, 0, 2, 0, 0, 0, 0, 0 }, { 0, 0, 0,
//					1, 0, 0, -2, 0 }, { 0, 3, 0, 0, -3, 0, 0, 0 }, { 0, 0, 0, 0,
//					0, 2, 0, 2 }, { 0, 0, 0, 0, -2, 0, 0, 0 } };

};

} /* namespace src */

#endif /* BELLMANFORD_H_ */

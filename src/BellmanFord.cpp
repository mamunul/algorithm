/*
 * BellmanFord.cpp
 *
 *  Created on: Apr 6, 2016
 *      Author: Mamunul
 */

#include "BellmanFord.h"

#define FOR(i,s,e) for(int i = int(s);i != (e);i++)

namespace src {

BellmanFord::BellmanFord() {
	// TODO Auto-generated constructor stub

	createGraph1();

}

void BellmanFord::createGraph1() {

	FOR(i,0,M)
	{
		FOR(j,0,M)
		{

			if (graph[i][j] != 0) {

				Edge edge1;

				edge1.d = j;
				edge1.s = i;
				edge1.w = graph[i][j];
				g.push_back(edge1);
			}

		}
	}

}

void BellmanFord::shortestPath(int src) {

	int V = M ;

	vector<int> dst = vector<int>(M, INF);

	dst[0] = 0;
	bool cycle = false;

	while (V != 0) {

		for (auto edge = g.begin(); edge != g.end(); edge++) {

			int s = edge->s;
			int d = edge->d;

			int prev = dst[d];

			if (s == src) {
				dst[d] = edge->w;
			} else {

				dst[d] = min(dst[d], edge->w + dst[s]);
			}

			if (V == 1 && dst[d] != prev)
				cycle = true;
//			cout << edge->s << "-" << edge->d << ":" << edge->w << endl;
			;
		}

//		break;
		V--;
	}

	FOR(i,0,M)
	{
		if (cycle) {
			cout << "CYCLE" << endl;
			break;
		}

		cout << dst[i] << endl;
	}

}

BellmanFord::~BellmanFord() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

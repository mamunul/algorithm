/*
 * Dijkstra.cpp
 *
 *  Created on: Apr 4, 2016
 *      Author: Mamunul
 */

#include "Dijkstra.h"

namespace src {

Dijkstra::Dijkstra() {
	// TODO Auto-generated constructor stub

//	g = ''

}

void Dijkstra::sortestPath(int s) {

	int v = s;
	int mini = v;
	int minv = INF;

	vector<int> dp = vector<int>(M, INF);

	vector<int> visited = vector<int>(M, 0);

	while (find(visited.begin(), visited.end(), 0) != visited.end()) {

		visited[v] = 1;

		for (int i = 1; i < M; i++) {

			if (v == 0) {

				if (g[v][i] > 0)
					dp[i] = g[v][i];

			} else {

//				if (v == i) {
//				} else
				if (g[v][i] > 0) {

					dp[i] = min(dp[i], g[v][i] + dp[v]);
				}
			}

			if (minv > dp[i] && visited[i] == 0) {
				minv = dp[i];
				mini = i;

			}

		}
		v = mini;
		minv = INF;

	}

	for (int i = 0; i < M; i++)
		cout << "i: " << dp[i] << endl;

}

Dijkstra::~Dijkstra() {
// TODO Auto-generated destructor stub
}

} /* namespace src */

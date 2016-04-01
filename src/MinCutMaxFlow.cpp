/*
 * MinCutMaxFlow.cpp
 *
 *  Created on: Mar 31, 2016
 *      Author: Mamunul
 */

#include "MinCutMaxFlow.h"

namespace src {
int g1[6][6] = { { 0, 16, 13, 0, 0, 0 }, { 0, 0, 10, 12, 0, 0 }, { 0, 4, 0, 0,
		14, 0 }, { 0, 0, 9, 0, 0, 20 }, { 0, 0, 0, 7, 0, 4 },
		{ 0, 0, 0, 0, 0, 0 } };

int g2[6][6] = { { 0, 16, 13, 0, 0, 0 }, { 0, 0, 10, 12, 0, 0 }, { 0, 4, 0, 0,
		14, 0 }, { 0, 0, 9, 0, 0, 20 }, { 0, 0, 0, 7, 0, 4 },
		{ 0, 0, 0, 0, 0, 0 } };
MinCutMaxFlow::MinCutMaxFlow() {
	// TODO Auto-generated constructor stub
	 p = vector<int>(6, 0);
	 visited = vector<bool>(6, false);
}

bool MinCutMaxFlow::m_dfs(int s, int t) {

	vector<bool> visited = vector<bool>(6, false);
	stack<int> st;

	visited[s] = true;
	st.push(s);

	while (!st.empty()) {

		int u = st.top();

		st.pop();


		if (u == t) {
			return true;
		}

		for (int i = 0; i < 6; i++) {

			if (!visited[i] && g1[u][i] > 0) {

				p[i] = u;
				visited[i] = true;
				st.push(i);
			}

		}

	}

	return false;

}

void MinCutMaxFlow::m_dfs2(int v) {

	visited[v] = true;

	for (int i = 0; i < 6; i++) {

		if (g1[v][i] > 0 && !visited[i]) {

			this->m_dfs2(i);
		}

	}

}


void MinCutMaxFlow::minCut() {

	int s = 0;
	int t = 5;

	int max = 0;


	while (this->m_dfs(s, t)) {
		int flow = 10000;
		int j = 0;

		for (int i = t; i != s; i = j) {

			j = p[i];
			flow = min(flow, g1[j][i]);

		}

		for (int i = t; i != s; i = j) {

			j = p[i];
			g1[j][i] -= flow;
			g1[i][j] += flow;

		}

		p = vector<int>(6, 0);
	}

	this->m_dfs2(s);

	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			if (visited[i] && !visited[j] && g2[i][j] > 0)
				cout << i << "-" << j << endl;

}

MinCutMaxFlow::~MinCutMaxFlow() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

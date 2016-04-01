/*
 * MaximumBipartiteMatching.cpp
 *
 *  Created on: Mar 30, 2016
 *      Author: Mamunul
 */

#include "MaximumBipartiteMatching.h"

namespace src {

MaximumBipartiteMatching::MaximumBipartiteMatching() {
	// TODO Auto-generated constructor stub

}

int MaximumBipartiteMatching::execute() {

	vector<string> graph;

	graph.push_back("011000");
	graph.push_back("100100");
	graph.push_back("001000");
	graph.push_back("001100");
	graph.push_back("000000");
	graph.push_back("000001");

	vector<bool> seen ;
	vector<int> matchR = vector<int>(graph.size(),-1);

	int result = 0;
	for (int i = 0; i < graph.size(); i++) {
		seen = vector<bool>(graph.size(),false);
		if (mbm(i, seen, matchR, graph)) {

			result++;
		}

	}

	return result;

}

bool MaximumBipartiteMatching::mbm(int u, vector<bool> seen, vector<int> matchR,
		vector<string> g) {

	string n = g[u];

	for (int i = 0; i < n.length(); i++) {

		if (n[i] == '1' && !seen[i]) {

			seen[i] = true;

			if (matchR[i] < 0 || mbm(matchR[i], seen, matchR, g)) {
				matchR[i] = u;
				return true;
			}
		}

	}

	return false;
}

MaximumBipartiteMatching::~MaximumBipartiteMatching() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

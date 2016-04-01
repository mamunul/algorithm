//============================================================================
// Name        : Functions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <deque>
#include <set>
#include <math.h>
#include "FordFulkerson.h"
#include "MaximumBipartiteMatching.h"
#include "MinCutMaxFlow.h"
#include "StableMarriageProblem.h"

#define INF 10000

using namespace std;
using namespace src;

class Algorithm {

	stack<int> graph_stack;
	queue<int> graph_queue;
	vector<int> low;
	vector<int> disc;

	stack<int> dfs_stack;
//	vector<bool> visited;
	vector<int> parent;

	;

public:
	deque<bool> visited;
	vector<int> nominator;
	vector<int> denominator;
	stack<pair<int, int> > edge;


	vector<string> createGraph() {

		vector<string> graph;


		//max flow

//		graph.push_back("0");

		graph.push_back("011000");
				graph.push_back("001100");
						graph.push_back("010010");
							graph.push_back("001001");
							graph.push_back("000101");
								graph.push_back("000000");

		//ap,bc
//		graph.push_back("0110");
//		graph.push_back("1000");
//		graph.push_back("1001");
//		graph.push_back("0010");

//		graph.push_back("01000000");
//		graph.push_back("00010000");
//		graph.push_back("01000000");
//		graph.push_back("00101000");
//		graph.push_back("00000100");
//		graph.push_back("00000001");
//		graph.push_back("00001000");
//		graph.push_back("00000010");

//		graph.push_back("0110100000");
//		graph.push_back("0001100000");
//		graph.push_back("0000111000");
//		graph.push_back("0000000100");
//		graph.push_back("0001000010");
//		graph.push_back("0000100001");
//		graph.push_back("0000010000");
//		graph.push_back("0000000000");
//		graph.push_back("0000000100");
//		graph.push_back("0000100010");

//ap,bc
//		graph.push_back("01110");
//		graph.push_back("10100");
//		graph.push_back("11000");
//		graph.push_back("10001");
//		graph.push_back("00010");

//		graph.push_back("0110000");
//		graph.push_back("0011101");
//		graph.push_back("1100000");
//		graph.push_back("0100010");
//		graph.push_back("0100010");
//		graph.push_back("0001100");
//		graph.push_back("0100000");

//		graph.push_back("0110000000");
//		graph.push_back("0001000001");
//		graph.push_back("0000010000");
//		graph.push_back("0000100000");
//		graph.push_back("0100000000");
//		graph.push_back("0000001000");
//		graph.push_back("0000000110");
//		graph.push_back("0000010000");
//		graph.push_back("0000000100");
//		graph.push_back("0000100000");
//scc
//		graph.push_back("0101000000");
//		graph.push_back("0010100000");
//		graph.push_back("1000010000");
//		graph.push_back("0010000000");
//		graph.push_back("0000011000");
//		graph.push_back("0000100000");
//		graph.push_back("0000010111");
//		graph.push_back("0000000001");
//		graph.push_back("0000000001");
//		graph.push_back("0000000010");

//scc
//		graph.push_back("0011010");
//		graph.push_back("1000000");
//		graph.push_back("0100000");
//		graph.push_back("0000100");
//		graph.push_back("0000000");
//		graph.push_back("0000001");
//		graph.push_back("0000010");

//		graph.push_back("01000");
//		graph.push_back("00100");
//		graph.push_back("00011");
//		graph.push_back("10000");
//		graph.push_back("00100");

//ap,bc
//		graph.push_back("01100000010");
//		graph.push_back("10000000000");
//		graph.push_back("10011000000");
//		graph.push_back("00100110100");
//		graph.push_back("00100011000");
//		graph.push_back("00010000000");
//		graph.push_back("00011000000");
//		graph.push_back("00001000100");
//		graph.push_back("00010001000");
//		graph.push_back("10000000001");
//		graph.push_back("00000000010");

// scc
//		graph.push_back("010000000");
//		graph.push_back("001001000");
//		graph.push_back("100100000");
//		graph.push_back("010010000");
//		graph.push_back("001000000");
//		graph.push_back("000001100");
//		graph.push_back("000000001");
//		graph.push_back("000000100");
//		graph.push_back("000000010");

//		graph.push_back("0356000");
//		graph.push_back("3002000");
//		graph.push_back("5002637");
//		graph.push_back("6220090");
//		graph.push_back("0060052");
//		graph.push_back("0039501");
//		graph.push_back("0070210");

//		graph.push_back("050200");
//		graph.push_back("501200");
//		graph.push_back("010273");
//		graph.push_back("222030");
//		graph.push_back("007309");
//		graph.push_back("003090");

		cout << "----------------Graph--------------" << endl;

		for (int i = 0; i < (int) graph.size(); i++) {

			for (int j = 0; j < (int) graph[i].length(); j++) {

				cout << " " << graph[i][j];
			}

			cout << endl;
		}
		cout << "----------------Graph--------------" << endl << endl;
//		cout << "DFS: " << endl;
//		dfs(0);
//		cout << "BFS: " << endl;
//		bfs(0);
		visited = deque<bool>(graph.size(), false);

//		visited = vector<bool>(graph.size(), false);
		nominator = vector<int>(graph.size(), 0);
		denominator = vector<int>(graph.size(), graph.size() + 1);
		low = vector<int>(graph.size(), -1);
		disc = vector<int>(graph.size(), -1);
		parent = vector<int>(graph.size(), -1);
		return graph;

	}



	int lcsstring(string s1, string s2) {

		vector<vector<int> > dp(s1.length(), vector<int>(s2.length()));

		int m = 0;
		int mi = 0, mj = 0;

		for (int i = 0; i < (int) s1.length(); i++) {

			for (int j = 0; j < (int) s2.length(); j++) {

				if (s1[i] == s2[j]) {

					if (i == 0 || j == 0)
						dp[i][j] = 1;

					else
						dp[i][j] = 1 + dp[i - 1][j - 1];

					m = max(m, dp[i][j]);

					mi = i;
					mj = j;

				} else {

					dp[i][j] = 0;
				}
			}
		}

		for (int k = 0; k < m; k++) {

			cout << s1[mi - k] << endl;
		}

		return m;
	}

	void backtrack_lcs(int i, int j, vector<vector<int> > dp, string s1) {

		if (i == 0 && j == 0) {
//			cout << s1[i] << endl;
			return;
		}
		if (dp[i - 1][j] == dp[i][j])
			backtrack_lcs(i - 1, j, dp, s1);
		else if (dp[i][j - 1] == dp[i][j])
			backtrack_lcs(i, j - 1, dp, s1);
		else {
			cout << s1[i - 1] << endl;
			;
			backtrack_lcs(i - 1, j - 1, dp, s1);
		}

	}

	int lcssequence(string s1, string s2) {

		vector<vector<int> > dp(s1.length() + 1, vector<int>(s2.length() + 1));

		for (int i = 1; i < s1.length() + 1; i++) {

			for (int j = 1; j < s2.length() + 1; j++) {

				if (s1[i - 1] == s2[j - 1])
					dp[i][j] = 1 + dp[i - 1][j - 1];
				else
					dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);

			}
		}

		backtrack_lcs(s1.length(), s2.length(), dp, s1);

		return dp[s1.length()][s2.length()];
	}

	void dijkstra(vector<string> g) {

		vector<vector<int> > dp(g.size(), vector<int>(g[0].length(), INF));

		deque<bool> visited(g.size(), false);

		int i = 0;
		int mini = 0;
		int m = 1000;

		int vertex = 0;
		visited[vertex] = true;
		do {
			cout << " i: " << i << " v:" << vertex << endl;
			;
			for (int j = 0; j < (int) g[vertex].length(); j++) {

				if (vertex == 0) {
					if (g[vertex][j] - '0' != 0)
						dp[i][j] = g[vertex][j] - '0';

				} else {

					if (g[vertex][j] - '0' == 0) {
						dp[i][j] = dp[i - 1][j];
					} else {

						if (vertex == 0 || j == 0)
							dp[i][j] = min(dp[i - 1][j], g[vertex][j] - '0');
						else
							dp[i][j] = min(dp[i - 1][j],
									g[vertex][j] - '0' + dp[i - 1][vertex]);

					}
				}

				cout << " :" << dp[i][j];

				if (m > dp[i][j] && !visited[j]) {
					mini = min(dp[i][j], mini);
					mini = j;
					m = dp[i][j];
				}

			}

			m = INF;
			cout << endl;
			i++;
			vertex = mini;
			visited[vertex] = true;

		} while (find(visited.begin(), visited.end(), false) != visited.end());
	}
public:
	void bellman_ford() {

		vector<pair<int, int> > vertices;
		vector<int> edge;

		int numberOfVertex = 7;

//		vertices.push_back(make_pair(0, 1));
//		vertices.push_back(make_pair(0, 3));
//		vertices.push_back(make_pair(3, 1));
//		vertices.push_back(make_pair(3, 4));
//		vertices.push_back(make_pair(1, 2));
//		vertices.push_back(make_pair(2, 3));
//		vertices.push_back(make_pair(2, 4));
//		vertices.push_back(make_pair(2, 5));
//		vertices.push_back(make_pair(4, 5));

		vertices.push_back(make_pair(0, 1));
		vertices.push_back(make_pair(0, 2));
		vertices.push_back(make_pair(0, 3));
		vertices.push_back(make_pair(0, 4));
		vertices.push_back(make_pair(0, 5));
		vertices.push_back(make_pair(0, 6));
		vertices.push_back(make_pair(1, 2));
		vertices.push_back(make_pair(2, 3));
		vertices.push_back(make_pair(3, 1));
		vertices.push_back(make_pair(3, 4));
		vertices.push_back(make_pair(3, 5));
		vertices.push_back(make_pair(6, 4));
		vertices.push_back(make_pair(6, 5));

		edge.push_back(0);
		edge.push_back(0);
		edge.push_back(0);
		edge.push_back(0);
		edge.push_back(0);
		edge.push_back(0);
		edge.push_back(-2);
		edge.push_back(-1);
		edge.push_back(4);
		edge.push_back(2);
		edge.push_back(-3);
		edge.push_back(1);
		edge.push_back(-4);

//		edge.push_back(5);
//		edge.push_back(-2);
//		edge.push_back(2);
//		edge.push_back(3);
//		edge.push_back(1);
//		edge.push_back(2);
//		edge.push_back(7);
//		edge.push_back(3);
//		edge.push_back(10);

		vector<vector<int> > dp(numberOfVertex + 1,
				vector<int>(numberOfVertex, INF));

		for (int i = 0; i < numberOfVertex; i++) {

			for (int j = 0; j < vertices.size(); j++) {

				dp[i + 1][0] = 0;
				if (vertices[j].first == 0) {
					dp[i + 1][vertices[j].second] = min(edge[j],
							dp[i][vertices[j].second]);
				} else {
					dp[i + 1][vertices[j].second] = min(
							edge[j] + dp[i + 1][vertices[j].first],
							dp[i + 1][vertices[j].second]);

				}

			};
		}

		for (int i = 0; i < edge.size(); i++) {

			if (vertices[i].first != 0)
				edge[i] = edge[i] + dp[dp.size() - 1][vertices[i].first]
						- dp[dp.size() - 1][vertices[i].second];
		}

		for (int i = 0; i < edge.size(); i++) {
			cout << ":" << edge[i];

		}
		cout << endl;
		for (int j = 0; j < dp[0].size(); j++) {
			cout << ":" << dp[dp[0].size()][j];

		}
		cout << endl;
	}

	void kruskal_mst() {

		vector<pair<int, int> > vertices;
		vector<int> edge;

		int numberOfVertex = 7;

		vertices.push_back(make_pair(0, 1));
		vertices.push_back(make_pair(0, 3));
		vertices.push_back(make_pair(1, 2));
		vertices.push_back(make_pair(1, 4));
		vertices.push_back(make_pair(1, 3));
		vertices.push_back(make_pair(3, 4));
		vertices.push_back(make_pair(3, 5));
		vertices.push_back(make_pair(2, 4));
		vertices.push_back(make_pair(5, 6));
		vertices.push_back(make_pair(5, 4));
		vertices.push_back(make_pair(4, 6));

		edge.push_back(7);
		edge.push_back(5);
		edge.push_back(8);
		edge.push_back(7);
		edge.push_back(9);
		edge.push_back(15);
		edge.push_back(6);
		edge.push_back(5);
		edge.push_back(11);
		edge.push_back(8);
		edge.push_back(9);

		vector<int> sorted_edge = edge;

		sort(sorted_edge.begin(), sorted_edge.end());

		vector<int> mst_edge;

		vector<set<int> > dsjoint_set;
		int index;

		index = 0;

		for (int i = 0; i < sorted_edge.size(); i++) {

			vector<int>::iterator it = find(edge.begin(), edge.end(),
					sorted_edge[i]);

			index = it - edge.begin();

			edge.erase(edge.begin() + index);
			edge.insert(edge.begin() + index, -sorted_edge[i]);

			set<int>::iterator it2, it3;
			int fj = -1;
			int sj = -1;

			for (int j = 0; j < dsjoint_set.size(); j++) {

				set<int> seta = dsjoint_set[j];

				if (fj == -1
						&& seta.find(vertices[index].first) != seta.end()) {
					it2 = seta.find(vertices[index].first);
					fj = j;
				}

				if (sj == -1
						&& seta.find(vertices[index].second) != seta.end()) {
					it3 = seta.find(vertices[index].second);
					sj = j;
				}

			}

			if (fj == -1 && sj == -1) {

				set<int> a;

				a.insert(vertices[index].first);
				a.insert(vertices[index].second);

				dsjoint_set.push_back(a);

				mst_edge.push_back(index);

			} else if (fj == -1 && sj != -1) {

				dsjoint_set[sj].insert(vertices[index].first);
				dsjoint_set[sj].insert(vertices[index].second);

				mst_edge.push_back(index);

			} else if (fj != -1 && sj == -1) {
				dsjoint_set[fj].insert(vertices[index].first);
				dsjoint_set[fj].insert(vertices[index].second);

				mst_edge.push_back(index);

			} else {

				if (fj != sj) {
					dsjoint_set[fj].insert(dsjoint_set[sj].begin(),
							dsjoint_set[sj].end());
					dsjoint_set.erase(dsjoint_set.begin() + sj);

					mst_edge.push_back(index);
				}
			}

		}

		cout << "kruskal" << mst_edge.size() << endl;

		for (int m = 0; m < mst_edge.size(); m++) {

			cout << " m: " << mst_edge[m] << endl;
		}

	}

	void floydWarshall() {
//		vector<vector<int>> graph = { { 0, 5, INF, 10 }, { INF, 0, 3, INF }, { INF, INF,
//				0, 1 }, { INF, INF, INF, 0 } };

//		row = source
//		column = destination

		vector<vector<int>> graph =

//		int graph[5][5] =
				{ { 0, 20, INF, 12, INF }, { INF, 0, 8, INF, 3 }, {
				INF, INF, 0, INF, INF }, { INF, INF, 17, 0, 4 }, { 6, INF, 3, 5,
						0 } };

		for (int i = 0; i < graph.size(); i++) {
			for (int j = 0; j < graph.size(); j++) {
				for (int k = 0; k < graph.size(); k++) {

					if (graph[j][i] + graph[i][k] < graph[j][k])
						graph[j][k] = graph[j][i] + graph[i][k];
				}
			}
		}

		for (int j = 0; j < graph.size(); j++) {
			for (int k = 0; k < graph.size(); k++) {

				cout << graph[j][k] << " ";

			}

			cout << endl;
		}

	}

	void tarjaan(int vertex, vector<string> graph) {

		if (find(visited.begin(), visited.end(), false) == visited.end()
				&& dfs_stack.empty())
			return;

//		cout << "t" << endl;

		if (!visited[vertex]) {

			dfs_stack.push(vertex);

			nominator[vertex] = vertex;
			denominator[vertex] = vertex;

			visited[vertex] = true;

			cout << "dfs: " << vertex << " push: " << vertex << endl;
		}

		bool no = true;
		for (int i = 0; i < graph[vertex].size(); i++) {

			if (graph[vertex][i] == '1' && visited[i] == false) {

				cout << "dfs: " << i << " push: " << i << endl;
				no = false;
				visited[i] = true;
				dfs_stack.push(i);
				nominator[i] = i;
//				denominator[i] = i;
				return tarjaan(i, graph);
				break;
			}
			if (graph[vertex][i] == '1' && visited[i] == true) {

				denominator[vertex] = min(denominator[vertex], denominator[i]);

			}
		}

		if (no) {

			int v = dfs_stack.top();

			for (int i = 0; i < graph[v].size(); i++) {

				if (graph[v][i] == '1' && visited[i] == true) {

					denominator[v] = min(denominator[v], nominator[i]);

				}

				if (graph[v][i] == '1' && visited[i] == false) {

					cout << "dfs: " << v << endl;
					return tarjaan(i, graph);
				}

			}

			dfs_stack.pop();
			cout << "dfs: " << v << " pop: " << v << endl;

			return tarjaan(v, graph);
		}

	}

	int kmp(string str, string pat) {

		vector<int> table = vector<int>(pat.length(), 0);

		int i = 0, j = 1;
		table[i] = 0;
		do {

			if (pat[i] == pat[j]) {

				table[j] = i + 1;
				i++;
				j++;
			} else {

				if (i == 0) {

					table[j] = 0;
					j++;
				} else {
					i = table[i - 1];
				}
			}

		} while (j < pat.length());

		for (int i = 0; i < table.size(); i++) {

			cout << "tab: " << table[i] << endl;
		}
		i = 0;
		j = 0;

		do {
			if (str[i] == pat[j]) {
				i++;
				j++;
			} else {
				if (j == 0)
					i++;
				else
					j = table[j - 1];
			}
		} while (j < pat.length());

		cout << "i:" << i - 1 << endl;

		return i;

	}

	int bmh(string str, string pattern) {

		int max = pattern.length();
		vector<int> badMatchTable = vector<int>(256, max);

		for (int i = 0; i < pattern.length() - 1; i++) {

			badMatchTable[pattern[i]] = min(max - 1 - i,
					badMatchTable[pattern[i]]);
		}

		int i = max - 1;
		int j = max - 1;

		do {
			if (str[i] == pattern[j]) {

				i--;
				j--;

				if (j < 0) {
					i++;

					break;
				}
			} else {
				i = i + badMatchTable[str[i]] + max - 1 - j;
				j = max - 1;
			}

		} while (i < str.length());

		cout << "bmh:" << i << endl;

		return -1;
	}

	void rabin_karp(string str, string substr) {

		int subhash = 0;
		vector<long> strhash;

		for (int j = 0; j < substr.length(); j++) {

			subhash += pow(11, j) * substr[j];
		}

		for (int i = 0; i < str.length(); i++) {

			string sub = str.substr(i, substr.length());

			int hash = 0;

			for (int j = 0; j < sub.length(); j++) {

				hash += pow(11, j) * sub[j];
			}

			if (subhash == hash) {

				cout << "match:" << i << endl;
			}

		}

	}


	void dfs3(int ver, vector<string> graph) {

		visited[ver] = true;
		cout << "visited:" << ver << endl;

		string nodes = graph[ver];
		for (int i = 0; i < nodes.length(); i++) {

			if (nodes[i] == '1' && !visited[i]) {
				dfs3(i, graph);
			}

		}

	}

	void bfs3(int ver, vector<string> graph) {

		visited[ver] = true;
		cout << "visited:" << ver << endl;
		graph_queue.push(ver);

		while (!graph_queue.empty()) {

			string nodes = graph[graph_queue.front()];
			graph_queue.pop();
			for (int i = 0; i < nodes.length(); i++) {

				if (nodes[i] == '1' && !visited[i]) {
					visited[i] = true;
					graph_queue.push(i);
					cout << "visited:" << i << endl;
				}

			}

		}

	}

	void bfs2(int ver, vector<string> graph) {

		if (!visited[ver]) {

			visited[ver] = true;

			graph_queue.push(ver);

			cout << "visited:" << ver << endl;

			bfs2(graph_queue.front(), graph);

		} else {
			string nodes = graph[ver];
			bool c = false;
			for (int i = 0; i < nodes.length(); i++) {

				if (nodes[i] == '1' && !visited[i]) {
					bfs2(i, graph);
					c = true;
				}

			}
			if (!c) {
				cout << "pop:" << graph_queue.front() << endl;

				graph_queue.pop();

			}
			if (!graph_queue.empty()) {
				int v = graph_queue.front();

				bfs2(v, graph);
			}
		}
	}

	void tarjaan2(int v, vector<string> graph) {

		visited[v] = true;
		static int ind = 0;

		string n = graph[v];
		low[v] = ind++;
		disc[v] = low[v];
		dfs_stack.push(v);

		for (int i = 0; i < n.length(); i++) {
			if (n[i] == '1' && low[i] == -1) {
				tarjaan2(i, graph);
				low[v] = min(low[v], low[i]);

			} else if (n[i] == '1' && visited[i]) {

				low[v] = min(low[v], disc[i]);
			}

		}

		if (disc[v] == low[v]) {

			while (dfs_stack.top() != v) {
				int abc = dfs_stack.top();
				cout << abc << ", ";
				dfs_stack.pop();
//				visited[abc] = false;
			}

			int abc = dfs_stack.top();
			cout << abc << endl;
			dfs_stack.pop();
//			visited[abc] = false;

		}

	}

	void articulationPoint(int u, vector<string> graph) {

//		visited[u] = true;
		static int ind = 0;
		disc[u] = ++ind;
		low[u] = disc[u];

		string n = graph[u];

		int child = 0;

		cout << "v:" << u << endl;

		for (int v = 0; v < n.length(); v++) {

			if (n[v] == '1' && disc[v] == -1) {

				child++;
				parent[v] = u;
				articulationPoint(v, graph);

				low[u] = min(low[u], low[v]);

				if (parent[u] == -1 && child > 1)
					cout << "apr: " << u << endl;
//
				if (parent[u] != -1 && low[v] >= disc[u])
					cout << "ap: " << u << endl;

			} else if (n[v] == '1' && parent[u] != v) {
//				parent[v] = u;
				cout << "v1:" << v << endl;
				low[u] = min(low[u], disc[v]);

			}

//			if(low[u] == )

		}

	}

	void biconnectedConnected(int v, vector<string> graph) {

		static int index = 0;

		disc[v] = index++;
		low[v] = disc[v];

		int child = 0;
		string n = graph[v];

		for (int i = 0; i < n.length(); i++) {

			if (n[i] == '1' && low[i] == -1) {

				child++;
				parent[i] = v;
				edge.push(make_pair(v, i));
				biconnectedConnected(i, graph);

//				dfs_stack.push(i);
				low[v] = min(low[v], low[i]);

				if ((parent[v] != -1 && low[i] >= disc[v])) {

					cout << "ap:" << v << endl;

					while (!(edge.top().first == v && edge.top().second == i)) {

						cout << "bc:" << edge.top().first << "-"
								<< edge.top().second;
						edge.pop();
					}

					cout << "bc:" << edge.top().first << "-"
							<< edge.top().second << endl;
					edge.pop();
				}

				if ((parent[v] == -1 && child > 1)) {

					cout << "ap:" << v << endl;
					while (!edge.empty()) {
						while (!(edge.top().first == v)) {

							cout << "bc:" << edge.top().first << "-"
									<< edge.top().second;
							edge.pop();
						}

						cout << "bc:" << edge.top().first << "-"
								<< edge.top().second << endl;
						edge.pop();
					}
				}

			} else if (n[i] == '1' && parent[v] != i) {

//				edge.push(make_pair(v, i));
				low[v] = min(low[v], disc[i]);

			}

		}

	}
	void dfs4(int v,vector<string> graph) {

		dfs_stack.push(v);

		visited[v] = true;

		while (!dfs_stack.empty()) {

			int j = dfs_stack.top();

			dfs_stack.pop();

			cout << "p:" << j << endl;

			for (int i = 0; i < 6; i++) {

				if (graph[j][i] > 0 && !visited[i]) {
					visited[i] = true;

					dfs_stack.push(i);
					cout << "v:" << i << endl;
	//				break;
				}

			}

		}


	}

};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Algorithm algorithm;
	vector<string> graph = algorithm.createGraph();

//	algorithm.bfs3(0, graph);
	cout << "++++++++++++++++" << endl;
//	vector<string> graph2 = algorithm.createGraph();
//	algorithm.bfs3(0, graph2);

//	algorithm.tarjaan2(0, graph2);
//	algorithm.dijkstra(graph);

//	int m = algorithm.ford_fulkerson(0, 5, g);

	FordFulkerson f = FordFulkerson();

//	int m = f.ford_fulkerson();
//
//	cout << "ford fulkerson" << m << endl;

//	MaximumBipartiteMatching m = MaximumBipartiteMatching();

//	cout << "maximum bipartite matching: " << m.execute() << endl;

	MinCutMaxFlow m2 = MinCutMaxFlow();

//	m2.minCut();

	StableMarriageProblem st;

	st.execute();

//	algorithm.articulationPoint(0, graph);
//	algorithm.biconnectedConnected(0, graph);
//	f.bellman_ford();

//	f.kruskal_mst();

//	f.floydWarshall();

//	vector<string> graph = f.createGraph();

//	algorithm.tarjaan(0, graph);
//	cout << algorithm.nominator.size() << endl;
//	for (int i = 0; i < algorithm.nominator.size(); i++) {
//
//		cout << "n: " << algorithm.nominator[i] << " m: "
//				<< algorithm.denominator[i] << endl;
//	}

//	algorithm.kmp("abxabcdabcaby", "abcdabca");

//	algorithm.bmh("abcdabadabacaabacd", "abaca");

//	algorithm.rabin_karp("abcdabadabacaabaca", "abaca");

	return 0;
}

/*
 * MergeSort.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "MergeSort.h"

namespace src {

MergeSort::MergeSort() {
	// TODO Auto-generated constructor stub

}

void MergeSort::sort(vector<int> *n, int l, int h) {

	if (l < h) {
		int m = (l + h) / 2;

		sort(n, l, m);
		sort(n, m + 1, h);

		merge(n, l, m, h);
	}

//	return n;

}

void MergeSort::merge(vector<int> *n, int l, int m, int h) {

	int j = 0;

	int n1 = m - l + 1;
	int n2 = h - m;

	vector<int> A = vector<int>(n1, 0);
	vector<int> B = vector<int>(n2, 0);

	for (int i = 0; i < n1; i++)
		A[i] = (*n)[i + l];

	for (int i = 0; i < n2; i++)
		B[i] = (*n)[i + m + 1];

	int k = l;
	int i = 0;
//	 j = 0;

	while (i < n1 && j < n2) {

		if (A[i] > B[j]) {

			(*n)[k] = B[j];
			j++;
		} else {

			(*n)[k] = A[i];
			i++;
		}
		k++;
	}

	while (i < n1) {

		(*n)[k] = A[i];
		i++;
		k++;
	}

	while (j < n2) {

		(*n)[k] = B[j];
		k++;
		j++;
	}

}

MergeSort::~MergeSort() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

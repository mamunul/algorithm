/*
 * StableMarriageProblem.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: Mamunul
 */

#include "StableMarriageProblem.h"

namespace src {

int preference[8][4] =
		{ { 7, 5, 6, 4 }, { 5, 4, 6, 7 }, { 4, 5, 6, 7 }, { 4, 5, 6, 7 }, { 0,
				1, 2, 3 }, { 0, 1, 2, 3 }, { 0, 1, 2, 3 }, { 0, 1, 2, 3 }, };

StableMarriageProblem::StableMarriageProblem() {
	// TODO Auto-generated constructor stub

}

void StableMarriageProblem::execute() {

	vector<int> wEng = vector<int>(8, -1);
	vector<int> mFree;

	mFree.push_back(0);
	mFree.push_back(1);
	mFree.push_back(2);
	mFree.push_back(3);

//	int count = 4;

	while (mFree.size() > 0) {

		int m = mFree.back();


		for (int i = 0; i < 4 ; i++) {

			int w = preference[m][i];

			if (wEng[w] < 0) {

				wEng[w] = m;
				cout << "w1:" << w << "m:" << m << endl;
				mFree.pop_back();
				break;
			} else {

				int m1 = wEng[w];

				bool b = false;

				for (int j = 0; j < 4; j++) {
					if (preference[w][j] == m) {

						b = true;
						break;

					}
					if (preference[w][j] == m1) {
						b = false;
						break;
					}

				}

				if (b) {
					wEng[w] = m;
					mFree.pop_back();
					mFree.push_back(m1);

					cout << "w:" << w << "m:" << m << endl;
					break;
				}

			}

		}

	}

	for (int i = 4; i < 8; i++) {

		cout << i << "-" << wEng[i] << endl;

	}

}

void StableMarriageProblem::execute2() {

	vector<int> wEng = vector<int>(8, -1);
	vector<int> mFree = vector<int>(4, true);

	int count = 4;

	while (count > 0) {

		int m;
		for (m = 0; m < 4; m++)
			if (mFree[m] == true)
				break;

		for (int i = 0; i < 4 && mFree[m] == true; i++) {

			int w = preference[m][i];

			if (wEng[w] < 0) {

				wEng[w] = m;
				mFree[m] = false;

				cout << "w1:" << w << "m:" << m << endl;
				count--;
				break;
			} else {

				int m1 = wEng[w];

				bool b = false;

				for (int j = 0; j < 4; j++) {
					if (preference[w][j] == m) {

						b = true;
						break;

					}
					if (preference[w][j] == m1) {
						b = false;
						break;
					}

				}

				if (b) {
					wEng[w] = m;
					mFree[m] = false;
					mFree[m1] = true;

					cout << "w:" << w << "m:" << m << endl;

				}

			}

		}

	}

	for (int i = 4; i < 8; i++) {

		cout << i << "-" << wEng[i] << endl;

	}

}

StableMarriageProblem::~StableMarriageProblem() {
// TODO Auto-generated destructor stub
}

} /* namespace src */

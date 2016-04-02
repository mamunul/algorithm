/*
 * Power.h
 *
 *  Created on: Apr 2, 2016
 *      Author: Mamunul
 */

#ifndef POWER_H_
#define POWER_H_

namespace src {

class Power {
public:
	Power();
	virtual ~Power();
	int power1(int x, int y);
	long long int power4(long long int x, long long int y,long long int mod);
	int power2(int x, int y);
	float power3(float x, int y);
};

} /* namespace src */

#endif /* POWER_H_ */

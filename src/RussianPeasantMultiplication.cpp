/*
 * RussianPeasantMultiplication.cpp
 *
 *  Created on: Apr 3, 2016
 *      Author: Mamunul
 */

#include "RussianPeasantMultiplication.h"

namespace src {

RussianPeasantMultiplication::RussianPeasantMultiplication() {
	// TODO Auto-generated constructor stub

}

long RussianPeasantMultiplication::multiply(long x,long y){


	long r = 0;

	while(y>0){


		if(y & 1)
			r +=x;

		x = x << 1;
		y = y >> 1;

	}

	return r;
}

RussianPeasantMultiplication::~RussianPeasantMultiplication() {
	// TODO Auto-generated destructor stub
}

} /* namespace src */

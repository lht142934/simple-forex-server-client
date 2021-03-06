/*
 * indicator_factory.cpp
 *
 *  Description: Factory class to create indicators
 *  Created on: Nov 14, 2012
 *      Author: nirin
 */

#include "indicator_factory.h"
#include "base_indicator.h"
#include "sma.h"

IndicatorFactory::IndicatorFactory() {
	// TODO Auto-generated constructor stub
}

IndicatorFactory::~IndicatorFactory() {
	// TODO Auto-generated destructor stub
}

BaseIndicator* IndicatorFactory::createIndicator(string str){
	if(str == "SMA"){
		return new SMA();
	}
	else
		return new BaseIndicator();
}

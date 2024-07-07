#include "water_bottles.h"

namespace WaterBottles {
	int numWaterBottles(int numBottles, int numExchange) {
		int drinkCnt = numBottles;
		while (numBottles >= numExchange) {
			drinkCnt += numBottles / numExchange;
			numBottles = numBottles / numExchange + numBottles % numExchange;
		}

		return drinkCnt;
	}
}
#include "./geocore.h"

bool is_posn(int n)
{
	if (n > 0) {
		return true;
	} else {
		return false;
	}
}

bool is_posf(float n)
{
	if (n > 0) {
		return true;
	} else {
		return false;
	}
}

bool is_negn(int n)
{
	if (n < 0) {
		return true;
	} else {
		return false;
	}
}

bool is_negf(float n)
{
	if (n < 0) {
		return true;
	} else {
		return false;
	}
}

int expo_n(int n, uint32_t expo)
{
	int pwr = 1;
	while(expo != 0) {
		pwr *= n;
		--expo;
	}
	return pwr;
}

float expo_f(float n, uint32_t expo)
{
	float pwr = 1;
	while(expo != 0) {
		pwr *= n;
		--expo;
	}
	return pwr;
}

float pi()
{
	return 3.14159;
}

double pi_d()
{
	return 3.14159265359;
}
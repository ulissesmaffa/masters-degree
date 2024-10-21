
#include "q_math.h"



int16_t add_16_8_8_0(const int16_t ai, const int8_t bw) {
	uint16_t _a = ai; // Q7.8
	uint16_t _b = bw; // Q0.8

	uint16_t sum = _a + _b;

	if (!((_a ^ _b) & 0x8000) && ((_a ^ sum) & 0x8000)) {
		if (ai >= 0) {
			sum = 0x7FFF;
		}
		else {
			sum = 0x8000;
		}
	}
	return sum;
}





int16_t add_16_8_16_8(const int16_t ax, const int16_t bi) {
	uint16_t _a = ax; // Q7.8
	uint16_t _b = bi; // Q7.8

	uint16_t sum = _a + _b;

	if (!((_a ^ _b) & 0x8000) && ((_a ^ sum) & 0x8000)) {
		if (ax >= 0) {
			sum = 0x7FFF;
		}
		else {
			sum = 0x8000;
		}
	}
	return sum;
}



int16_t add_16_0_16_8(const int16_t ax, const int16_t bi) {
	uint16_t _a = ax; // Q15.0
	uint16_t _b = bi; // Q7.8

	_b += 0x80; // Q7.8 to Q7.0
	_b >>= 8;

	uint16_t sum = _a + _b;

#if 1
	if (!((_a ^ _b) & 0x8000) && ((_a ^ sum) & 0x8000)) {
		if (ax >= 0) {
			sum = 0x7FFF;
		}
		else {
			sum = 0x8000;
		}
	}
#endif
	return sum;
}




int16_t mul_16_8_8_0(const int16_t ai, const int8_t bw)
{
	int16_t A;
	uint16_t D;

	int16_t AC;
	int16_t AD;

	int16_t product_hi;

	A = ai >> 8; // Q7.8
	D = bw & 0xFF;

	AD = A * D;

	if (bw<0) {
		AC = -A;
	}
	else {
		AC = 0;
	}
	product_hi = AC + (AD>>8);

	uint16_t product_lo = AD << 8;
	int16_t result = (product_hi << 8) | (product_lo >> 8);
	
	return result;
}


int16_t macc_16_8_8_0_16_8(const int16_t ai, const int8_t bw, const int16_t ci) {
	int16_t ax;
	ax = mul_16_8_8_0(ai, bw);
	ax = add_16_8_16_8(ax, ci);
	return ax;
}

float macc_16_8_to_float(const int16_t i) {
    float f;

#if (MACC_FRACTIONAL_PRECISION == 0)
    f = (float)i;
#else
    f = i / ((float)MACC_FIX_ONE);
#endif
    return f;

}

float weight_8_0_to_float(const int8_t i) {
    float f;

#if (WEIGHT_FRACTIONAL_PRECISION == 0)
    f = (float)i;
#else
    f = i / ((float)WEIGHT_FIX_ONE);
#endif
    return f;

}


/****************************************************************************
 */
int16_t macc_16_8_from_float(const float a) {
	float temp = a * MACC_FIX_ONE;
	temp += (temp >= 0) ? 0.5f : -0.5f;
	return (int16_t)temp;
}

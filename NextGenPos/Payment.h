#pragma once
#include "GlobleDefine.h"
class Payment
{
public:
	Payment(Money cashTedered) {
		amout = cashTedered;
	}

	Money getAmount() {
		return amout;
	}

private:
	Money amout;
};


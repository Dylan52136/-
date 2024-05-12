#pragma once
#include "Drink.h"
class CFactory
{
public:
	virtual CDrink* MakeMilkTea() = 0;
	virtual CDrink* MakeCoffee() = 0;
};

class CChayanFactory : public CFactory
{
public:
	CDrink* MakeMilkTea() override
	{
		CDrink* pDrink = new CChayanMilkTea;
		return pDrink;
	}
	CDrink* MakeCoffee() override
	{
		CDrink* pDrink = new CChayanCoffee;
		return pDrink;
	}
};

class CMixueFactory : public CFactory
{
public:
	CDrink* MakeMilkTea() override
	{
		CDrink* pDrink = new CMixueMilkTea;
		return pDrink;
	}
	CDrink* MakeCoffee() override
	{
		CDrink* pDrink = new CMixueCoffee;
		return pDrink;
	}
};

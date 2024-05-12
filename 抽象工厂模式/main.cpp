#include "Factory.h"

int main()
{
	CFactory* pChayanFactory = new CChayanFactory;
	CFactory* pMixueFactory = new CMixueFactory;
	CDrink* pDrink = pChayanFactory->MakeMilkTea();
	pDrink->Show();
	pDrink = pMixueFactory->MakeCoffee();
	pDrink->Show();
	system("pause");
}
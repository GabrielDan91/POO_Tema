#pragma once
#include "LoyaltyScheme.h"
ref class CreditCardAccount
{
public:
	void RedeemLoyaltyPoints();
	static CreditCardAccount();
	static int GetNumberOfAccounts();
	

	CreditCardAccount(long number, double limit);
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();


private:
	LoyaltyScheme^ scheme;
	static double interestRate;
	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;

};

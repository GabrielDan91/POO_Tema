#pragma once
#include "BankAccount.h"

ref class CurrentAccount : BankAccount
{
public:
	virtual String^ ToString() override;
	virtual	bool CanDebit(double amount) override;
	CurrentAccount(String^ holder, double limit);
	void ChangeOverdraftLimit(double newLimit);
	double GetOverdraftLimit();

private:
	double overdraftLimit;
};
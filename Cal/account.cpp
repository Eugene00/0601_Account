class Account
{
public:
	explicit Account (int money) : balance_(money)
	{}

	int getBalance() const
	{
		return balance_;
	}

	void deposit(const int money)
	{
		balance_ += money;
	}

	void withdraw(const int money)
	{
		balance_ -= money;
	}

	void setInterest(const int interest)
	{
		interest_ = interest;
	}

	void applyInterest()
	{
		balance_ = calculatePriceWithInterest(balance_);
	}

	int predictPrice(const int years) const
	{
		if (years <= 0)
		{
			return balance_;
		}
		int result = balance_;
		for (int i  = 0; i < years; ++i)
		{
			result = calculatePriceWithInterest(result);
		}
		return result;
	}

	
private:
	int calculatePriceWithInterest(const int money) const
	{
		return money * (100 + interest_) / 100;
	}
	int balance_;
	int interest_ = 0;
};

#include "pch.h"
#include "../Cal/account.cpp"

using namespace std;

class AccountFixture : public ::testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, AccountCreateInit10000won) {
	EXPECT_EQ(account.getBalance(), 10000);
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(account.getBalance(), 10500);
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(account.getBalance(), 9400);
}

TEST_F(AccountFixture, Interrest_5)
{
	account.setInterest(5);
	account.applyInterest();
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, PredictPrice)
{
	int expected = 10000 * 1.1 * 1.1 * 1.1;
	account.setInterest(10);
	EXPECT_EQ(expected, account.predictPrice(3));
}
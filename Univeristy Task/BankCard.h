#pragma once
class BankCard {
	string long_code;
	short password;
	float balance;
	short expired_month;
	short expired_year;

public:
	BankCard() = default;
	BankCard(string Long_code,short Password, float Balance, short Expired_month, short Expired_year){
		long_code = Long_code;
		password = Password;
		balance = Balance;
		expired_month = Expired_month;
		expired_year = Expired_year;
	}
	string getCardLongcode() { return long_code; }
	short getPassword() { return password; }
	float getBalance() { return balance; }
	short getExpiredMonth() { return expired_month; }
	short getExpiredYear() { return expired_year; }
	friend ostream& operator<<(ostream& output, const BankCard& bankcard);
};
ostream& operator<<(ostream& output, const BankCard& bankcard)
{
	cout << "Long code: " << bankcard.long_code << endl;
	cout << "Password: " << bankcard.password << endl;
	cout << "Balance: " << bankcard.balance << endl;
	cout<< "Expired date:" << bankcard.expired_month << "/" << bankcard.expired_year << endl;
	return output;
}
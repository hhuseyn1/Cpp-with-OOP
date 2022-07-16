#pragma once
struct DateTime {
    short day;
    short month;
    short year;
    DateTime() = default;
    DateTime(short day,short month,short year){
        this->day;
        this->month;
        this->year;
    }
};

class Debtor {
    string _fullName;
    DateTime _birthday;
    string _phone;
    string _email;
    string _address;
    int _debt;

public :
    Debtor() = default;
    Debtor(string fullName, DateTime birthDay, string phone, string email, string address, int debt) {
        this->_fullName = fullName;
        this->_birthday = birthDay;
        this->_phone = phone;
        this->_email = email;
        this->_address= address;
        this->_debt= debt;
    }

    string getFullname() const { return _fullName; }
    DateTime getBirthday() const{ return _birthday; }
    string getPhone()const { return _phone; }
    string getEmail() const { return _email; }
    string getAddress() const { return _address; }
    int getDebt() const { return _debt; }


    friend ostream& operator<<(ostream& out, const Debtor& debtor);
};
ostream& operator<<(ostream& output, const Debtor& debtor){
    cout << "Full name: " << debtor._fullName << endl;
    cout << "Birthday: " << debtor._birthday.day << '.' << debtor._birthday.month << '.' << debtor._birthday.year << endl;
    cout << "Phone: " << debtor._phone << endl;
    cout << "Email: " << debtor._email << endl;
    cout << "Address: " << debtor._address << endl;
    cout << "Debt: " << debtor._debt << endl;
    return output;
}
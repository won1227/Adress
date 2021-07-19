#pragma once
#include <iostream>

class Adress
{
private:
	std::string name;
	std::string mail;
	std::string phone_num;
	std::string fax_num;
	std::string memo;
	uint32_t month;
	uint32_t day;

public:
	Adress();

	std::string getName() const;
	void setName(std::string );

	std::string getMail() const;
	void setMail(std::string);

	std::string getPhone_num() const;
	void setPhone_num(std::string);

	std::string getFax_num() const;
	void setFax_num(std::string);

	std::string getMemo() const;
	void setMemo(std::string);

	uint32_t getMonth() const;
	void setMonth(uint32_t);

	uint32_t getDay() const;
	void setDay(uint32_t);

	void showAdress();
	void deleteAdress();
	void searchaddress(std::string search);
	void yourBirhday();
};



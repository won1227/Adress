#include "Adress.h"

Adress::Adress()
{
	this->name = std::string("");
}

std::string Adress::getName() const
{
	return this->name;
}
void Adress::setName(std::string name)
{
	this->name = name;
}

std::string Adress::getMail() const
{
	return this->mail;
}
void Adress::setMail(std::string mail)
{
	this->mail = mail;
}

std::string Adress::getPhone_num() const
{
	return this->phone_num;
}
void Adress::setPhone_num(std::string phone_num)
{
	this->phone_num = phone_num;
}

std::string Adress::getFax_num() const
{
	return this->fax_num;
}
void Adress::setFax_num(std::string fax_num)
{
	this->fax_num = fax_num;
}

std::string Adress::getMemo() const
{
	return this->memo;
}
void Adress::setMemo(std::string memo)
{
	this->memo = memo;
}

uint32_t Adress::getMonth() const
{
	return this->month;
}
void Adress::setMonth(uint32_t month)
{
	this->month = month;
}

uint32_t Adress::getDay() const
{
	return this->day;
}
void Adress::setDay(uint32_t day)
{
	this->day = day;
}

void Adress::showAdress()
{
	std::cout << "이름		:	" << this->name << std::endl << std::endl;
	std::cout << "메일		:	" << this->mail << std::endl << std::endl;
	std::cout << "폰번호		:	" << this->phone_num << std::endl << std::endl;
	std::cout << "팩스번호	:	" << this->fax_num << std::endl << std::endl;
	std::cout << "메모		:	" << this->memo << std::endl << std::endl;

}

void Adress::deleteAdress()
{
	std::string del{" 삭제 "};

	this->name = del;
	this->mail = del;
	this->phone_num = del;
	this->fax_num = del;
	this->memo = del;
}

void Adress::searchaddress(std::string search)
{
	if (getName() == search)
	{
		showAdress();
	}
	else if (getMail() == search)
	{
		showAdress();
	}
	else if (getPhone_num() == search)
	{
		showAdress();
	}
	else if (getFax_num() == search)
	{
		showAdress();
	}
	else if (getMemo() == search)
	{
		showAdress();
	}
}

void Adress::yourBirhday()
{
	time_t wonTime;
	struct tm* TimeInfo;
	wonTime = time(NULL);								// 현재 시간을 받음
	TimeInfo = localtime(&wonTime);						// 현재 시간을 struct tm에 넣음

	int month = TimeInfo->tm_mon + 1;					// 월에는 1 더해줌
	int day = TimeInfo->tm_mday;

	if(getMonth() == month && getDay() == day)			//getMonth : 클래스안에 저장된 생일 월	/	오른쪽 month는 현재 날짜를 받은 월
	{
		std::cout << "\t\t!!!	HBD	  !!!" << std::endl << std::endl;
	}
}


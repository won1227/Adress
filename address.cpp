/*
주소록 만들기 프로젝트 (class AddressBook)

1.이름
2.이메일
3.전화번호
4.팩스번호
5.메모
6.생년월일 검색 시 (#include<ctime>)현재 생일이라면"Happy Birthday"
7.기념일 검색 시 (#include<ctime>) D-XX


---------------------------------------------------------------------------

1.주소록 입력하기
2.주소록 삭제하기
3.검색 ---------> 1.이름, / 2.전화번호 검색?

		ex)생일->생일 축하
			이름,이메일,전화번호,팩스번호,메모 다 보여줌.

동적할당 디폴트 999
*/
#include <iostream>
#include "Adress.h"
#include <ctime>

int main()
{
	uint32_t index{ 0U };
	uint32_t people{ 0U };
	std::cout << "저장할 주소록의 숫자  >> ";
	if (people < 999)
	std::cin >> people;
	Adress* customer{ new Adress[people] };
	/*
	new : HEAP에 메모리를 만들고 그 주소를 리턴	/ delete : 내가 가리키는 주소의 메모리를 해제	
	*/
	for (;;)
	{
		std::cout << "1.주소록 입력 \t 2.주소록 삭제 \t 3.검색 \t\t0. 종료\t\t";
		uint32_t select_menu{ 0U };
		std::cin >> select_menu;
		std::string name{ "" };
		std::string phone_num{ "" };

		if (select_menu == 1)
		{
			std::string name{ "" };
			std::cout << "이름 : \t\t";
			std::cin >> name;
			customer[index].setName(name);

			std::string mail{ "" };
			std::cout << "email : \t";
			std::cin >> mail;
			customer[index].setMail(mail);

			std::string phone_num{ "" };
			std::cout << "전화번호 : \t";
			std::cin >> phone_num;
			customer[index].setPhone_num(phone_num);

			std::string fax_num{ "" };
			std::cout << "팩스번호 : \t";
			std::cin >> fax_num;
			customer[index].setFax_num(fax_num);

			std::string memo{ "" };
			std::cout << "메모 : \t\t";
			std::cin >> memo;
			customer[index].setMemo(memo);

			uint32_t month{ 0U };
			std::cout << "생일 월 : \t";
			std::cin >> month;
			customer[index].setMonth(month);

			uint32_t day{ 0U };
			std::cout << "생일 일 : \t";
			std::cin >> day;
			customer[index].setDay(day);

			std::cout << std::endl;
			++index;
		}

		else if (select_menu == 2)
		{
			std::cout << "삭제할 방식을 입력하시오 \t\t1 -> 이름		 2 -> 폰번호 -  \t" ;
			uint32_t select_num{ 0U };
			std::cin >> select_num;
			if (select_num == 1)
			{
				std::cin >> name;
			}
			else if (select_num == 2)
			{
				std::cin >> phone_num;
			}

			std::cout << std::endl;
			for (uint32_t i = 0; i < people; ++i)
			{
				if (customer[i].getName() == name)
				{
					customer[i].deleteAdress();
				}
				else if (customer[i].getPhone_num() == phone_num)
				{
					customer[i].deleteAdress();
				}
			}
		}

		else if(select_menu == 3)
		{
			std::cout << std::endl;
			std::cout << "검색할 방식을 입력하시오 \t\t1 -> 이름		2 -> 폰번호 -  \t";
			uint32_t select_num{ 0U };
			std::cin >> select_num;
			if (select_num == 1)
			{
				std::cin >> name;
			}
			else if (select_num == 2)
			{
				std::cin >> phone_num;
			}

			std::cout << std::endl;
			for (uint32_t i = 0; i < people; ++i)
			{
				if (customer[i].getName() == name)
				{
					customer[i].searchaddress(name);
					customer[i].yourBirhday();
				}
				else if (customer[i].getPhone_num() == phone_num)
				{
					customer[i].searchaddress(phone_num);
					customer[i].yourBirhday();
				}
			}
		}

		else if (select_menu == 0)
		{
			std::cout << std::endl;
			std::cout << "	종료 됩니다.		" << std::endl;
			break;
		}
		else
		std::cout << "입력 오류" << std::endl << std::endl;

	}
	
	delete[] customer;
}

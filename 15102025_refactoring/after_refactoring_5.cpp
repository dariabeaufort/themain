#include <cmath>
#include <iostream>

int main(int argc, char* argv[]) { 
	int day, month, year;
	std::cout << "Введите дату дня: ";
	std::cin >> day;
	std::cout << "Введите число месяца: ";
	std::cin >> month;
	std::cout << "Введите год: ";
	std::cin >> year;
	
	int century_year = year % 100;
	int century_count = year / 100;
	int week_day = (
		day 
		+ (13 * month - 1) / 5 
		+ century_year / 4 
		+ century_count / 4 
		- 2 * century_count 
		+ 777
	) % 7;
	
	switch (week_day) {
		case 0:
			std::cout << "Воскресенье" << std::endl;
			break;
		case 1:
			std::cout << "Понедельник" << std::endl;
			break;
		case 2:
			std::cout << "Вторник" << std::endl;
			break;
		case 3:
			std::cout << "Среда" << std::endl;
			break;
		case 4:
			std::cout << "Четверг" << std::endl;
			break;
		case 5:
			std::cout << "Пятница" << std::endl;
			break;
		case 6:
			std::cout << "Суббота" << std::endl;
			break;
		default:
			std::cout << "Некорректные данные" << std::endl;
	}

	return 0;
}
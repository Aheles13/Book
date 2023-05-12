#include <iostream>
#include <string>

struct book
{
	std::string title;
	std::string author;
	int year = 0;
	int pages = 0;
	int price = 0;

};


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << "Задача 1.\n";
	book* books = new book[2]{
		{
			"Маленький принц",
			"Антуан де Сент-Экзюпери",
			1943,
			160,
			500
		},
		{
			"Путь пяти колец",
			"Миямото Мусаси",
			1642,
			150,
			200

		},

	};

	std::getline(std::cin, books[0].title);
	delete[] books;
	
	



	return 0;
}
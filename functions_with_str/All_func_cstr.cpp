#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main() {

	/*
	char str1[100] = "hi!" ;
	str1[1] = 'a';
	std::cout << str1 << '\n';

	char name[255];
	std::cin.getline(name, 255);
	std::cout << name << '\n';
	*/

	//определить сколько символов содержит введённый пароль, если меньше 3 , то выдать ошибку
	
	/*
	char password[255];
	std::cout << "enter password\n";
	std::cin.getline(password, 255);

	int lenght = strlen(password);
	if (lenght < 3) {
		std::cout << "password too small\n";
		return 0;
	}

	std::cout << "your password : " << password;
	*/

	// Скопировать строку и изменить её, добавив в конец букву а. вывести изначальную строку и видоизменённую
	
	/*
	char str2[200];
	char str3[200];
	std::cout << "enter string\n";
	std::cin.getline(str2, 200);

	std::cout << "enter how much symbols will be copied\n";
	int n;
	std::cin >> n;

	strcpy(str3, str2);
	strcat(str3, "a");
	std::cout << str3 << '\n';

	strncpy(str3, str2 , n);
	str3[n] = '\0';
	strcat(str3, "a");
	std::cout << str3 << '\n';
	*/

	// Пользователь вводит 2 буквы. мы проверяем какая из них стоит раньше по алфавиту и выводим

	/*
	char str4[10];
	char str5[10];

	std::cout << "enter 2 letters\n";
	std::cin >> str4 >> str5;
	int result = _stricmp(str4, str5);
	if (result >= 0) std::cout << str4;
	else std::cout << str5;
	*/

	// Пользователь вводит строку.Нужно проверить чтобы в ней были 1 буква нижнего регистра, 3 буквы или цифры(в сумме) и не было пробелов.

	/*
	char str6[200];
	std::cout << "enter string\n";
	std::cin.getline(str6, 200);

	bool is_lower = false;
	int counter_n = 0;
	bool is_space = false;
	for (char* c = str6; *c != '\0'; ++c) {
		if (islower(*c)) is_lower = true;
		if (isalnum(*c)) ++counter_n;
		if (isspace(*c)) is_space = true;
	}

	if (is_lower && is_space == false && counter_n >= 3) std::cout << "your string is allowed\n";
	else std::cout << "your string is not allowed\n";
	*/

	// Пользователь вводит строку. все символы нижнего регистра заменить на верхний и наоборот.

    /*
	char str7[200];
	std::cout << "enter string\n";
	std::cin.getline(str7, 200);

	char* current_symbol = str7;
	while (*current_symbol != '\0') {
		if (isupper(*current_symbol)) *current_symbol = tolower(*current_symbol);
		else if (islower(*current_symbol)) *current_symbol = toupper(*current_symbol);
		++current_symbol;
	}

	std::cout << str7;
	*/

	//Пользователь вводит строку и символ. мы проверяем есть ли этот символ в строке и если есть, то оставшуюся часть строки выводит

    /*
    char str8[200];
	std::cout << "enter string\n";
	std::cin.getline(str8, 200);

	char symbol;
	std::cout << "enter symbol\n";
	std::cin >> symbol;

	char* ptr_s = strchr(str8, symbol);
	if (ptr_s == nullptr) std::cout << "in this string that symbol doesnt exist\n";
	else std::cout << "this symbol in " << ptr_s - str8 + 1 << " position. str: " << ptr_s + 1;
	*/

    //Пользователь вводит строку. мы печатаем её размер до первого разделителя(разделители .,!? )

    /*
    char str9[200];
	std::cout << "enter string\n";
	std::cin.getline(str9, 200);

	char delimeters[10] = ".,?! ";

	if (strcspn(str9, delimeters) != 0) {
		std::cout << "size forward delimeter : " << strcspn(str9, delimeters);
	}
	else std::cout << "string start from delimeter and he have " << strspn(str9,delimeters) << " delimeters in start\n";
	*/

    //Пользователь вводит строку. мы печатаем её после первого разделителя(разделители .,!? )

    /*
	char str10[200];
	std::cout << "enter string\n";
	std::cin.getline(str10, 200);

	char delimeters[10] = ".,?! ";

	char* first_del = strpbrk(str10, delimeters);
	if (first_del == nullptr)	std::cout << "in this string  delimeters does not exist\n";
	else std::cout << first_del + 1;
	*/

	//
}
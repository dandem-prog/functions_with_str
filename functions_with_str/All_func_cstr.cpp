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

	char str6[200];
	std::cout << "enter string\n";
	std::cin.getline(str6, 200);





}
#include "header.hpp"
std::string createPassword()
{
	std::cout << "Enter password: ";
	std::string passWord{};
	std::cin >> passWord;
	return passWord;
}
bool length(std::string passWord)
{
	constexpr int minLength{ 8 };
	if (passWord.length() >= minLength)
		return true;
	else
		return false;
}
bool upper(std::string passWord)
{
	if (std::isupper(passWord[0]))
		return true;
	else
		return false;
}
bool lower(std::string passWord)
{
	if (std::islower(passWord[1]))
		return true;
	else
		return false;
}
bool number(std::string passWord)
{
	if (std::isalnum(passWord[2]))
		return true;
	else
		return false;
}
bool specialCharacter(std::string passWord)
{
	if (std::ispunct(passWord[6]))
		return true;
	else
		return false;
}

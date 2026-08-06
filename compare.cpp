#include "header.hpp"

void comparison(std::string passWord)
{

	if (length(passWord) && upper(passWord) && lower(passWord) && number(passWord) && specialCharacter(passWord))
		std::cout << "Password is strong. ";
	else if (length(passWord) && upper(passWord) && lower(passWord) && number(passWord) && !specialCharacter(passWord))
		std::cout << "Password is medium. ";
	else
		std::cout << "Password is weak.";
	
}
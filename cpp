#include <iostream>
#include <string>
// this is a c++ input 
int main()
{
	/*int x = 0;
	std::cout << "How old are You?";
	std::cin >> x;
	std::cout << "You are " << x << "Years old";
	return 1; */

	//this is a c++ input calculator
	/*int x, y, sum;
	x = y = sum = 0;
	std::cout << "Type a number";
	std::cin >> x;
	std::cout << "type another number";
	std::cin >> y;
	sum = x + y;
	std::cout << "sum is" << sum; 
	return sum;*/

	// float variable can only accept 6 digits while the double variable can accept 15 digits 

	// Declare mutiple variables 
	/*int x = 10, y = 2, z = 12;
	std::cout << x + y + z;
	return 2; */

	// One valuable to multiple valuable, so here we use one value to define multiple variables 
	/*int x, y, z;
	x = y = z = 50; 
	std::cout << x + y + z;
	return 1;*/

	// Identifiers: using minutesPerhour makes it´more understandable for the reader to understand what the code is talking about. 
	/*int minutePerhour = 60; 
	std::cout << minutePerhour << "\n";
	return 0;*/

	// Using the small m might be easy to understand what it actually stands for. 
	/*int m = 60;
	std::cout << m << "\n";
	return 1;*/

	// Constants helps to avoid a change in a variable, so we write the const in front of int to declare our variable as constant
	/*const int minutePerhour = 60;
	std::cout << minutePerhour << "\n";*/

	// In this case below, minuteperhour is not actually 100 but 60, but not to allow this mistake we use a c++ variable called const 
	/*int minutePerhour = 100; 
	std::cout << minutePerhour << "\n";*/

	/*int x, y, sum;
	x = y = sum = 0; */

	// c++ input 
	/*int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cout << "You are " << age << "years old";
	return  0;*/

	// Welcome to Hello World! 
	/*std::cout << " hello World! \n";
	std::cout << "i am 17 years old";
	return 0;
*/
	// Taking multiple inputs
	/*int first, second;
	std::cout << "Enter two numbers \n";
	std::cin >> first >> second;
	std::cout << "first number:" << first;
	std::cout << "second number" << second;
	return 0;*/

	// c++ concatenation 
	/*std::string firstname = "Precious ";
	std::string Lastname = "Adewuyi";
	std::cout <<firstname + Lastname;
	return 0;*/

	// c++ Numbers and strings 
	/*int x = 10;
	int y = 40;
	std::cout<< x + y;
	return 0;*/ 

	//c++ string lenght, it can be any variable infront of string. And it can be in size() or lenght()
	/*std::string num = "1234567890";
	std::cout << num.length();
	return 0;*/

	// C++ Access String. I use the symbol [] to change a letter to a capital or small. 
	/*std::string check = "Hi how are you";
	check[3] = 'H';
	std::cout << check;
	return 0;*/

	//
	std::string who = "";
	std::cout << "what is your name?";
	std::getline(std::cin, who);
	std::cout << "hello" + who;
	return 0; 









	


}

	

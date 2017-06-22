//This will be my first shitty github code

#include <iostream>
#include <string>
#include <iomanip>



int main()
	{
	char quit = 'n';
	while (quit == 'n')
		{
		int burger_choice;
		int drink_choice;
		char Answer; 
		std::cout << "Welcome to Burger King, Please select what you want to eat\n";
		std::cout << "Please select a burger \n1)Hamburger \n2)Cheeseburger \n3)BaconBurger\n";
		std::cin >> burger_choice;
		if (burger_choice == 1)
			std::cout << "You have selected a Hamburger.\n";
		if (burger_choice == 2)
			std::cout << "You have selected a Cheeseburger.\n";
		if (burger_choice == 3)
			std::cout << "You have selected a Baconburger.\n";
		else std::cout << "Incorrect value selected\n";
			  std::cout << "Please select either '1, 2, or 3'\n";
		return 0;	
		
		}
		std::cin >> quit;
		
		
	}

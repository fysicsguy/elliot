//This will be my first shitty github code

#include <string>
#include <iomanip>



int main()
	{
	char quit = 'y';
	while(quit == 'y')
		{
		int burger_choice;
		int drink_choice;
		char Answer; 
		std::cout << "Welcome to Burger King, Please select what you want to eat\nIf you wish to quit, type 'quit'.\n";
		std::cout << "Please select a burger \n1)Hamburger \n2)Cheeseburger \n3)BaconBurger\n";
		std::cin >> burger_choice;
		if (burger_choice == 1){
			//std::cout << "You have selected a Hamburger.\n Would you like anything else? (Y/N)";
				//std::cin >> Answer;
				//if(Answer == "Y")
					//std::cout << "What else would you like?";
			
		}
		if (burger_choice == 2);
			std::cout << "You have selected a Cheeseburger.\n";
		if (burger_choice == 3)
			std::cout << "You have selected a Baconburger.\n";
		else {std::cout << "Incorrect value selected\n";
			  std::cout << "Please select either '1, 2, or 3'\n";
			}
		}
		
		std::cin >> quit;
		return 0;
		
		
	}

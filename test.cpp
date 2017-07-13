#include <iostream>
#include <string>
#include <iomanip>



int burger_choice;
int drink_choice;
float burger_price;
float drink_price;
float price;
float tax;
float total;

int main()
	{
	char choice;
	bool run = true;
	
	
	std::cout << "Welcome to Burger King, Please select what you want to eat\n";
	while(run)
	 {
	
		
		std::cout << "Please select a burger \n1)Hamburger			$2.00 \n2)Cheeseburger			$2.50 \n3)BaconBurger			$2.50\n";
		std::cin >> burger_choice;
		
		if (std::cin.fail()){					
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cout << "Please Select a Valid Option.\n";
		}
					
		
		if (burger_choice == 1){
			std::cout << "You have selected a Hamburger.\n";
			burger_price = 2.00;}
		else if (burger_choice == 2){
			std::cout << "You have selected a Cheeseburger.\n";	
			burger_price = 2.50;}	
		else if (burger_choice == 3){
			std::cout << "You have selected a Baconburger.\n";
			burger_price = 2.50;}
		else {continue;}
			
			
			
			
						
			
		std::cout << "Please select a drink \n1)Sprite			$1.00 \n2)Coke			$1.00 \n3)Tequila			$3.00\n";	
		std::cin >> drink_choice;
		
		if (std::cin.fail()){					
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cout << "Invalid Selection.\n";
			
		}
		
		while (drink_choice != 1 and drink_choice != 2 and drink_choice != 3 or drink_choice == 0 ){
		std::cout << "Please select a valid option.\n";
		std::cout << "Please select a drink /n1)Sprite			$1.00 \n2)Coke			$1.00 \n3)Tequila			$3.00\n";	
		std::cin.clear();
		if(!(std::cin >> drink_choice)){
			std::cin.clear();
			std::cin.ignore(10, '\n');}}
		
			
		
		
		
		if (drink_choice == 1){
			std::cout << "You have selected a Sprite.\n";
			drink_price = 1.00;}
		else if (drink_choice == 2){
			std::cout << "You have selected a Coke.\n";
			drink_price = 1.00;}
		else if (drink_choice == 3){
			std::cout << "You have selected Tequila.\n";
			drink_price = 3.00;}
		else {continue;	
			 }
			 
			
			 
			price = burger_price + drink_price; 
			tax = price * 0.08;					
			total = price + tax;				
		std::cout << "Your total comes to $" << total <<"\n";
		std::cout << "Thank you \nHave a nice Day\n";	
		std::cout << "Next customer? (Y/N)\n";
		std::cin >> choice;
		if(choice =='N'||choice =='n'){
            run = false;
		
	}
	}	
			return 0;	
		
		
		
}		
	

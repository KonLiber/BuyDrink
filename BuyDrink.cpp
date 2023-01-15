#include <iostream>
class 
int main(){
	std::cout<<"Welcome to the buy a drink or leave the store game.\n";
	std::cout<<"Enter the name of your character:\n";
	std::string characterName;
	std::cin>>characterName;
	std::cout<<"Are you sure "<<characterName<<" is the name of your character?\n";
	std::cout<<"Press 1 for 'YES' or 0 for 'NO'.\n";
	int x;
	std::cin>>x;
	if (x==1){
	    std::cout<<"Your name is now "<<characterName<<".\n";
		std::cout<<"You enter a mini market store and the cashier greets you.\n";
		std::cout<<"Cashier: Hello "<<characterName<<". It's been some time since I last saw you. Would you like to buy a drink?\n";
		std::cout<<"Press 1 for 'YES' or 0 for 'NO'.\n";
		int y;
		std::cin>>y;
		if (y==1){
		std::cout<<"Cashier: which drink would you like to buy?\n";
		std::cout<<"Press a number from 1 to 5 to select your drink.\n";
		std::cout<<"Available drinks:\n";
		std::cout<<"1.Coca Cola\n";
		std::cout<<"2.Soda\n";
		std::cout<<"3.Energy drink\n";
		std::cout<<"4.Juice\n";
		std::cout<<"5.Tea\n";
		int z;
		std::cin>>z;
		switch(z){
		    case(1):
		    	std::cout<<"You selected a Coca Cola.";
		    	std::cout<<"Do you want to pay for the drink?\n"
		    	break;
		    case(2):
		    	std::cout<<"You selected a Soda.";
		    	break;
		   	case(3):
		    	std::cout<<"You selected a Energy drink.";
		    	break;
		   	case(4):
		    	std::cout<<"You selected a Juice.";
		    	break;
		    case(5):
		    	std::cout<<"You selected a Tea.";
		    	break;
		    default:
		    	std::cout<<"You didn't select a drink.";
		    }
	}
		else if(y==0)
		std::cout<<"You said no and left the store.";
		else
		    std::cout<<"You didn't press 1 or 0.";
		}
	else if(x==0)
        std::cout<<"Your name is something different.\n";
	else
	    std::cout<<"You didn't press 1 or 0.";
	return 0;
	
	
}
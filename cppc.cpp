#include <iostream>
#include <string>
#include <math.h>

class outputCL{
public:

	void asciiPrint(){
		std::cout << std::endl << " ▟██▖▐▙█▙ ▐▙█▙ ▟██▖\n";
		std::cout << "▐▛ ▘ ▐▛ ▜▌▐▛ ▜▌▐▛ ▘\n";
		std::cout << "▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌\n";
		std::cout << "▝█▄▄▌▐█▄█▘▐█▄█▘▝█▄▄▌\n";
		std::cout << " ▝▀▀ ▐▌▀▘ ▐▌▀▘  ▝▀▀\n";
		std::cout << "     ▐▌   ▐▌\n" << std::endl << std::endl;
	}

	void cppcMenu(){
		std::cout << "Please select the task you desire\n";
		std::cout << "a - addition\n";
		std::cout << "s - subtraction\n";
		std::cout << "m - multiplication\n";
		std::cout << "d - division\n";
		std::cout << "r - square root\n";
		std::cout << "v - print version info\n";
		std::cout << "i - print extended info\n";
		std::cout << "q - quit the program\n";
		std::cout << "~--------------------~" << std::endl;
	}

	void proInfo(){
		std::cout << std::endl << "cppc is a CLI calculator written entirely in C++\n";
		std::cout << "for the purpose of being run on any *nix OS.\n" << std::endl;
		std::cout << "Current cppc version is 0.1.8.\n" << std::endl;
		std::cout << "Functionality at the moment is limited; only\n";
		std::cout << "addition, subtraction, multiplication,\n";
		std::cout << "division, and square root work presently.\n" << std::endl << std::endl;
	}

	void squRt(){
		std::cout << std::endl << "Please enter the number you wish to be squared: \n";
	}

	void invalCmd(){
		std::cout << std::endl << "Unrecognized command. \n" << std::endl << std::endl;
	}
}; // end class

int main()
{

	std::string proName, proVer, operIn;
	int input1, input2, result;

	proName = "cppc";
	proVer = "0.1.8";
	outputCL funCL;

	
	do{
		funCL.cppcMenu();
		std::cin >> operIn;
		
		if (operIn == "a")
		{
			std::cout << std::endl << "Please enter your first number: \n";
			std::cin >> input1;
			std::cout << std::endl << "Please enter your second number: \n";
			std::cin >> input2;

			result = input1 + input2;
			std::cout << std::endl << "Your sum is " << result << ".\n" << std::endl;

		}

		else if (operIn == "s")
		{
			std::cout << std::endl << "Please enter the number to be subtracted from: \n";
			std::cin >> input1;
			std::cout << std::endl << "Please enter the number you are subtracting: \n";
			std::cin >> input2;

			result = input1 - input2;
			std::cout << std::endl << "The difference is " << result << ".\n" << std::endl;
		}

		else if (operIn == "m")
		{
			std::cout << std::endl << "Please enter your first factor: \n";
			std::cin >> input1;
			std::cout << std::endl << "Please enter your second factor: \n";
			std::cin >> input2;

			result = input1 * input2;
			std::cout << std::endl << "The product is " << result << ".\n" << std::endl;
		}

		else if (operIn == "d")
		{
			std::cout << std::endl << "Please enter the dividend: \n";
			std::cin >> input1;
			std::cout << std::endl << "Please enter the divisor: \n";
			std::cin >> input2;

			result = input1 / input2;
			std::cout << std::endl << "The quotient is " << result << ".\n" << std::endl;
		}

		else if (operIn == "v")
		{
			funCL.asciiPrint();
			std::cout << std::endl << " " << proName << " " << proVer << "\n" << std::endl;
		}

		else if (operIn == "i")
		{
			funCL.proInfo();
		}

		else if (operIn == "r")
		{
			funCL.squRt();
			std::cin >> input1;
			result = sqrt(input1);
			std::cout << "" << input1 << " squared is " << result << ".\n";
		}

		else if (operIn == "q")
		{
		        std::cout << "exiting cppc..." << std::endl;
			//break;
		}

		else
		{
			funCL.invalCmd();
		}

		
	} while (operIn != "q");

}

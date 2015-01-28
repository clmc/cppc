#include <iostream>
#include <string>
#include <cmath>

using std::cout; using std::cin;

class outputClass{
public:

	void asciiPrint(){
		cout << "\n ▟██▖▐▙█▙ ▐▙█▙ ▟██▖\n";
		cout << "▐▛  ▘▐▛ ▜▌▐▛ ▜▌▐▛ ▘\n";
		cout << "▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌\n";
		cout << "▝█▄▄▌▐█▄█▘▐█▄█▘▝█▄▄▌\n";
		cout << " ▝▀▀ ▐▌▀▘ ▐▌▀▘  ▝▀▀\n";
		cout << "     ▐▌   ▐▌\n\n\n";
	}

	void cppcMenu(){
		cout << "Please select the task you desire\n";
		cout << "a - addition\n";
		cout << "s - subtraction\n";
		cout << "m - multiplication\n";
		cout << "d - division\n";
		cout << "r - square root\n";
		cout << "u - square number\n";
		cout << "c - cube number\n";
		cout << "p - multiply by power\n";
		cout << "e - find specific percent\n";
		cout << "v - print version info\n";
		cout << "i - print extended info\n";
		cout << "q - quit the program\n";
		cout << "~--------------------~\n";
	}

	void programInfo(){
		cout << "\ncppc is a CLI calculator written entirely in C++\n";
		cout << "for the purpose of being run on any *nix OS.\n\n";
		cout << "Current cppc version is 0.4.\n\n";
		cout << "Current functionality includes addition\n";
		cout << "subtraction, multiplication, divison, square,\n";
		cout << "square root, power, and cube.\n\n\n";
	}

	void squareRoot(){
		cout << "\nPlease enter the squared number to find it's root: ";
	}

	void squareNum(){
	    	cout << "\nPlease enter the number to be squared: ";
	}

        void cubeNum(){
		cout << "\nPlease enter the number to be cubed: "; 
	}

	void powerNum(){
		cout << "\nPlease enter the number you wish to multiply: ";
	}

	void percentNum(){
	    	cout << "\nPlease enter the number you would like a percentage of: ";
	}

	void invalidCommand(){
		cout << "\nUnrecognized command. \n\n\n";
	}

	void welcomeScreen(){
		cout << "\nWelcome to cppc - the simple, lightweight C++ calculator\n\n";
	}
	
}; // end class

int main()
{

    	std::string programName, programVer, operation_Input;
	int input1, input2, powerInput, result;

	programName = "cppc";
	programVer = "0.4"; 
	outputClass funClass;

	funClass.welcomeScreen();

	do{
		funClass.cppcMenu();
		cin >> operation_Input;

		if (operation_Input == "a") // Addition option
		{
			cout << "\nPlease enter your first number: ";
			cin >> input1;
			cout << "Please enter your second number: ";
			cin >> input2;

			result = input1 + input2;
			cout << "\nYour sum is " << result << ".\n\n\n";

		}

		else if (operation_Input == "s") // Subtraction option
		{
			cout << "\nPlease enter the number to be subtracted from: ";
			cin >> input1;
			cout << "Please enter the number you are subtracting: ";
			cin >> input2;

			result = input1 - input2;
			cout << "\nThe difference is " << result << ".\n\n\n";
		}

		else if (operation_Input == "m") // Multiplication option
		{
			cout << "\nPlease enter your first factor: ";
			cin >> input1;
			cout << "Please enter your second factor: ";
			cin >> input2;

			result = input1 * input2;
			cout << "\nThe product is " << result << ".\n\n\n";
		}

		else if (operation_Input == "d") // Division option
		{
			cout << "\nPlease enter the dividend: ";
			cin >> input1;
			cout << "Please enter the divisor: ";
			cin >> input2;

			result = input1 / input2;
			cout << "\nThe quotient is " << result << ".\n\n\n";
		}

		else if (operation_Input == "v") // Print version info option
		{
			funClass.asciiPrint();
			cout << "\n      " << programName << " " << programVer << "\n\n\n";
		}

		else if (operation_Input == "i") // Print extended info option
		{
			funClass.programInfo();
		}

		else if (operation_Input == "r") // Square root option
		{
			funClass.squareRoot();
			cin >> input1;
			result = sqrt(input1);
			cout << "\nThe square root of " << input1 << " is " << result << ".\n\n\n";
		}

		else if (operation_Input == "c") // Cube number option
		{
		        funClass.cubeNum();
			cin >> input1;
			result = (pow(input1, 3));
			cout << "\nThe cube of " << input1 << " is " << result << ".\n\n\n";
		}

		else if (operation_Input == "u") // Square number option
		{
		    	funClass.squareNum();
			cin >> input1;
			result = input1 * input1;
			cout << "\n" << input1 << " squared is " << result << ".\n\n\n";
		}

		else if (operation_Input == "p") // Power option
		{
		    	funClass.powerNum();
			cin >> input1;
			cout << "By what power?: ";
			cin >> powerInput;
			result = (pow(input1, powerInput));
			cout << "\n" << input1 << " to the power of " << powerInput << " is " << result << "\n\n\n";
		}

		else if (operation_Input == "e") // Percentage option
		{
		    	funClass.percentNum();
			cin >> input1;
			cout << "Please enter the percentage you would like: ";
			cin >> input2;
			result = input1 * input2 / 100;
			cout << "\n" << input2<< "% of " <<input1<< " is " << result << "\n\n\n";
		}

		else if (operation_Input == "q") // Quit the program
		{
			cout << "Exiting cppc.\n";
		}

		else
		{
			funClass.invalidCommand(); // If there is an invalid entry, tell user 
		}

	} while (operation_Input != "q");

}

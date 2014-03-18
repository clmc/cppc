#include <iostream>
#include <string>
#include <cmath>

using std::cout; using std::cin;
using std::endl; using std::string;

class outputClass{
public:

	void asciiPrint(){
		cout << endl << " ▟██▖▐▙█▙ ▐▙█▙ ▟██▖\n";
		cout << "▐▛  ▘▐▛ ▜▌▐▛ ▜▌▐▛ ▘\n";
		cout << "▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌\n";
		cout << "▝█▄▄▌▐█▄█▘▐█▄█▘▝█▄▄▌\n";
		cout << " ▝▀▀ ▐▌▀▘ ▐▌▀▘  ▝▀▀\n";
		cout << "     ▐▌   ▐▌\n" << endl << endl;
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
		cout << "v - print version info\n";
		cout << "i - print extended info\n";
		cout << "q - quit the program\n";
		cout << "~--------------------~" << endl;
	}

	void programInfo(){
		cout << endl << "cppc is a CLI calculator written entirely in C++\n";
		cout << "for the purpose of being run on any *nix OS.\n\n";
		cout << "Current cppc version is 0.3.9.\n\n";
		cout << "Current functionality includes addition\n";
		cout << "subtraction, multiplication, divison, square,\n";
		cout << "square root, and cube.\n\n\n";
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

	void invalidCommand(){
		cout << "\nUnrecognized command. \n\n\n";
	}
	
}; // end class

int main()
{

	string programName, programVer, operation_Input;
	int input1, input2, result;

	programName = "cppc";
	programVer = "0.3.9"; 
	outputClass funClass;


	do{
		funClass.cppcMenu();
		cin >> operation_Input;

		if (operation_Input == "a") // Addition option
		{
			cout << endl << "Please enter your first number: ";
			cin >> input1;
			cout << "Please enter your second number: ";
			cin >> input2;

			result = input1 + input2;
			cout << endl << "Your sum is " << result << ".\n\n\n";

		}

		else if (operation_Input == "s") // Subtraction option
		{
			cout << endl << "Please enter the number to be subtracted from: ";
			cin >> input1;
			cout << "Please enter the number you are subtracting: ";
			cin >> input2;

			result = input1 - input2;
			cout << endl << "The difference is " << result << ".\n\n\n";
		}

		else if (operation_Input == "m") // Multiplication option
		{
			cout << endl << "Please enter your first factor: ";
			cin >> input1;
			cout << "Please enter your second factor: ";
			cin >> input2;

			result = input1 * input2;
			cout << endl << "The product is " << result << ".\n\n\n";
		}

		else if (operation_Input == "d") // Division option
		{
			cout << endl << "Please enter the dividend: ";
			cin >> input1;
			cout << "Please enter the divisor: ";
			cin >> input2;

			result = input1 / input2;
			cout << endl << "The quotient is " << result << ".\n\n\n";
		}

		else if (operation_Input == "v") // Print version info option
		{
			funClass.asciiPrint();
			cout << endl << "      " << programName << " " << programVer << "\n\n";
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
			cout << "\nThe square root of " << input1 << " is " << result << ".\n\n";
		}

		else if (operation_Input == "c") // Cube number option
		{
		        funClass.cubeNum();
			cin >> input1;
			input2 = (pow(input1, 3));
			cout << "\nThe cube of " << input1 << " is " << input2 << ".\n\n";
		}

		else if (operation_Input == "u") // Square number option
		{
		    	funClass.squareNum();
			cin >> input1;
			result = input1 * input1;
			cout << "\n" << input1 << " squared is " << result << ".\n\n";
		}
		else if (operation_Input == "q") // Quit the program
		{
			cout << "Exiting cppc." << endl;
		}

		else
		{
			funClass.invalidCommand(); // if there is an invalid entry, tell user 
		}


	} while (operation_Input != "q");

}

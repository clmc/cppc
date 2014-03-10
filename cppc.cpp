#include <iostream>
#include <string>
#include <cmath>

using namespace std;

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

	void proInfo(){
		cout << endl << "cppc is a CLI calculator written entirely in C++\n";
		cout << "for the purpose of being run on any *nix OS.\n\n";
		cout << "Current cppc version is 0.3.\n\n";
		cout << "Current functionality includes addition\n";
		cout << "subtraction, multiplication, divison, square,\n";
		cout << "square root, and cube.\n\n\n";
	}

	void squRt(){
		cout << endl << "Please enter the squared number to find it's root: \n";
	}

	void squareNum(){
	    	cout << endl << "Please enter the number to be squared: \n";
	}

	void invalCmd(){
		cout << endl << "Unrecognized command. \n\n\n";
	}
}; // end class

int main()
{

	string proName, proVer, operIn;
	int input1, input2, result;

	proName = "cppc";
	proVer = "0.3"; 
	outputClass funClass;


	do{
		funClass.cppcMenu();
		cin >> operIn;

		if (operIn == "a") // Addition option
		{
			cout << endl << "Please enter your first number: ";
			cin >> input1;
			cout << "Please enter your second number: ";
			cin >> input2;

			result = input1 + input2;
			cout << endl << "Your sum is " << result << ".\n\n\n";

		}

		else if (operIn == "s") // Subtraction option
		{
			cout << endl << "Please enter the number to be subtracted from: ";
			cin >> input1;
			cout << "Please enter the number you are subtracting: ";
			cin >> input2;

			result = input1 - input2;
			cout << endl << "The difference is " << result << ".\n\n\n";
		}

		else if (operIn == "m") // Multiplication option
		{
			cout << endl << "Please enter your first factor: ";
			cin >> input1;
			cout << "Please enter your second factor: ";
			cin >> input2;

			result = input1 * input2;
			cout << endl << "The product is " << result << ".\n\n\n";
		}

		else if (operIn == "d") // Division option
		{
			cout << endl << "Please enter the dividend: ";
			cin >> input1;
			cout << "Please enter the divisor: ";
			cin >> input2;

			result = input1 / input2;
			cout << endl << "The quotient is " << result << ".\n\n\n";
		}

		else if (operIn == "v") // Print version info option
		{
			funClass.asciiPrint();
			cout << endl << "      " << proName << " " << proVer << "\n\n";
		}

		else if (operIn == "i") // Print extended info option
		{
			funClass.proInfo();
		}

		else if (operIn == "r") // Square root option
		{
			funClass.squRt();
			cin >> input1;
			result = sqrt(input1);
			cout << "\nThe square root of " << input1 << " is " << result << ".\n\n";
		}

		else if (operIn == "c") // Cube number option
		{
			cout << "\nEnter number you wish to be cubed: ";
			cin >> input1;
			input2 = (pow(input1, 3));
			cout << "\nThe cube of " << input1 << " is " << input2 << ".\n\n";
		}

		else if (operIn == "u") // Square number option
		{
		    	funClass.squareNum();
			cin >> input1;
			result = input1 * input1;
			cout << "\n" << input1 << " squared is " << result << ".\n\n";
		}
		else if (operIn == "q") // Quit the program
		{
			cout << "exiting cppc..." << endl;
			//break;
		}

		else
		{
			funClass.invalCmd();
		}


	} while (operIn != "q");

}

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class outputCL{
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
		cout << "c - cube number\n";
		cout << "v - print version info\n";
		cout << "i - print extended info\n";
		cout << "q - quit the program\n";
		cout << "~--------------------~" << endl;
	}

	void proInfo(){
		cout << endl << "cppc is a CLI calculator written entirely in C++\n";
		cout << "for the purpose of being run on any *nix OS.\n\n";
		cout << "Current cppc version is 0.2.\n\n";
		cout << "Functionality at the moment is limited; only\n";
		cout << "addition, subtraction, multiplication,\n";
		cout << "division, and square root work presently.\n\n\n";
	}

	void squRt(){
		cout << endl << "Please enter the number you wish to be squared: \n";
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
	proVer = "0.2"; 
	outputCL funCL;


	do{
		funCL.cppcMenu();
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
			funCL.asciiPrint();
			cout << endl << " " << proName << " " << proVer << "\n\n";
		}

		else if (operIn == "i") // Print extended info option
		{
			funCL.proInfo();
		}

		else if (operIn == "r") // Square root option
		{
			funCL.squRt();
			cin >> input1;
			result = sqrt(input1);
			cout << "" << input1 << " squared is " << result << ".\n\n";
		}

		else if (operIn == "c") // Cube number option
		{
			cout << "\nEnter number you wish to be cubed: ";
			cin >> input1;
			input2 = (pow(input1, 3));
			cout << "\nThe cube of " << input1 << " is " << input2 << ".\n\n";
		}

		else if (operIn == "q")
		{
			cout << "exiting cppc..." << endl;
			//break;
		}

		else
		{
			funCL.invalCmd();
		}


	} while (operIn != "q");

}

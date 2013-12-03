#include <iostream>
#include <math.h>

using namespace std;

/* functions are below,
   not necessarily for
   optimization but
   instead for the
   purpose of learning
*/

class outputCL{
    public:

void asciiPrint(){
	cout << endl << " ▟██▖▐▙█▙ ▐▙█▙  ▟██▖\n";
	cout << "▐▛  ▘▐▛ ▜▌▐▛ ▜▌▐▛  ▘\n";
	cout << "▐▌   ▐▌ ▐▌▐▌ ▐▌▐▌\n";
	cout << "▝█▄▄▌▐█▄█▘▐█▄█▘▝█▄▄▌\n";
	cout << " ▝▀▀ ▐▌▀▘ ▐▌▀▘  ▝▀▀\n";
	cout << "     ▐▌   ▐▌\n" << endl  << endl;
}

void cppcMenu(){
	cout << "Please select the task you desire\n";
	cout << "a - addition\n";
	cout << "s - subtraction\n";
	cout << "m - multiplication\n";
	cout << "d - division\n";
	cout << "r - square root\n";
	cout << "v - print version info\n";
	cout << "i - print extended info\n";
	cout << "q - quit the program\n";
	cout << "~--------------------~" << endl;
}

void proInfo(){
	cout << endl << endl << "cppc is a CLI calculator written entirely in C++\n";
	cout << "for the purpose of being run on any *nix OS.\n" << endl;
	cout << "Current cppc version is 0.1.3.\n" << endl;
	cout << "Functionality at the moment is limited; only\n";
	cout << "addition, subtraction, multiplication, and\n";
	cout << "division work presently.\n" << endl << endl;
}

void squRt(){
	cout << "Please enter the number you wish to be squared: \n";
}

void invalCmd(){
    cout << "Unrecognized command. \n" << endl << endl;
}
}; // end class

int main()
{

	string proName, proVer;
	char operIn;
	int input1, input2, result;

	proName = "cppc";
	proVer = "0.1.3";
	outputCL funCL;

	cout << "Welcome to "<< proName <<"!" << endl;
	for (int i = 0; i < 1;)
	{
	    
		funCL.cppcMenu();
//		cout << "..:\n";
		cin >> operIn;

// bracket was closed here !!

	if (operIn == 'a')
	{
		cout << endl << "Please enter your first number: \n";
		cin >> input1;
		cout << endl << "Please enter your second number: \n";
		cin >> input2;

		result = input1 + input2;
		cout << endl << "Your sum is "<< result <<".\n" << endl;	
	}

	else if (operIn == 's')
	{
		cout << endl << "Please enter the number to be subtracted from: \n";
		cin >> input1;
		cout << endl << "Please enter the number you are subtracting: \n";
		cin >> input2;

		result = input1 - input2;
		cout << endl << "The difference is "<< result <<".\n" << endl;	
	}

	else if (operIn == 'm')
	{
		cout << endl << "Please enter your first factor: \n";
		cin >> input1;
		cout << endl << "Please enter your second factor: \n";
		cin >> input2;

		result = input1 * input2;
		cout << endl << "The product is "<< result <<".\n" << endl;
	}

	else if (operIn == 'd')
	{
		cout << endl << "Please enter the dividend: \n";
		cin >> input1;
		cout << endl << "Please enter the divisor: \n";
		cin >> input2;

		result = input1 / input2;
		cout << endl << "The quotient is "<< result <<".\n" << endl;
	}

	else if (operIn == 'v')
	{
		funCL.asciiPrint();
		cout << endl << "    "<< proName <<" "<< proVer <<"\n" << endl;
	}

	else if (operIn == 'i')
	{
		funCL.proInfo();
	}

	else if (operIn == 'r')
	{
		funCL.squRt();
		cin >> input1;
		result = sqrt (input1) ;
		cout << ""<< input1 <<" squared is "<< result <<".\n";
	}

	else if (operIn == 'q')
	{
		break;
	}

	else 
	{
		funCL.invalCmd();
	}

	}// moved to here !!
}

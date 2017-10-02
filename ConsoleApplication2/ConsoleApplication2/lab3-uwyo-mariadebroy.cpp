//Lab03
//Maria Debroy
//COSC II

#include<iostream>
using namespace std;

//Function Prototypes
float multiplication_float(long input);
double multiplication_double(long input);
float strange_float(float input);
double strange_double(double input);


int main()
{
	// The following repeatedly reads and computes the sum of the consecutive integers 1 through n and the data type for all the variables is short. 
	short number_one = 0;
	short sum_one = 0;
	cout << "Enter a number (short, sum) : ";
	cin >> number_one;
	for (short i = 1; i <= number_one; i++)
	{
		sum_one = sum_one + i;
	}
	cout << "The value you entered (n) is: " << number_one << endl;
	cout << "The Sum of these values is: " << sum_one << endl;
	// The result is overflowed when the input is 256 (the result is -32640). You can tell that it has overflowed when the results starts to become negative. 

    //The following repeatedly reads and computes the sum of the consecutive integers 1 through n and the data type for all the variables is long.
	long number_two = 0; 
	long sum_two = 0; 

	cout << "Enter another number (long, sum) : "; 
	cin >> number_two; 
	for (long i = 1; i <= number_two; i++)
	{
		sum_two = sum_two + i;
	}

	cout << "The value you entered (n) is: " << number_two << endl;
	cout << "The Sum of these values is: " << sum_two << endl;
	// The result is overflowed when the input is 65536 (the result is -214745088). You can tell that it has overflowed when the result starts to become negative. 
	
	
	//The following repeatedly reads and computes the product of the consecutive integers 1 throuh n and the data type for the result is float. 
	long number_three = 0;
	float result_1 = 0;

	cout << "Enter another number (geometric sequence, float): "; 
	cin >> number_three; 
	result_1 = multiplication_float(number_three);
	cout << "The value you entered (n) is: " << number_three << endl;
	cout << "The product of these values is: " << result_1 << endl;
	//The result is overflowed at input 35, the result becomes "inf".

	//The following repeatedly reads and computes the product of the consecutive integers 1 through n and the data type for the result is double.
	long number_four = 0; 
	double result_2 = 0; 

	cout << "Enter a number (geometric sequene, double): ";
	cin >> number_four; 
	result_2 = multiplication_double(number_four);
	cout << "The value you entered (n) is: " << number_four << endl;
	cout << "The product of these values is: " << result_2 << endl;
	//The result is overflowed at input 171, the result becomes "inf".

	//The following two compute the sum of the ration 1/n from 1 to n. The first one stores the result as a float and the second stores the result as a double.
	float number_five = 0.0;
	float result_3 = 0.0;

	cout << "Enter a number (1 + 1/n...): " << endl;
	cin >> number_five; 
	result_3 = strange_float(number_five);
	cout << "The value you entered (n) is: " << number_five << endl;
	cout << "The summation of these ratios is: " << result_3 << endl;

	double number_six = 0.0;
	double result_4 = 0.0;
	cout << "Enter a number (1 + 1/n...)" << endl;
	cin >> number_six; 
	result_4 = strange_double(number_six);
	cout << "The value you entered (n) is: " << number_six << endl;
	cout << "The summation of these ratios is: " << result_4 << endl;
	// double numbers are more accurate when dealing with longer decimal numbers because it allows more range of decimal places. Whereas float is not as accurate.
	
   //Puzzle 

	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	
	//The following are the results of the previous loop with type float. 
	/*	i = 3.4
		i = 3.6
		i = 3.8
		i = 4
		i = 4.2
		i = 4.4
	*/
	//The following are the results of the previous loop with type double
	/*
		i = 3.4
		i = 3.6
		i = 3.8
		i = 4
		i = 4.2

	*/
	//Double stops early because since it is more accurate it calulated over the number 4.4 so it stopped at 4.2


	return 0;
}

float multiplication_float (long input)
{
	float multiplication_one = 1.0;
	for (float i = 1; i <= input; i++)
	{
		multiplication_one = multiplication_one * i;
	}
	return multiplication_one;
}

double multiplication_double(long input)
{
	double multiplication_two = 1.0;
	for (double i = 1; i <= input; i++)
	{
		multiplication_two = multiplication_two *i;
	}
	return multiplication_two;

}
float strange_float(float input)
{
	float strange_one = 0.0; 
	for (float i = 1; i <= input; i++)
	{
		strange_one = strange_one + (1 / i);
	}
	return strange_one;

}
double strange_double(double input)
{
	double strange_two = 0.0; 
	for (double i = 1; i <= input; i++)
	{
		strange_two = strange_two + (1 / i);
	}
	return strange_two;
}
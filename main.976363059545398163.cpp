/*

                                   

*/

#include "pch.h"
#include "windows.h"
#include <iostream>
#include <limits>
#include <String>

#undef max

using namespace std;

int algorithm = 0; //                                            

void clear_input()
{
	//                    
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool choice() {
	/*                              */
	cout << "Choose. 1 for Inclusion, 2 for Newton-Raphson, 3 for comparison:  $  ";

	while (!(cin >> algorithm)) {
		cout << "Please try again, your input was invalid.  \n";
		cout << "Choose. 1 for Inclusion, 2 for Newton-Raphson, 3 for comparison: $  ";
		clear_input();
	}
	/*                                                              */
	if (algorithm == 1 || algorithm == 2 || algorithm == 3) {
		return true;
	}
	else {
		return false;
	}

}

double inclusion(double e, double v, bool num_of_actions = false) {
	double a = 0.00; //                  
	double b = v; //                                          
	//                                                                              
	if ( abs ( ((a*a) - v) ) <= e  ) {
		return a;
	}

	//                                                                             
	if (abs ( ((b*b) - v) ) <= e  ) {
		return b;
	}

	double x = 0; //                                    

	int i = 0; //                                                                                                          
	while (true) { //                                                           
		x = (a + b) / 2;

		if (x*x < v) {
			a = x;
			b + e;
		}
		else {
			b = x;
			a + e;
		}
	
		//                                                                

		if (abs ( ((x*x) - v) ) <= e ) { //                      

			if (num_of_actions == true) { //                                                                                                                   
				return i;
			}

			return abs(x);
		}
		i++;
	}
	return x;

	
}

double newton_raphson(double e, double v, bool num_of_actions = false) {
	double x = v ; //                                                               

	int i = 0; //                                                                                                          
	while (true) { //                                                           
		
		x = x - ((x*x-v) / (2*x)); //                                    

		if (abs(((x*x) - v)) <= e) {

			if (num_of_actions == true) { //                                                                                                                   
				return i;
			}

			return abs(x);
		}
		i++;
	}
	
	return x;
}

/*
                                                                                                                
                                                                                       
*/
double double_prompt_for_x(string message) {
	double x = 0;
	cout << message;
	while (!(cin >> x)) {
		cout << message;
		clear_input();
	}
	return x;
}

/*
                                                                                 
                                                                                       
                                                                                                                  
*/

double algorithm_no(int algorithm, double e, double v, bool num_of_actions = false) {
	if (algorithm == 1) { return inclusion(e, v, num_of_actions);  }
	if (algorithm == 2) { return newton_raphson(e, v, num_of_actions); }
	return 0;
}

/*
                                                                                                               
                                                                                
*/

void algo_compare(double e, double v) {

	int i = 1;
	cout << "\n\nv\talgo 1\t\tsteps\t\talgo 2\t\tsteps\n";
	cout << "================================================================\n\n";

	while (i < v) {
		i++;
		cout << i << "\t";
		cout << algorithm_no(1, e, i, false) << "\t\t";
		cout << algorithm_no(1, e, i, true) << "\t\t";
		cout << algorithm_no(2, e, i, false) << "\t\t";
		cout << algorithm_no(2, e, i, true) << "\t\t \n";
		
		if ((i % 20) == 0) {
			cout << "\n\nv\talgo 1\t\tsteps\t\talgo 2\t\tsteps\n";
			cout << "================================================================\n\n";
		}

	}

}

void application() {
	/*                                              */
	while (!choice()) {
		cout << "Please try again, your input was invalid.  \n";
	}

	if (algorithm == 1 || algorithm == 2) {
		string algo = "";

		switch (algorithm) {
		case 1:
			algo = "inclusion"; break;
		case 2:
			algo = "newton-raphson"; break;

		}

		double v = double_prompt_for_x("Please enter a number of which you want the square root:  $  ");
		double e = double_prompt_for_x("Please enter a epsilon between 0 and 1:  $  ");
		cout << "The " << algo << " square root of v is " << algorithm_no(algorithm, e, v) << " for epsilon " << e << endl;

	}
	else if (algorithm == 3) {

		cout << "We will now make a comparison between the Inclusive algorithm and the \n";
		cout << "Newton-Raphson algorithm. We will do this by counting the number\n";
		cout << "of approximations per algorithm. The programm will prompt you  \n";
		cout << "to enter an epsilon and a range of integers of which the programm\n";
		cout << "will estimate the square root.\nWe will use the range of integers from 1 to v \n\n";
		double v = double_prompt_for_x("Please enter a number of which you want the square root:  $  ");
		double e = double_prompt_for_x("Please enter a epsilon between 0 and 1:  $  ");

		algo_compare(e, v);

	}
	else {
		cout << "Something went horribly wrong. Please restart the application. ";
	}
	system("pause");
}

int main()
{
	/*                                              */
	SetConsoleTitle(TEXT("Square root calculator"));

    cout << "Welcome to this application \n";
    cout << "This application was built for the course Imperative Programming by \n";
    cout << "Karim Abdulahi (S1015162) and Sebastian France (S1028982) \n\n\n";

	/*                                                                                       
	                                                                                               */
	while (true) {
		cout << endl << endl << endl;
		application();
		
	}
	
}

/*
                                                                     

                                      
                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         
                                                         

                                                             
                                                                

                                                         
                                                         
                                                         
                                                         
*/

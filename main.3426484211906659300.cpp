/*                               
                         
                                   
                          
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

const double eps = 0.1;

//                                                                             
double abs_(double x) {
	if(x < 0) return -x;
	return x;
}

//                                                                                   
double inclusion(double eps,double v) {
	cout << "\nInclusion method:" << endl;
	int counter = 0;
	double a = 0;
	double b = v;
	double x = 0;
	if(b < 1) b = 1;

	if(a * a == v) return 0;
	else if( b * b == v) return 1;
	else {
		while(abs_(x*x-v) > eps){
			x = 0.5*(a + b);

			cout  << "a: " << a << " | b: " << b << " | x: " << x << " | i: " << counter << endl;

			if(x*x < v) a = x;
			else b = x;
			counter++;
		}
		cout << "\nit took: "  <<counter << " approximations" << endl;
		return x;
	}
}

double newton_raphson(double eps, double v){
	cout << "\nNewton Raphson method: " << endl;
	int counter = 0;
	double a = v;

	if(v == 0) return 0;
	if(v == 1) return 1;
	if (v < 1) a = 1;

	while(abs_(a*a-v) > eps){

		cout <<"a: " << a << " | i: " << counter << endl;

		a = (a - (a*a-v)/(2*a));
		counter++;
	}
	cout << "\nit took: "  <<counter << " approximations" << endl;
	return a;
}

int main()
{
	cout << fixed;
	cout << setprecision(2);
	double input;
	cout << "Please enter a number you'd like to know the approximate square root of | type 0 to quit" << endl;
	cin >> input;
	while (input !=0) {
		cout << "\nInclusion method approximation of " << input << " is " << inclusion(eps,input) << "\n" << endl;
		cout << "\nNewton Raphson method approximation of " << input << " is " << newton_raphson(eps,input) << endl;
		cout << "Please enter a number you'd like to know the approximate square root of | type 0 to quit" << endl;
		cin >> input;
	}
}

/*                         
   			         											              
    		 		   			   			   				 		   
      	 		    		     		      		 		      
  			 		    		     		     			 		     
  			 		    		     		     			 		     
  			 		    		    		     			 		     
  			 		    		     		     			 		     
  			 		    		     		     			 		     
  			 		     		     		     			 		     
  			 		     		     		     
  			 		     		     		     
  			 		     		     		     
  			  	     		     		     
  			  	     		     		     
  			  	     		     		     
   
   			         											              
    		 		   			   			   				 		   
     		 		    		     		     			 		     
  			 		    		    		     			 		     
  			 		    		    		    			 		     
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    
  			 		    		    		    
  			 		    		    		    
   
   			         											              
    		 		   			   			   				 		   
    		 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    
  			 		    		    		    
  			 		    		    		    
  			 		    		    		    
   
   			         											              
    		 		   			   			   				 		   
     		 		    		    		     			 		     
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    
  			 		    		    		    
   
   			         											              
    		 		   			   			   				 		   
       	 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    			 		    
  			 		    		    		    
 */


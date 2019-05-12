/*
                     
                         
*/

#include <iostream>
#include <algorithm> //                                  
#include <math.h> //                                         
using namespace std;

/*                  
                                         
     
 	   		   		   		     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
    

 	   		     
 	     	     
 	     	     
 	     	     
    

     
 	   		   		   		     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
    

 	   		     
 	     	     
    

             

 	   		   		   		     
 	     	     	     	     
    

 	   		     
 	     	     
 	     	     
 	     	     
    

                    
 	   		   		   		     
 	     	     	     	      
 	     	     	     	     
 	     	     	     	      
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
 	     	     	     	     
    

 	   		     
 	     	      
 	     	      
 	     	      
 	     	      
 	     	      
    

                                  
 	   		   		   		     
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
 	     	      	      	       
    

 	   		     
 	      	       
 	      	       
 	      	       
 	      	       
 	      	       
    
*/

double inclusion(double epsilon, double value){
	double a = 0, b = max(1.0, value);
	int i=0;
	if(a*a==value)
		return a;
	else if(b*b==value)
		return b;
	else {
		double x = (a+b)/2;
		i++;
		cout << i << " " << a << " " << x << " " << b << endl;
		while(abs(x*x-value)>epsilon){
			if(x*x<value){
				a = x;
			} else {
				b = x;
			}
			x = (a+b)/2;
			i++;
			cout << i << " " << a << " " << x << " " << b << endl;

		}
		cout << "inclusion square root of " << value << "is " << x << "for epsilon" << epsilon << endl;
		return x;
	}
}

/*
                                            
	    
		            
	    
		            
	             
		           
			         
			         
	                  
		            
			                   
			                   
			                     
			                     
			                       
			                       
			                         
			                         
			                         
	                            
		             
			                    
			                     
			                     
			                    
			                    
			                    
			                    
			                         
			                          
			                          
			                          
			

 */

double newton_raphson (double epsilon, double value){
	double x = max(1.0,value); //          
	int i = 0;
	cout << i << ' ' << x << '\n'; //                   
	while (abs(x*x-value) > epsilon) { //                               
		x = x-((x*x-value)/(2.0*x)); //               
		i++;
		cout << i << ' ' << x << '\n';
	}
	cout << "Newton raphson square root of " << value << "is " << x << "for epsilon" << epsilon << endl;
	return x;
}

/*                                                     
     
                            
   
     
      

     
                             
   

             
                            
   
       
        

                    
                            
   
   
     
         
         

                                
                            
    
      
         
         
         

                                                                            
*/

int main(){
	//                  
	cout << "v = 0\n";
	newton_raphson(0.1, 0);
	inclusion(0.1, 0);
	cout << "v = 1\n";
	newton_raphson(0.1, 0);
	inclusion(0.1,1.0);
	cout << "v = 0.25\n";
	newton_raphson(0.1, 0.25);
	inclusion(0.1,0.25);
	cout << "v = 9\n";
	newton_raphson(0.1, 9.0);
	inclusion(0.1,9.0);
	cout << "v = 20\n";
	newton_raphson(0.1, 20.0);
	inclusion(0.1,20.0);
	cout << "inclusion\n";
	inclusion(0.1,20.0);
	cout << "newton_raphson\n";
	newton_raphson(0.1,0.0);
	cout << "v = 1\n";
	cout << "inclusion\n";
	inclusion(0.1,20.0);
	cout << "newton_raphson\n";
	newton_raphson(0.1,1.0);
	cout << "v = 0.25\n";
	cout << "inclusion\n";
	inclusion(0.1,0.25);
	cout << "newton_raphson\n";
	newton_raphson(0.1,0.25);
	cout << "v = 9\n";
	cout << "inclusion\n";
	inclusion(0.1,9.0);
	cout << "newton_raphson\n";
	newton_raphson(0.1,9.0);
	cout << "v = 20\n";
	cout << "inclusion\n";
	inclusion(0.1,20.0);
	cout << "newton_raphson\n";
	newton_raphson(0.1,20.0);
	return 0;
}


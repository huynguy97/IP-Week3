//                               
//                         

/*                     
                                                                                                              
                                                                                                         
                                                             
 */

#include <iostream>
#include <cmath>
using namespace std;

void inclusion(double e, double v)
{
	double a = 0;
	double b = 0;
	double x = 0;

	if(v > 1)
	{
		b = v;
	}
	else
	{
		b = 1;
	}

	if(a * a == v) {
		cout << "Inclusion square root of v is " << a << ".\n" << endl;
		return;
	}
	if(b * b == v)
	{
		cout << "Inclusion square root of v is " << b << ".\n" << endl;
		return;
	}

	x = (a + b) / 2.0;

	while(!((abs (x * x - v)) <= e))
	{

		x = (a + b) / 2.0;

		if(x * x < v)
		{
			a = x;
		}
		else
		{
			b = x;
		}
	}

	cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << ".\n" << endl;
}

void startInclusion()
{
	cout << "Please enter the number 'v' of which the root has to be calculated:" << endl;
	double calculateroot;
	cin >> calculateroot;
	cout << "Please enter the number 'e', the accuracy of the calculation:" << endl;
	double accuracy;
	cin >> accuracy;
	if(calculateroot < 0)
	{
		cout << "There is no square root out of " << calculateroot << ". Negative numbers don't have a square root.\n" << endl;
	}
	else
	{
		inclusion(accuracy, calculateroot);
	}
}

void newton_raphson(double e, double v)
{
	double x = 0;
	if(v > 1)
	{
		x = v;
	}
	else
	{
		x = 1;
	}

	int i = 0;
	cout << "i: " << i << "\tx: " << x << endl;
	i++;

	while(!((abs (x * x - v)) <= e))
	{

		double fx = x * x - v;
		double fxd = 2 * x;

		x = x - (fx/fxd);

		cout << "i: " << i << "\tx: " << x << endl;

		i++;
	}

	cout << "Number of approximations: " << i << endl;

	cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << ".\n" << endl;
}

void startNewtonRaphson()
{
	cout << "Please enter the number 'v' of which the root has to be calculated:" << endl;
	double calculateroot;
	cin >> calculateroot;
	cout << "Please enter the number 'e', the accuracy of the calculation:" << endl;
	double accuracy;
	cin >> accuracy;
	if(calculateroot < 0)
	{
		cout << "There is no square root out of " << calculateroot << ". Negative numbers don't have a square root.\n" << endl;
	}
	else
	{
		newton_raphson(accuracy, calculateroot);
	}
}

int main()
{
	while(true)
	{
		cout << "Please type: 'inclusion' or 'newton-raphson' to select your mode. To terminate the program, type: 'quit'." << endl;
		string mode;
		cin >> mode;
		if(mode == "inclusion")
		{
			startInclusion();
		}
		else if(mode == "newton-raphson")
		{
			startNewtonRaphson();
		}
		else if (mode == "quit")
		{
			cout << "Quit program." << endl;
			return 0;
		}
		else
		{
			cout << "That is not a valid command" << endl;
		}
	}
}

/*
                      

                                                  
                                

             
         
            
                                                                              

                
                                                    
                                                                 
                                                         
                                              
                                                        

         
            
                                                                              

                
                                                    
                                   
                                                     

           
            
                                                               
                                                                           
                                                                                 
                                                    
                                                     

                
                                                            
                                                                          
                                            
                                                         

         
           
                                                                   
                                                                            
                                                                                  
                                                                                        
                                                                                             
                                                                                                 
                                                                                                 
                                                                                                 
                                                       
                                                   

                
                                                          
                                                                
                                                  
                                                            
                                                                       
                                                     
                                                        

          
            
                                                                     
                                                                             
                                                                                   
                                                                                        
                                                                                              
                                                                                                  
                                                                                                 
                                                                                                 
                                                                                                  
                                                                                                 
                                                        
                                                    

                
                                                           
                                                                     
                                                          
                                                                        
                                                                        
                                                      
                                                         

                                                                                                      
                      
        
            
    	    	    	                                                
                           
                
            
              
               
                           

        
            
    	    	      	                                                
                           
                
            
                           

          
            
                	        	    
                	        	    
                	        	    
                                    
                           
                
            
              
                           

        
            
                		        		    
                		        		      
                		        		      
                		                        
                                                
                                                  
                                                  
                                                  
                                                  
                           
                
            
            
              
                  
                  
                           

         
            
                		        		     
                		        		       
                		        		       
                                               
                                               
                                                  
                                                  
                                                  
                                                  
                                                  
                                                  
                            
                
             
             
                  
                  
                  
                           

           
                                                                                 
                                                                                                            
                                                                                                  
                                                                
 */


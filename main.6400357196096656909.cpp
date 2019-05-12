//                                               
//                                          
//                           

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

//                                                                                       
//                                                                                          
//                                                                                       
//                                                                   
void inclusion(double eta, double v)
{
	double a = 0.0;
	double b = fmax(1.0, v);
	double avg = (a + b) / 2;
	double answer = 1;
	int i = 0;
	cout << i << "\t" << a << "\t" << avg << '\t' << b << endl;

	if (a*a == v)
		answer = a;
	else if (b*b == v)
		answer = b;
	else
	{
		while (abs(avg*avg - v) > eta)
		{
			if ((avg * avg) < v)
				a = avg;
			else
				b = avg;

			avg = (a + b) / 2;
			i++;
			cout << i << "\t" << a << "\t" << avg << '\t' << b << endl;
		}
		answer = avg;
	}
	cout << "Inclusion square root of " << v << " is " << answer << " for epsilon " << eta << endl;
}

//                                                                                                                       
//                                
//                                                                          
//                                                                 
void newton_raphson (double eta, double v)
{
    double x = fmax(1, v);
    int i = 0;
    cout << i << "\t" << x << endl;

    while(abs(x*x - v) > eta)
    {
        x = x - ( (x*x - v) / (2*x) );
        i++;
        cout << i << "\t" << x << endl;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << eta << endl;
}

//            
//                                                                                                   
int main()
{
	do
	{
		double num = 1.0;
		double eta = 0.1;
		double input = 1.0;

		do
        {
            cout << "enter a positive number :";
            cin  >> input;
        } while( input < 0.0 );

        num = input;

        do
        {
            cout << "enter a positive eta :";
            cin  >> input;
        }  while( input < 0.0 );

        eta = input;
		inclusion(eta, num);
		newton_raphson(eta, num);
		cout << endl;

	} while (true);
}

/*
                
         

          
          
                                 
                                  
          
                                 
                                  
            
                                   
                                    
                        
           
                                
                               
                     
           
                                 
                                   
                                     
                                         
                                           
                                             
                                                
                                                
                                                
                           

       
          
              
                
                 
          
              
            
              
                 
           
               
                
                    
                    
                    
           
               
                 
                    
                    
                    
                    

                          

                          
                         
                         
                                               
         
           
            
                                                       

                          
                         
                         
                                               
         
                                                    

                            
                         
                         
                         
                                                    
         
            
                                                         

                           
                         
                          
                         
                                                
          
           
               
               
               
                                                           

                           
                         
                          
                          
                            
                            
                             
                              
                              
                              
                              
                                                      
          
            
               
               
               
               
                                                           

           
                                                                                         
*/


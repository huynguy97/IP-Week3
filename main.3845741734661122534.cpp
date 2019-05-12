#include <iostream>
#include <cmath>

using namespace std;

/*
                                             
                                              

                    
                                               
                                               
                                                    
                                                          
                                                        

                                                       
                                                    
                                                        
                                                               
                                                               
*/

//                                 
double a, b, x_i, i;

//                                      
double x_n, j;

//                                 
double user_value, user_epsilon;

//                                                                                   
//                                                                          
void inclusion ( double epsilon, double value )
{
    a = 0;
    b = max( 1.0 , value );
    i = 0;

    x_i = ( a + b ) / 2;

//                                 
//                                                         
//                                                                           

//                                                               
//                                  
    if (value == a * a)
        x_i = a;
    else if (value == b * b)
        x_i = b;

//                                                                  
//                                                                    
//                                                                          
//                                                                     
//                                                        
    else
    {
        while ( abs(x_i * x_i - value) > epsilon )
        {
            if ( x_i * x_i > value)
                b = x_i;
            else
                a = x_i;
            x_i = ( a + b ) / 2;
            i++;
//                         
//                                                                         
//                                                                           
        }
    }
    cout << "Inclusion square of " << value << " is " << x_i <<
    " for epsilon " << epsilon << endl;
}

//                                                                         
//                                                                         
//                                                                     
//                                                                     
//                                                          
void newton_raphson (double epsilon, double value)
{
    x_n = max(value, 1.0);
    j=0;
//                                 
//                                                                 

    while ( abs( x_n * x_n - value ) > epsilon )
    {

        x_n = x_n - ( x_n * x_n - value )/( 2 * x_n );
        j++;
//                        
//                                                                     
    }
    cout << "Newton_raphson square of " << value << " is " << x_n <<
    " for epsilon " << epsilon << endl;
}

//                                                                      
//                                                                        
//                                                                     
//                           
int main()
{
    cout << "\n Enter value" << endl;
    cin >> user_value ;
    cout << "\n Enter epsilon" << endl;
    cin >> user_epsilon ;
    cout << "\n";
    inclusion ( user_epsilon, user_value );
    newton_raphson ( user_epsilon, user_value );
    return 0;
}

/*
                       

                                            
                                          
                  
                    
                     
                                                  

                                            
                                          
                  
                                               

                                           
                                              
                                               
                 
                   
                                                   

                                              
                                                
                                                 
                                                      
                                                        
                                                           
                                                           
                                                            
                                                           
                                                           
                                                 
                   
                   
                        
                        
                        
                        
                                                      

                                             
                                               
                                                 
                                                      
                                                        
                                                         
                                                         
                                                 
                   
                  
                        
                        
                        
                                                      

*/


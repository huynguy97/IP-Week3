#include <iostream>
#include <cmath>

using namespace std;

//                                          

void inclusion ( double e, double v )
{
    double a = 0;
    double b = max ( 1.0, v ) ;
    int iterationA = 0;
    if (a * a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    if (b * b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }

    double x = (a + b)/2;
    while (abs (x*x - v)> e)
    {
        iterationA = iterationA +1 ;
        if (x*x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a + b)/2;
    }
    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << " with iteration " << iterationA << endl;
}

void testInclusion ()
{
    cout << endl << "Testing inclusion" << endl;
    double e = 0.1;
    while (e >= 0.00001)
    {
        inclusion (e, 0.0) ;
        inclusion (e, 1.0) ;
        inclusion (e, 0.6) ;
        inclusion (e, 36.0) ;
        inclusion (e, 333333.3333) ;

        e = e / 10 ;
    }
    cout << endl << "Testing inclusion done" << endl;
}

void newton_raphson (double e, double v)
{
    int iterationB = 0;
    double x = max(1.0, v);
    while (abs(x * x - v)> e)
    {
        iterationB = iterationB + 1 ;
        x = x - (x * x - v)/(2 * x);
    }
    cout << "Newton_raphson square root of " << v << " is " << x << "for epsilon" << e << " with iteration " << iterationB << endl;
}

void test_newton_raphson()
{
    cout << endl << "Testing Newton_Raphson" << endl;
    double e = 0.1;
    while (e >= 0.00001)
    {
        newton_raphson(e, 0.0);
        newton_raphson(e, 1.0);
        newton_raphson(e, 0.6);
        newton_raphson(e, 36.0);
        newton_raphson(e, 333333.333333);

        e = e/10;
    }
    cout << endl << "Testing Newton_Raphson done" << endl;
}

int main()
{
    testInclusion();
    test_newton_raphson();
    return 0;
}
/*
                
          

      
                              
                                                                 
                                                           

      
                              
                                                                          
                                                                
                                                           

          
                              
                                                                      
                                                                        
                                                                                                 
                                                                                                                                                                                         
                                                                                                                                                                                                                         
                                                     
                             

                                                    
                      
                                                                      
                                                                                                                                                        
                                                                                                        
                                                                                                                                                                                           
                                                                                                                                                                                                                                 
                                                     
                                  

               

      
              
                                                                                                                                   
                                                                                                                                                                                                                          
                        

      
              
                                                                                                        
                                                                              

          
              
                                                                                                                                                                                 
                                                                                 

                                                  
            
                                                                                                                          
                                                                                                                           
                              

           
                                                                                                          
                                                                                                          

           
                                                                                                                                                  
                                                                                                            
                                                                                                 
                                                                                                                                                         

                     
                                               
        
                                 
                                 
                                 
                                 
                                  

         
                                 
                                 
                                 
                                 
                                  

          
                                 
                                 
                                 
                                 
                                  

           
                                 
                                 
                                 
                                 
                                  

           
                                 
                                 
                                 
                                 
                                  

                                                                                                                                                     
*/


#include <iostream>

#include <cmath>

using namespace std;

void inclusion ( double e, double v)
{

    double a = 0;
    double b = max( 1.0 , v);
    double x = (a + b / 2);
    int i = 0 ; //              

    if ( a*a == v )
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        cout << "Iteration Inclusion = " << i << endl;
        return;

    }
    if ( b*b == v )
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        cout << "Iteration Inclusion = " << i << endl;
        return;

    }

    while (abs(x*x-v) > e)
    {
        if ( x*x < v )
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a + b)/2;
        i = i + 1;

    }
    cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
    cout << "Iteration Inclusion = " << i << endl;
}

//                                          
//            
//            
//                                             
//                                                       
//            
//            
//                                              
//                                                       

void newton_raphson ( double e, double v)
{
    double x = max ( 1.0, v);
    int i = 0 ; //              

    while (abs( x * x) - v > e)
    {
        x = x - (x*x -v)/( 2 *x);
        i = i + 1;
    }

    cout << "Newton_raphson square root of " << v << " is " <<  x << " for epsilon " << e << endl;
    cout << "Iteration Newton_raphson = " << i << endl;
}

void test_inclusion ()
{
    cout << endl << "******** Testing Inclusion ********" << endl;
    double e = 0.1 ;
    while ( e >= 0.00001)
    {
        inclusion (e, 0.0);
        inclusion  (e, 1.0);
        inclusion  (e, 0.003);
        inclusion  (e, 11.0);
        inclusion  (e, 344553.6773);

        e = e / 10 ;
    }
    cout << endl << "******** Testing Inclusion done! ********" << endl ;

}

void test_newton ()
{
    cout << endl << "******** Testing Newton_raphson ********" << endl;
    double e = 0.1 ;
    while ( e >= 0.00001)
    {
        newton_raphson (e, 0.0);
        newton_raphson (e, 1.0);
        newton_raphson (e, 0.003);
        newton_raphson (e, 11.0);
        newton_raphson (e, 344553.6773);

        e = e / 10 ;
    }
    cout << endl << "******** Testing Newton_raphson done! ********" << endl ;
}

int main ()
{
    test_inclusion ();
    test_newton ();
    return 0;
}
/*                            
                               
                       
                               
                       
                                                     
                       
                                                     
                       
                                                         
                        
                               
                       
                               
                       
                                                        
                       
                                                      
                        
                                                          
                        
                               
                       
                               
                       
                                                         
                       
                                                       
                        
                                                           
                        
                               
                       
                               
                       
                                                             
                       
                                                        
                        
                                                            
                        
                               
                       
                               
                       
                                                             
                       
                                                        
                        
                                                            
                        

                                         

                                        
                                                       
                            
                                                    
                            
                                                               
                            
                                                           
                            
                                                               
                             
                                                          
                            
                                                     
                            
                                                                 
                            
                                                            
                            
                                                                
                             
                                                            
                            
                                                      
                            
                                                                  
                            
                                                             
                            
                                                                 
                             
                                                               
                            
                                                       
                            
                                                                   
                            
                                                              
                            
                                                                  
                             
                                                                
                            
                                                       
                            
                                                                   
                            
                                                              
                            
                                                                  
                             

                                              
    
                                                                                                                                          
                                                                                                                                                                                                 
                                                          

*/
#include <iostream>
#include <cmath>

using namespace std;

/*                         
                                            
                                          
                                         
              
                     
            

                                             
                                             
                
                             
              

                                               
                                               
                
                             
              

                                                 
                                                 
                
                             
              

                                                  
                                                 
                
                 

                                            
                                          
                                         
              
                     
            

                                             
                                             
                
               
*/

void inclusion ( double e, double v )
{
    double a = 0;
    double b = max(1.0, v);
    double x = (a+b)/ 2;
    int i = 0;
        if ( a*a == v )
            {
            cout << "Inclusion square root of " << v <<  " is " << a << endl;
            return;
            }
        if ( b*b == v )
            {
            cout << "Inclusion square root of " << v <<  " is " << b << endl;
            return;
            }
        while ( abs ( x * x - v ) > e )
        {
            if ( x * x < v  )
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
        cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << " , b = " << b << " and a = " << a << " in " << i << " iterations " << endl;
}

void test_inclusion ()
{
cout << endl << "******** testing inclusion ********" << endl;
double eps = 0.1 ;
while ( eps >= 0.00001)
{
inclusion (eps, 0.0) ;
inclusion (eps, 1.0) ;
inclusion (eps, 0.6) ;
inclusion (eps, 36.0) ;
inclusion (eps, 333333.3333) ;

eps = eps / 10 ;
}
cout << endl << "******** testing inclusion done ********" << endl ;
}

void newtonraphson ( double e, double v )
{
    double x = max( 1.0 , v);
    int i = 0;
    while( abs ( x*x - v ) > e )
    {
        x = x - (x * x - v)/ (2 * x);
        i = i + 1;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << " in " << i << " iterations " <<  endl ;
}

void test_newtonraphson ()
{
cout << endl << "******** testing newtonraphson ********" << endl;
double eps = 0.1 ;
while ( eps >= 0.00001)
{
newtonraphson (eps, 0.0) ;
newtonraphson (eps, 1.0) ;
newtonraphson (eps, 0.6) ;
newtonraphson (eps, 36.0) ;
newtonraphson (eps, 333333.3333) ;

eps = eps / 10 ;
}
cout << endl << "******** testing newtonraphson done ********" << endl ;
}

int main()
{
test_inclusion() ;
test_newtonraphson();
return 0;
}

/*         

                                   
                               
                               
                                                                                       
                                                                                                    
                                                                                                     
                               
                               
                                                                                                       
                                                                                                     
                                                                                                      
                               
                               
                                                                                                         
                                                                                                      
                                                                                                       
                               
                               
                                                                                                           
                                                                                                       
                                                                                                        
                               
                               
                                                                                                           
                                                                                     
                                                                                                        

                                        

                                       
                                                                       
                                                                    
                                                                        
                                                                           
                                                                               
                                                                          
                                                                     
                                                                           
                                                                            
                                                                                
                                                                            
                                                                      
                                                                            
                                                                       
                                                                                 
                                                                               
                                                                       
                                                                                
                                                                        
                                                                                  
                                                                                
                                                                       
                                                                                
                                                                        
                                                                                  

                                            

           
                                                                                                        
                  

                                   
                
                
                
                
                 

                                    
                
                
                
                
                 

*/


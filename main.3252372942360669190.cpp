//                      
//                       

//     

//                 

//                           
//                                                   
//                                         
//                                         

//                            
//                   
//                                         
//                                 
//                               
//                           

//                               
//                                                    
//                                         
//                                 
//                                 
//                                   
//                                      
//                                                 
//                              

//                            
//                 
//                                         
//                                 
//                                 
//                                   
//                                    
//                                          
//                           

//                             
//                  
//                                         
//                                 
//                                 
//                                   
//                                     
//                                              
//                           
//                                         
//                 
//                                    
//                                              
//                           
//                                         
//                 
//                                      
//                                                  
//                           
//                                             
//                   
//                                         
//                                                         
//                           
//                                               
//                      
//                                              
//                                                   
//                           
//                                               
//                       
//                                          
//                                              
//                           
//                                         
//                    
//                                           
//                                                      
//                           
//                                                 
//                        
//                                                
//                                                            
//                           
//                                                   
//                          
//                                                 
//                                                      
//                                                           

//     

#include <iostream>
#include <cmath>

using namespace std;

void inclusion ( double e, double v )
{
    double a = 0;
    double b = max(1.0, v);
    double x = (a + b)/2;

    if(a * a == v)
    {
        cout << " Inclusion square root of " "<< v <<" " is " << a <<endl;
        return;
    }
    if(b * b ==v)
    {
        cout << " Inclusion square root of " "<< v <<" " is " << b <<endl;
        return;
    }

    while( abs (x * x - v) > e)
    {
        if (x * x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
        x = (a + b)/2;
    }
    cout << " Inclusion square root of " << v << " = " << x << " for epsilon " << e << endl;
}

//     

void newtonraphson ( double e, double v )
{
    double x = max(1.0, v);

    while( abs ( x * x - v ) > e )
    {
        x = x - ((x * x - v)/(2 * x));
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl ;
}

int main()
{
    cout << "Testing v = 49.0 for 1.2" << endl;
    inclusion ( 0.001, 49.0 );
    cout << "Testing v = 16.0 for 1.2" << endl;
    inclusion ( 0.001, 16.0 );
    cout << "Testing v = 49.0 for 1.3" << endl;
    newtonraphson ( 0.001, 49.0);
    cout << "Testing v = 16.0 for 1.3" << endl;
    newtonraphson ( 0.001, 16.0);

    return 0;
}

//     

/*                        

                     
                                          
 
                
                             
                                   
 
                
                             
                                   
 
                   
                                
                                   
 
                
                             
                                   
 
                 
                              
                                    
                           
                           
                             
                              
                              
                                
 
 
                          
                                          
 
                
                             
                   
             
              
 
                
                             
                   
 
                
                             
                   
             
              
                 
 
                 
                              
                    
             
                 
                 
                 
*/

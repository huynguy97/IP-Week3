#include <iostream>
#include <stdlib.h>
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;

void inclusion (double e, double v)
{
    int i = 0;
    double a = 0;
    double b = max(1,v);
    double x = (a + b) / 2;
    if (a*a == v)
        cout << "Inclusion square root of " << v << " is " << a << endl;
    else if (b*b == v)
        cout << "Inclusion square root of " << v << " is " << b << endl;
    else
    {
        while (abs(x*x - v) > e)
        {
            i++;
            if (x*x < v)
                a = x;
            else
                b = x;
            x = (a + b) / 2;
        }
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon of " << e << endl;
        cout << "i = " << i << "\ta = " << a << "\tx = " << x << "\tb = " << b << endl;
    }
}

void newton_raphson (double e, double v)
{
    int i = 0;
    double x = max(1,v);
    while (abs(x*x - v) > e)
    {
        i++;
        x = x - ((x*x - v) / (2*x));
    }
    cout << "Newton-Raphson square root of " << v << " is " << x << " for epsilon of " << e << endl;
    cout << "i = " << i << "\tx = " << x << endl;
}

int main()
{
    int i = 0;
    inclusion(0.1,0);
    newton_raphson(0.1,0);
    inclusion(0.1,1);
    newton_raphson(0.1,1);
    inclusion(0.1,0.3);
    newton_raphson(0.1,0.3);
    inclusion(0.1,49);
    newton_raphson(0.1,49);
    inclusion(0.1,23);
    newton_raphson(0.1,23);
    return 0;
}

/*
              
              
              
                  

                   
    
                                                         
                  

              
              
                  

                   
      
                  

                
                         
                   

                     
      
                                        
                                                                                  

               
                            
                               
                                
                                     
                                       
                                         
                                             
                                                
                                                  
                                                      
                                                            
                                                              
                               

                    
       
                                                  
                                                       
                                                                                                                             
                                                                                                              
                                                                                                             
                                                

               
                            
                              
                               
                                    
                                      
                                          
                                             
                                                
                                                  
                                                      
                                                            
                              

                    
       
                 
                                                                               
                                                                                                             
                                                                                                             
                                                                                                              
                                                 
*/


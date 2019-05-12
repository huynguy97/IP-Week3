#include <iostream>
#include <cmath>

using namespace std;

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

void Inclusion (double e, double v)
{
    double a = 0;
    double b = (v < 1) ? 1 : v;
    double x;
    int i = 0;
    if (v == 0 || v == 1)
    {
        cout << "Inclusion square root of " << v << " is " << v << " for any epsilon" << endl
        << "i = " << i << "\ta = " << a << "\tx = 0.5" << "\tb = " << b << endl;
        return;
    }
    while (true)
    {
        x = (a + b)/2.0;
        if (abs(x*x - v) <= e)
        {
            cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl
            << "i = " << i << "\ta = " << a << "\tx = " << x << "\tb = " << b << endl;
            return;
        }
        else if (x*x < v)
            a = x;
        else
            b = x;
        i++;
    }

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

void NewtonRaphson (double e, double v)
{
    double x = (v < 1) ? 1 : v;
    int i = 0;
    while (true)
    {
        if (abs(x*x - v) <= e)
        {
            cout << "Newton-Raphson square root of " << v << " is " << x << " for epsilon " << e << endl
            << "i = " << i << "\tx = " << x << endl;
            return;
        }
        else
            x = x - (x*x - v)/(2*x);
        i++;
    }
}
//                                                                            
//              
//              
//                
//               
//                 

int main()
{
    Inclusion(0.1, 0);
    NewtonRaphson(0.1, 16);
    NewtonRaphson(0.1, 16.8);
    return 0;
}


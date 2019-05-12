#include <iostream>
#include <cmath>

//                                   
//                                              

using namespace std;

//                        
//                                                                              
double Inclusion (double epsilon, double v)
{
    double a = 0;
    double b = max(v,1.0);
    int i = 0;
    cout << "0\t" << a << "\t" << b << "\n";
    while(!(abs(a*a -v) <= epsilon || abs(b*b -v) <= epsilon))
    {
        i++;
        double x = (a+b)/2;
        cout << i << "\t" << a << "\t" << x << "\t" << b<< "\n";
        if(x*x < v)
        {
            a = x;
        }
        else
        {
            b = x;
        }
    }
    if(abs(a*a -v) <= epsilon)
    {
        cout << "Inclusion square root of v is " << a << " for epsilon " << epsilon << "\n";
    }
    if(abs(b*b -v) <= epsilon)
    {
        cout << "Inclusion square root of v is " << b << " for epsilon " << epsilon << "\n";
    }
}
//                             
//                                                                              
double NewtonRaphson (double epsilon, double v)
{
    double x = max(1.0,v);
    int i = 0;
    cout << "0\t" << x << "\n";
    while(!(abs(x*x - v) <= epsilon))
    {
        i++;
        x = x - (x*x-v)/(2*x);
        cout << i << "\t" << x<< "\n";
    }
    cout << "New raphson square root of v is " << x << " for epsilon "<< epsilon << "\n";
}

int main()
{
    double epsilon = 0.1;
    Inclusion(epsilon,0.0);
    NewtonRaphson(epsilon,0.0);
    /*
                 
                                               
         
           
            
                                                    
    */

    Inclusion(epsilon,1.0);
    NewtonRaphson(epsilon,1.0);
    /*
                         
                                                       
                 
                                                         
    */

    Inclusion(epsilon,0.5);
    NewtonRaphson(epsilon,0.5);
    /*
                         
                                 
                                 
                                                          
                 
                    
                                                            
    */

    Inclusion(epsilon,16.0);
    NewtonRaphson(epsilon,16.0);
    /*
                          
                                  
                                 
                                                       
                  
                   
                       
                       
                       
                                                               
    */

    Inclusion(epsilon,37.0);
    NewtonRaphson(epsilon,37.0);
    /*
                          
                                  
                                    
                                    
                                    
                                      
                                      
                                       
                                       
                                       
                                       
                                       
                                                             
                  
                  
                       
                       
                       
                       
                                                               
    */

    return 0;
}


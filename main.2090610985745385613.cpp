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

double maximum (double p, double q) //                                                             
{
    if (p >= q)
        return p;
    return q;
}

//         
int inclusion (double eps, double v) //                                                                                                          
{
    int i = 0 ; //                                         
    double a = 0 ;
    double b = maximum(1, v) ;
    if (a*a == v) //                                      
    {
        cout << "Inclusion square root of " << v << " is " << a << endl ;
        return 0 ;
    }
    if (b*b == v) //                                      
    {
        cout << "Inclusion square root of " << v << " is " << b << endl ;
        return 0 ;
    }
    double x = (a+b)/2.0 ;
    cout << "i\t" "ai\t" "xi\t" "bi\t" << endl ; //                                                                                                 
    cout << i << "\t" << a << "\t" << x << "\t" << b << endl ; //           
    while (abs(x*x-v) > eps) //                                     
    {
        if (x*x < v)
            a = x ;
        else
            b = x ;
        x = (a+b)/2.0 ;
        i++ ;
        cout << i << "\t" << a << "\t" << x << "\t" << b << endl ; //            
    }
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << eps << endl ;
    return 0 ;
}
//         
int newton_raphson (double eps, double v) //                                                                                                               
{
    int i = 0; //                                         
    double x = maximum(1, v) ;
    cout << "i \t" "xi" << endl ; //            
    cout << i << "\t" << x << endl ; //            
    while (abs(x*x-v) > eps) //                                          
    {
        x = 0.5*(x+(v/x)) ; //                                                                                                    
        i++ ;
        cout << i << "\t" << x << endl ; //            
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << eps << endl ;
    return 0 ;
}

//         
//                                        

int main()
{
    inclusion(0.1, 17) ;
    cout << "\n" << endl ;
    newton_raphson(0.1, 17) ;
}


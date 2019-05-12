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
void inclusion (double e, double v)
{
    //                                                                                                                  
    double a = 0 ;
    double b = 0;
    double x = 0;
    //                                                                                   
    int i = 1;
    //                                   
    cout << "Enter a nonnegative real number v: " ;
    cin >> v ;
    cout << "You entered v is " << v << "\n" ;
    //                                    
    if (v <= 1)
    {
        b = 1 ;
    }
    else
    {
        b = v ;
    }
    //                                                       
    if (v == a*a || v == b*b)
    {
        cout << "Inclusion square root of v is " << v << "\n" ;
        cout << "i = " << i << "\t a_" << i << " = " << a << "\t x_" << i << " = " << x << "\t b_" << i << " = " << b ;
    }
    //                                                                                         
    else
    {
        while (abs(x*x - v) >= e)
        {
            x = (a + b) / 2 ;
            if (x*x < v)
            {
                a = x ;
            }
            else
            {
                b = x ;
            }
    //                                                       
            ++i ;
            }
    cout << "Inclusion square root of v is " << x << " for epsilon " << e << "\n" ;
    cout << "i = " << i << "\t a_" << i << " = " << a << "\t x_" << i << " = " << x << "\t b_" << i << " = " << b ;
    }
}

//               
void newton_raphson (double e, double v)
{
    //                                                                                                                   
    double x = 0 ;
    double i = 1;
    //                              
    cout << "Enter a nonnegative real number v: " ;
    cin >> v ;
    cout << "You entered v is " << v << "\n" ;
    //                                    
    if (v >= 1)
    {
        x = v ;
    }
    else
    {
        x = 1 ;
    }
    //                                                                                               
    while (abs(x*x - v) > e)
    {
        x = x - (((x*x) - v) / (2*x)) ;
        ++i ;
    }
    cout << "Newton_raphson square root of v is " << x << " for epsilon " << e << "\n" ;
    cout << "i = " << i << "\t x_" << i << " = " << x ;
}

int main ()
{
    //                                                     
    double e = 0.01;
    double v = 0;
    //                                                           
    int choice ;
    cout << "If you want to use the inclusion function, fill in 1. \nIf you want to use the Newton-raphson function, fill in 2.\n" ;
    cin >> choice ;
    switch (choice)
    {
        case 1: cout << "You chose the inclusion function \n" ; inclusion(e = 0.01, v) ; break ;
        case 2: cout << "You chose the Newton-raphson function \n" ; newton_raphson(e = 0.01, v) ; break ;
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


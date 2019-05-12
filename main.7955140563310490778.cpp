#include <iostream>
#include <cmath>

//              
//         
//           

using namespace std ;
double v ;
double e ;
double a = 0 ;
double b = v ;
double x = (a+b)/2 ;

void get_user_input ()
{
    cout << "Enter a positive number v" << endl ;
    cin >> v ;
    cout << "You entered " << v << endl ;
    cout << "Enter a number between 0 and 1" << endl ;
    cin >> e ;
    cout << "You entered " << e << endl ;
}

void calculate_x ()
{
    int i = 0 ;
    while (abs(x*x-v)>=e)
    {
        i++ ;
        if (x*x<v)
            a=x ;
        else if (x*x>v)
            b=x ;
        x = (a+b)/2 ;
        cout << "x is " << x << '\t' << "a is " << a << '\t' << "b is " << b << '\t' << "i is " << i << endl ;
    }
    if (abs(x*x-v)<=e)
        cout << "Inclusion square root of v is " << x << endl ;
}

void calculations_inclusion ()
{
    if (v<1)
        b=1 ;
    else
        b=v ;
    if (a*a==v)
    {
        cout << "Inclusion square root of v is " << a << endl ;
    }
    else if (b*b==v)
    {
        cout << "Inclusion square root of v is " << b << endl ;
    }
    else
        calculate_x() ;
}

void calculations_newton ()
{
    double x=v ;
    int i = 0 ;
    while (abs(x*x-v)>=e)
    {
        i++ ;
        x=x-((x*x)-v)/(2*x) ;
        cout << "x is " << x << '\t' << "i is " << i << endl ;
    }
    cout << "Newton-Raphson square root of v is " << x << endl ;
}

int main()
{
    get_user_input () ;
    calculations_inclusion () ;
    calculations_newton () ;
}

/*

                         
  
             
                              
   
               
                               
                                    

                                                    
                          

                         
 
             
                              
   
               
                               
                                    

                                                   
                          

                         
    
                
                              
   
               
                                      
                                              
                                              
                                   
                      
                                       

                                                    
                          

                         
  
              
                              
   
               
                              
                              
                                      
                                              
                                                      
                                                      
                                                      
                                                      
                                                      
                                                       
                                                       
                                     
                      
                      
                      
                      
                      
                                          

                                                   
                          

                         
  
              
                              
   
               
                                      
                                              
                                              
                                              
                                                      
                                                      
                                                      
                                                      
                                                      
                                                       
                                     
              
                      
                      
                      
                      
                                          

                                                   
                          

*/


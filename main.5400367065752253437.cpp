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

double eps = 0.1;
double x = 0;
double a=0;
double b;
double v;
double x_new;
double x_old;
bool done_inclusion=false;
bool done_newton=false;
int i=0;
int j=0;

void inclusion(double e, double v)
{

    if (v < 1)
    {
        b = 1.0;
    }
    else
    {
        b = v;
    }

    while (!done_inclusion)
    {
        if(a*a==v)
        {
            cout << "Inclusion square root of " << v << " is: " << a << " for epsilon: " << e << endl;
            cout << "i: " << i << " x: " << x << " a: " << a << " b: " << b << endl;
            done_inclusion = true;
        }

        if(b*b==v)
        {
            cout << "Inclusion square root of " << v << " is: " << b << " for epsilon: " << e << endl;
            cout << "i: " << i << "\t x: " << x << "\t a: " << a << "\t b: " << b << endl;
            done_inclusion = true;
        }

        if((v!=a*a)|| (v!=b*b))
        {
            x = (b + a) / 2.0;
        }

        if ((abs(((x * x) - v))) <= e)
        {
            cout << "Inclusion square root of " << v << " is: " << x << " for epsilon: " << e << endl;
            cout << "i: " << i << " x: " << x << " a: " << a << " b: " << b << endl;
            done_inclusion = true;
        }
        if ((x * x) < v)
        {
            a = x;
            i++;
        }
        else
        {
            b = x;
            i++;
        }
    }
}

void newton_raphson (double e, double v)
{
    if (v < 1)
    {
        x_old = 1.0;
    }
    else
    {
        x_old = v;
    }
    while(!done_newton)
    {
        x_new = x_old - ((x_old*x_old)-v)/(2*x_old);
        if((abs(x_new*x_new-v))<= e)
        {
            cout << "Newton_raphson square root of "<< v <<" is " << x_new << " for epsilon: "<< e << endl;
            cout << "i: " << j << " x: " << x_new << endl;
            done_newton = true;

        }
        x_old = x_new;
        j++;

    }

}

int main() {
    cout << "starting" << endl;
    cout << "please enter your number: " << endl;
    cin  >> v;
    newton_raphson(eps, v);
    inclusion(eps, v);

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

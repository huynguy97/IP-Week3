#include <iostream>
#include <cmath>

using namespace std;

//                                                      
//                                                  

/*
        
        
          
        
         

         
    
    
       
             
             

               
       
    
       
                
                
*/

//                                               
//                                    
void inclusion(double epsilon, double v)
{
    double a = 0;
    double b;
    if (v > 1)
        b = v;
    else
        b = 1;

    if (a * a == v) {
        cout << "Inclusion square root of " << v << " is " << a;
        return;
    } else if (b * b == v) {
        cout << "Inclusion square root of " << v << " is " << b;
        return;
    }

    double x = (a + b) / 2;

    int i = 0;
    while (abs(x * x - v) > epsilon) {
        cout << i << '\t' << a << '\t' << x << '\t' << b << '\n';
        if (x * x < v) {
            a = x;
        } else {
            b = x;
        }
        x = (a + b) / 2;
        i++;
    }

    cout << i << '\t' << a << '\t' << x << '\t' << b << '\n';
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << epsilon;
}

//                                               
//                                    
void newton_raphson(double epsilon, double v)
{
    double x;
    if (v > 1)
        x = v;
    else
        x = 1;

    int i = 0;
    while(abs(x * x - v) > epsilon) {
        cout << i << '\t' << x << '\n';
        x = x - (x * x - v) / (2 * x);
        i++;
    }

    cout << i << '\t' << x << '\n';
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << epsilon;
}

/*
         
                               
                               
        
        
        

              
        
        
        
        
        
*/

int main()
{
    return 0;
}


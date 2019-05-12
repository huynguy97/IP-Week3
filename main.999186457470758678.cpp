#include <iostream>
#include <cmath>
using namespace std;

//                      
//                       

void newton_rhapson(double eps, double v)
{
    double x = v;
    if(x < 1)
    {
        x = 1;
    }
    int i = 0;

    while(abs(x * x - v) >= eps)
    {
        i++;
        x = x - ((x*x) - v)/(2*x);
        //                  
        cout << "x = " << x << '\t' << "i = " << i << endl;
    }

    if(i == 0)
    {
        i++;
    }

    cout << "Newton Rhapson: Calculated the square root of " << v << " = " << x << " in "<< i << " steps." << endl;
}

void inclusion(double eps, double v)
{
    double a = 0;
    double b = v;
    if(b < 1)
    {
        b = 1;
    }
    double x = (a + b)/2;
    int i = 0;

    while(abs(x * x  - v) >= eps)
    {
        i++;

        if(x * x < v)
        {
            a = x;
        }
        else if(x * x > v)
        {
            b = x;
        }

        x = (a + b)/2;

        cout << "x = " << x << '\t' << "i = " << i << '\t' << "a = " << a << '\t' << "b = " << b << endl;
    }

    if(i == 0)
    {
        i++;
    }

    cout << "Inclusion: Calculated the square root of " << v << " = " << x << " in "<< i << " steps." << endl;
}

int main()
{
    double number;
    double epsilon;

    cout << "Enter a positive number:";
    cin >> number;

    while(number < 0)
    {
        cout << "Please enter a positive number.";
        cin >> number;
    }

    cout << "Enter a number between 0 and 1:";
    cin >> epsilon;

    while(epsilon <= 0 || epsilon >= 1)
    {
        cout << "Please enter a number between 0 and 1.";
        cin >> epsilon;
    }

    inclusion(epsilon, number);
    newton_rhapson(epsilon, number);

    return 0;
}
/*    
         
         
                                       
                                                             
             
                     
                                                                  
        
         
                                     
                                             
                                             
                                             
                                                                
                                                               
        
             
                                       
                                                                 
                     
                     
                                                                          
        
         
                                       
                                               
                                                 
                                                 
                                                   
                                                   
                                                   
                                                                
             
             
                     
                     
                                                                     
        
          
                                        
                                        
                                                
                                                  
                                                  
                                                   
                                                   
                                                                 
             
                     
                     
                     
                     
                                                                     
*/


#include <iostream>
#include <cmath>

using namespace std;

//            
//                               
//                       

/*               
                   
             
                                

             
                                

                
                                                             

             
                                                         

              
                                                              
                                                           
                                                                    
                                                                          
                                                                                 
                                                                                     
                                                                                    
                       
*/

void inclusion (double eps, double v)
{
    double a = 0;
    double b = max(1.0,v);
    double x = (a+b)/2.0;

    if (a*a==v||b*b==v)
    //                                                                                                                 
    {
        cout << "Inclusion square root of " << v << " is " << v << "\n\n";
        return;
    }

    int i = 0;
    while (abs(x*x-v)>eps)
    //                                                                      
    {
        if (x*x<v)
        {
            a=x;
        }
        else
        {
            b=x;
        }
        x = (a+b)/2.0;
        i++;

        cout << "i=" << i << "\ta=" << a << "\tx=" << x << "\tb=" << b << "\n";
    }
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << eps << "\n\n";

    return;
}

/*               
                        
             
                        
                             
                                
                  

             
                        
               

                
                           
                                   
                                  
                    

             
                         
                             
                                
                                 
                  

              
                           
                              
                              
                              
                                  
                  

*/

void newton_raphson (double eps, double v)
{
    double x = max(1.0,v);
    int i = 0;

    while (abs(x*x-v)>eps)
    //                                                            
    {
        x = x-(x*x-v)/(2*x);
        i++;
        cout << "i=" << i << "\tx=" << x << "\n";
    }
    cout << "Newton-Raphson square root of " << v << " is " << x << " for epsilon " << eps;
    return;
}

int main()
{
    double v;
    cout << "Give a number: " ;
    cin >> v;
    double eps=0.001;

    //                                                                                               
    //                                                                                    
    inclusion(eps,v);
    newton_raphson(eps,v);
    return 0;
}


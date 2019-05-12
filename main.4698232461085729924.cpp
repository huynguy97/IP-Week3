//                      
#include <iostream>
#include <cmath>
using namespace std;

//                                                                              
/*
                         
           
           
                
                  
                  

                              
              
           
                
                  
                  
*/
//                                                                              

//                                                                              
double inclusion(double epsilon, double v)
{
    double a0 = 0; //                              
    double b0 = max(1.0,v);
    double x0 = (a0+b0)/2;
    int i = 0; //                                       
    if (a0*a0 == v) //                                                    
    {
        return a0;
    }
    else if (b0*b0 == v)
    {
        return b0;
    }
    else
    {
        while (abs(x0*x0-v) > epsilon) //                                                          
        {
            if (x0*x0 < v) //                                  
            {
                a0 = x0;
            }
            else //            
            {
                b0 = x0;
            }
            x0 = (a0+b0)/2; //                                    
            i = i+1; //                             
            cout << i << "\t" << a0 << "\t" << x0 << "\t" << b0 << "\n"; //                         
        }
        return x0;

    }
}

//                                                                              

//                                                                              
double newton_raphson (double epsilon, double v)
{
    double x0 = max(v,1.0); //                                                             
    int i = 0;
    while (abs(x0*x0-v)>epsilon) //                                                            
    {
        x0 = x0 - (x0*x0-v)/(2*x0); //                                                             
        i = i+1; //                                                           
        cout << i << "\t" << x0 << "\n";
    }
    return x0;
}

//                                                                              

//                                                                              
/*
                         
                      
                      
                       
                       
                        

                              
                      
                      
                       
                       
                       
*/
//                                                                              
int main()
{
    double v1, epsilon1, v2, epsilon2; //                            
    cout << "Give a v for exercise 1.2 \n"; //                                                                             
    cin >> v1;                              //                      
    cout << "Give an epsilon for exercise 1.2 \n";
    cin >> epsilon1;
    double opdracht2 = inclusion(epsilon1, v1);
    cout << "Inclusion square root of " << v1 << " is " << opdracht2 << " for epsilon " << epsilon1;
    cout << "\nGive a v for exercise 1.3 \n";
    cin >> v2;
    cout << "Give an epsilon for exercise 1.3 \n";
    cin >> epsilon2;
    double opdracht3 = newton_raphson(epsilon2, v2);
    cout << "Newton-Raphson square root of " << v2 << " is " << opdracht3 << " for epsilon " << epsilon2;
}


#include <iostream>
#include <math.h>                           //                                                                                        
                                            //                                                                         
using namespace std;

//                             

double v;
double e;

/*
                                                                 
                                                                 
                                                                 
                                                                 
                                                                 

                

                           
                                   

                      
                     
                     

                

                           
                                

                      
                     
                     

                  

                              
                                   

                      
                     
                     

                

                               
                                    

                      
                     
                     
                 

                               
                                    

                      
                      
                     

               
                                                                       
*/

void assign_values ()
{
    cout << "Give v: ";
    cin >> v;
    cout << "Give epsilon: ";
    cin >> e;
}

/*
                                                                 
                                                                 
                                                                 
                                                                 
                                                                 
*/
void inclusion (double e, double v)
{
    double a = 0;
    double b = std::max(v,1.0);

    if (v == a*a){
        cout << "\nInclusion square root of " << v << " is " << a;
        cout << "\ni: N/A\tx_i: N/A\ta: " << a << "\tb: " << b << "\n";
        return;
    }
    else if (v == b*b){
        cout << "\nInclusion square root of " << v << " is " << b;
        cout << "\ni: N/A\tx_i: N/A\ta: " << a << "\tb: " << b << "\n";
        return;
    }

    for (int i = 0; i <100; i++){

        double x_i = (a+b)/2;

        /*
                                                                                                                                                                    
                            
                            
        */

        if (fabs(x_i * x_i - v) <= e){                                                           //                                                                                                 

            cout << "\n\nInclusion square root of " << v << " is " << x_i << " for epsilon " << e;
            cout << "\ni: " << i << "\tx_i: " << x_i << "\ta: " << a << "\tb: " << b << "\n";
            return;
        }

        else if (x_i * x_i < v)
            a = x_i;

        else
            b = x_i;
    }
}

/*
                                                                 
                                                                 
                                                                 
                                                                 
                                                                 
*/
void newton_raphson (double e, double v)
{
    double x_i = std::max(v,1.0);

    for (int i = 0; i < 100; i++){

        //                                                                                                                                                

        x_i = x_i - (x_i * x_i - v) / (2 * x_i);

        if (fabs(x_i * x_i - v) <= e){

            double x_n = x_i;

            cout << "\n\nNewton-Raphson square root of " << v << " is " << x_n << " for epsilon " << e;
            cout << "\ni: " << i << "\tx_i: " << x_i << "\n";
            return;
        }
    }
}

int main()
{
    assign_values();
    inclusion(e, v);
    newton_raphson(e, v);
}


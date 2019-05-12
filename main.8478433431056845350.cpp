#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

double maximum(double a, double b){
    if(a > b){
        return a;
    } else return b;
}

//                         

/*
              

                                                                                                         

              

                                                                                                         

                

                                                                             
                                                                          
                                                                                                
                                                                                                  
                                                                    

             

                                                                                                                                        

            

                                                             

                      
                      
                      
                      
                      
                          
            

*/
double inclusion(double e, double sq){
    double a = 0;
    double b = maximum(1, sq);
    if(fabs(a*a-sq) <= e){
        cout << "Inclusion square root (a) of " << sq << " is " << a << "\n" << endl;
        return a;
    } else if(fabs(b*b-sq) <= e){
            cout << "Inclusion square root (b) of " << sq << " is " << b << "\n" << endl;
            return b;

    } else{
        double x =(a + b)/2;
        if(fabs(x*x-sq) <= e){
            cout << "Inclusion square root (x) of " << sq << " is " << x << " for epsilon " << e << "\n" << endl;
            return x;
        }
        int iteration = 0;
        while(fabs(x*x-sq) >= e){
            iteration++;
            cout << "\t" << "x" << iteration << " = " << x
            << "\t" << "a" << iteration << " = " << a
            << "\t" << "Iteration: " << iteration << "\n" << endl;
            if(x*x < sq){
                a = x;
            } else {
                b = x;
            }
            x = (a + b)/2;
        }
        cout << "Inclusion square root of " << sq << " is " << x << " for epsilon " << e << "\n" << endl;
        return x;
    }

}

/*
              

                                                                                               

              

                                                                                        
                                                                                                                
                                                                                                        
                              

                

                                   

        
                             
                                    

                                                               

             

                                                                                    

            

                       

      
                     
                       

                                               

*/

double newtonRaphson(double e, double sq){
    double x = sq/2;
    int iteration = 0;

    while(fabs(x*x-sq) >= e){
        iteration++;
        cout << "\t" << "x" << iteration << " = " << x << "\t" << "Iteration: " << iteration << "\n" << endl;
        x = 0.5*(x + sq/x);
    }
    cout << "Newton-Raphson square root of " << sq << " is " << x << " for epsilon " << e << "\n" << endl;
    return x;

}

int main()
{
    for(double i = 0; i < 13; i++){
        inclusion(0.1, i);
        newtonRaphson(0.1, i);
    }
    return 0;
}


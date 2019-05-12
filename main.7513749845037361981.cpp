/*                                                                    
                                                                      
 */

#include <iostream>
#include <cmath>

using namespace std;

/*                                                                            
                                                     
                                                                             
                                                                      
                                                                               
           
 */
void newton_raphson(double epsilon, double v) {
    int iter = 0;
    double x = v;

    if (x > 0  && x < 1) {
        x = 1;
    }

    while (abs(x*x-v) > epsilon) {
        x = x-(x*x-v) / (2*x);
        iter++;
    }

    cout << "Newton_raphson square root of " << v << " is " << x
    << " for epsilon " << epsilon << " in " << iter
    << " many iterations." << endl;

    return;
}

/*                                                                 
                                                                  
                                                                    
                                                                            
                                                                    
                 
 */
void inclusion(double epsilon, double v) {
    double x = 0;
    double a = 0;
    double b = v;
    int iteration = 0;

    if (v > 0  && v < 1) {
        b = 1;
    }

    if ((a*a) == v) {
        cout << "Inclusion square root of v is: " << a << endl;
        return;
    } else if ((b*b) == v) {
        cout << "Inclusion square root of v is: " << b << endl;
        return;
    } else {
        while (abs(x*x - v) > epsilon) {
            x = (a+b) / 2;

            if (x*x > v)
                b = x;
            else
                a = x;

            iteration++;
        }

        cout << "Inclusion square root of " << v << " is " << x
        << " for epsilon " << epsilon << " in " << iteration
        << " many iterations." << endl;
    }

    cout << "a:" << a << endl << "b:" << b << endl;
    return;
}

int main() {
    double epsilon = 0.01;
    double v;

    cout << "Which number do you want to approximate the square of?" << endl;
    cin >> v;
    inclusion(epsilon, v);
    newton_raphson(epsilon, v);

    return 0;
}

/*                           

                                  

                  
                                                    
                                                    
                                                                  
                                                                   
                                                                  

                       
                                        
                                        
                                         
                                          
                                         
*/


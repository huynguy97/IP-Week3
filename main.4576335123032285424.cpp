/*
                                            
                                              
*/

#include <iostream>
#include <cmath>

#define max(a, b) a > b ? a : b

#define EPSILON 0.0000000000001

using namespace std;

double inclusionSqrt(double v) {
    if (v == 0 || v == 1) { //                                                                      
        cout << "Inclusion square root of " << v << " is " << v << endl;
        return v;
    }

    double a = 0, b = max(v, 1), x;
    int i = 0;
    do {
        x = (a + b) / 2;
        cout << i << '\t' << a << '\t' << x << '\t' << b << endl;
        if (x * x < v) {
            a = x;
        } else {
            b = x;
        }
        ++i;
    } while (abs(x * x - v) > EPSILON);

    cout << "Took " << i << " iterations." << endl;
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << EPSILON << "." << endl;

    return x;
}

double newtonRaphsonSort(double v) {
    double x = max(v, 1);
    int i = 0;
    while (abs((x*x)-v) > EPSILON) {
        cout << i << '\t' << x << endl;
        x = (x-((x*x-v)/(2*x)));
        i = ++i;
    }

    cout << "Took " << i << " iterations." << endl;
    cout << "Newton-raphson square root of " << v << " is " << x << " for epsilon " << EPSILON << "." << endl;

    return x;
}

int main() {
    /*
                            
                
                
                                                        
                   
                                                          
     */

    double values[] = { 0, 1, 0.51283089, 31 * 31, 73.95083122 };

    for (double v : values) {
        inclusionSqrt(v); //         

        newtonRaphsonSort(v); //         
    }

    /*
                                                                    

                                    
                        
                                                                      

                                    
                       
                                                            

                        
                                                                     
                       
                                                                          

                        
                                                          
                        
                                                               

                        
                                                                   
                       
                                                                        
     */

    return 0;
}

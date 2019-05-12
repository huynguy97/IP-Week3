#include <iostream>
#include <cmath>

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

using namespace std;

void inclusion(double v, double e) {
    double a = 0;
    double b = 1;
    double x;
    int i = 0;
    if(v > 1) {
        b = v;
    }
    if(a * a == v) { //                                                                   
        x = a;
    } else if(b * b == v) {
        x = b;
    } else { //                                           
        x = (a + b) / 2;
        cout << "i\ta\tx\tb" <<endl;
        cout << "---------------------------" << endl; //              
        cout << i << "\t" << a << "\t" << x << "\t" << b << "\t" << endl;
        while (abs(x*x - v) > e) {
            if(x * x > v) {
                b = x;
            } else {
                a = x;
            }
            x = (a + b) / 2;
            i++;
            cout << i << "\t" << a << "\t" << x << "\t" << b << "\t" << endl;
        }
    }
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl << endl;
}

void newton_raphson(double v, double e) {
    int i = 0;
    //                      
    double x = 1;
    if(v > 1) {
        x = v;
        cout << "i\tx" << endl;
        cout << "---------------------------" << endl; //              
    }
    while(abs(x*x - v) > e) {
        cout << i << "\t" << x << endl;
        x = x - ((x*x - v) / (2*x));
        i++;
    }
    cout << i << "\t" << x << endl;
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl << endl;
}

int main()
{
    newton_raphson(0, 0.1);
    newton_raphson(1, 0.1);
    newton_raphson(0.25, 0.1);
    newton_raphson(9, 0.1);
    newton_raphson(15, 0.1);
    inclusion(0, 0.1);
    inclusion(1, 0.1);
    inclusion(0.25, 0.1);
    inclusion(9, 0.1);
    inclusion(15, 0.1);
    return 0;
}


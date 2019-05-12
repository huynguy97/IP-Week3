#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

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

void inclusion(double e, double v) {
    int i = 0;
    double a = 0;
    double b = max(1.0, v);
    double x = (a + b)/2;

    cout << "i\ta\tx\tb\n" << endl;
    //                                          
    while(abs(x * x - v) > e) {
        cout << i << "\t" << a << "\t" << x << "\t" << b << endl;
        if(x * x <= v) {
            a = x;
        } else {
            b = x;
        }
        x = (a + b)/2;
        i++;
    }
    cout << i << "\t" << a << "\t" << x << "\t" << b << endl;
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << "\n\n";
}

void newton_raphson(double e, double v) {
    int i = 0;
    double x = max(1.0, v);

    cout << "i\tx\n" << endl;
    //                                          
    while(abs(x * x - v) > e) {
        cout << i << "\t" << x << "\t" << endl;
        x = x - (x * x - v)/(2 * x);
        i++;
    }
    cout << i << "\t" << x << "\t" << endl;
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << "\n\n";
}

int main() {
    double e = 0.1;
    double v;
    char answer = 'y';
    //                                         
    while(answer == 'y') {
        cout << "Number: ";
        cin >> v;

        inclusion(e, v);
        newton_raphson(e, v);

        cout << "Do another one? (y) ";
        cin >> answer;
    }

    return 0;
}


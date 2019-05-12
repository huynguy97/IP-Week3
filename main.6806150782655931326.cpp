/*
            
               	         
                         
          
*/
/*                   */
/*

                   

                                  
                                    
                        
                     
                          
                           
                           

                                 

                                  
                                   
                     
                     
                     
                     
                     

*/

#include <iostream>

using namespace std;

double abs(double x) {
    if (x < 0) {
        x *= -1;
    }
    return x;
}

void inclusion(double e, double v) {
    cout << "i\ta\tx\tb\n"; //                  
    int iterations = 0;
    double a = 0, b = max(v, 1.0);
    double out;
    if (a * a == v) {
        out = a;
    } else if (b * b == v) {
        out = b;
    } else {
        double x;
        do {
            x = 0.5 * (a + b);
            cout << iterations << "\t" << a << "\t" << x << "\t" << b << "\n";
            iterations++;
            if ((x * x) < v) {
                a = x;
            } else {
                b = x;
            }
        } while (abs(x * x - v) > e);
        out = x;
    }
    cout << "Inclusion square root of " << v << " is " << out << " for epsilon " << e << ".\n";
    return;
}

void newton_raphson(double e, double v) {
    int iterations = 0;
    double x = max(v, 1.0);
    cout << "i\tx\n0\t" << x << "\n"; //                   
    while (abs(x * x - v) > e) {

        x -= (x * x - v)/(2 * x);
        iterations++;
        cout << iterations << "\t" << x << "\n";
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << ".\n";
    return;
}

int main() {
    bool running = true;
    double e;
    double input;
    int algorithmChoice;

    cout << "Number Squarer.\n\nWhat algorithm to use?\n0:\tInclusion\n1:\tNewton-Raphson\n> ";
    cin >> algorithmChoice;
    cout << "\nEnter the error margin epsilon:\n> ";
    cin >> e;
    cout << "\nEnter -1 to quit\n";
    while (running) {
        cout << "\nInput number to square:\n> ";
        cin >> input;
        if (input == -1) {
            running = false;
        } else {
            switch (algorithmChoice) {
            case 0:
            default:
                inclusion(e, input);
                break;
            case 1:
                newton_raphson(e, input);
                break;
            }
        }
    }
    return 0;
}


#include <iostream>
#include <math.h>

using namespace std;

double abs(double x){
    if(x < 0){
        return x*-1;
    }
    return x;
}
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
double inclusion(double e, double v){
    double A_I = 0;
    double B_I = v;
    double X_I = (0 + v) / 2;
    int I = 0;

    if(v < 1){
        B_I = 1;
    }

    if((A_I * A_I) - v == 0){
        cout << "Inclusion of square root of v is: " << A_I << endl;
        return 0;
    } else if((B_I * B_I) - v == 0){
        cout << "Inclusion of square root of v is: " << B_I << endl;
        return 0;
    }
    while(true){
        I++;
        if(abs((X_I * X_I) - v) <= e){
            cout << "Inclusion square root of v is xn for epsilon e: " << X_I << endl;
            return X_I;
        } else {
            if(X_I * X_I < v){
                A_I = X_I;
            } else {
                B_I = X_I;
            }
        X_I = ((A_I + B_I) / 2);
        }
        cout << I << "\t" << A_I << "\t" << X_I << "\t" << B_I << endl;
    }
}

//                            
//           
//           
//           
//           
//           
//                              
double newton_raphson(double e,double v){
    double X_I = 1;
    int I = 1;
    while(true){
        X_I =  X_I - (((X_I*X_I)-v) / (2 * X_I));
        cout << I << "\t" << X_I << endl;
        if(abs((X_I*X_I) - v) <= e){
            cout << "Newton_raphson square root of v is xn for epsilon e: " << X_I << endl;
            return 0;
        }
        I++;
    }
}

int main()
{
    double param1 = 0;
    double param2 = 0;
    cout << "Give two parameters for the function Inclusion and Newton Raphson : " << endl;
    cin >> param1 >> param2;
    inclusion(param1, param2);
    cout << endl;
    newton_raphson(param1, param2);
}


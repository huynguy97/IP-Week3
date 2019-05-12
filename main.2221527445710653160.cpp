#include <iostream>
#include <math.h>

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
//                                      
//                                                                               
//      

using namespace std;

double result;
double result2;
double x;
double epsilon = 0.01; //                                                
int I;
int N;

void inclusion (double v, double a, double b)
{
    b = v;
    a = 0.0;
    I = 1;

    if ((a * a == v)) {
        result = a;

    } else if ((b * b == v)) {
        result = b;

    } else {
        x = ((a+b)/2);
        while ((fabs(x * x - v)) > epsilon) {
            if ((x * x) < v) {
                a = x;
            } else {
                b = x;
            }
            x = ((a+b)/2);
            I++;

        }
        result = x;
    }
}

void newton_raphson (double v, double f,double derivF)
{
     x = 1.0;
     N = 1;

    while ((fabs(x * x - v)) > epsilon) {
        x = x - (((x*x) - v)/(2.0 * x));
        N++;
    }

    result2 = x;

}

int main(double v, double f,double derivF, double a, double b)
{
cout << "What is square root of: ";
cin >> v;
    if (v < 0) {
        cout << "that can not" <<  endl;
    } else {
    inclusion(v, a, b);
    newton_raphson(v, f, derivF);
    cout << "The Inclusion square root of v is " << result << " for epsilon " << epsilon << endl;
    cout << "Newton_raphson square root of v is " << result2 << " for epsilon " << epsilon << endl;
    cout << "Inclusion did " << I << " approximations" << endl;
    cout << "Newton did " << N << " approximations" << endl;
    }
    return main(v, f, derivF, a, b);
}


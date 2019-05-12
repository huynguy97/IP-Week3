#include <iostream>
//                            
//                          

//                             
//                                                                      

//                   
int main() {
    double E = 0.1;
    double v;
    double x = 0.0;
    double formula;
    double function;
    double derfunction;
    int a = 0;
    int b = 0;
    int c = 0;
    int part;
    std::cout << "Choose the assignment you want to see 2 = inclusion and 3 = Newton-Raphson: ";
    std::cin >> part;
    if (part == 2) {
        std::cout << "Enter a number to take the square root of: ";
        std::cin >> v;
        while (c <= v) {
            c = b * b;
            b++;
        }
        b--;
        a = b - 1;
        x = (a + b) / 2.0;
        formula = (abs(x * x - v)) * 1.0;
        if (v == a * a) {
            std::cout << "Inclusion square root of ";
            std::cout << v;
            std::cout << " is: ";
            std::cout << a;
        } else if (formula <= E) {
            std::cout << "Inclusion square root of ";
            std::cout << v;
            std::cout << " is: ";
            std::cout << x;
            std::cout << " for epsilon 0.1";
        } else if (v <= x * x) {
            b++;
            std::cout << "(";
            std::cout << x;
            std::cout << ",";
            std::cout << b;
            std::cout << ")";
        } else {
            a++;
            std::cout << "(";
            std::cout << x;
            std::cout << ",";
            std::cout << a;
            std::cout << "}";
        }
    }

//                         
    else if (part == 3){
        std::cout << "Enter a number to take the square root of: ";
        std::cin >> v;
        if (v == 0) {
            std::cout <<  "Newton_raphson square root of 0 is 0 for epsilon 0.1";
        }
        else {
            while (formula <= E) {
                x=x+0.1;
                formula=x*x-v;
            }
            x=x-0.1;
           std::cout << "Newton_raphson square root of ";
           std::cout << v;
           std::cout << " is ";
           std::cout << x;
           std::cout << " for epsilon 0.1";
        }

    }
    else {
        return 0;
    }
}

//                                   
//                                                                                       
//                                                                                     
//                                                                                       
//                                                                                    
//                                                                                                                                                                              

#include <iostream>

using namespace std;

/*

                       
                            

              
          

                                                                                            
                                                                                                         
                                                                                                       
                                                                                                                                     

       

                                                                                                       
                                                                                                   
                                                                                                       
                                                                                                            

              
                                      
                                                                         
                                       
                                                                         
                                       
                                                                           
                                       
                                                                         
                                       
                                                                          

                                      
                                             
                                      
                                             
                                      
                                                
                                       
                                                
                                       
                                                   

*/

double abs(double original){
    if(original >= 0)
        return original;

    return -1 * original;
}

void inclusion (double e, double v){
    double a = 0;
    double b = (v >= 1) ? v : 1;

    string defaultMessage = "Inclusion square root of v is ";

    if(a * a == v){
        cout << defaultMessage << a << endl;
        return;
    }
    else if(b * b == v){
        cout << defaultMessage << b << endl;
        return;
    }

    double solution = v;
    int i = 0;

    while(solution == v){
        double x = (a + b)/2;

        //                                                         

        if(abs(x * x - v) <= e){
            cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
            solution = x;
        }
        else if(x * x < v){
            b += 0.5 * e;
        }
        else{
            a -= 0.5 * e;
        }

        i++;
    }
}

void newton_raphson (double e, double v){
    double a = 0;
    double x = v;

    double solution = v;
    int i = 0;

    while(solution == v){
        a = x - (x * x - v)/(2 * x);

        //                               

        if(abs(a * a - v) <= e){
            cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
            solution = x;
        }
        else{
            x -= e;
        }

        i++;
    }
}

int main()
{
    float v = -1;

    do{
        cout << "Enter positive number to find its square root" << endl;
        cin >> v;
    }
    while(v < 0);

    inclusion(0.01, v);
    newton_raphson(0.01, v);

    return 0;
}


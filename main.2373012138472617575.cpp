#include <iostream>
#include <math.h>
using namespace std;
double var;
/*
                  
             
                          
                          
                                                           
                                       
                                       
                                                           
                                       
                                         
                                         
                                           
                                           
                                             
                                             
                                             
                                                            
                                        
                                          
                                          
                                          
                                            
                                            
                                             
                                             
                                             
                                             
                                             
                  
         
                                       
                                       
                                       
                     
                       
                         
                                       
                         
                         
                         
                         
           
                                                                                                                         
                                                                                  

*/
void inclusion(double e, double v){
    double a = 0.0;
    double b;
    double i = 0;
    if(v < 1){
        b = 1;
    }
    else{
        b = v;
    }
    double x = (a+b)/2;
    double kill = 0;

    if(a*a == v || b*b == v){
        kill = v;
        cout<<"Inclusion square root of v is " << v << endl;
    }

    for(i; kill != v ; i = i + 1){
        x = (a + b)/2;

        cout << i << "\t" << a << "\t" << x << "\t" << b << endl;
        if(fabs((x*x-v))<= e){
            cout<<"Inclusion square root of " << v << " is " << x << " for epsilon " << e << " calculated in amount of steps: " << i  << endl;
            kill = v;
        }

        else if(x*x < v){
            a = x;
        }
        else if(x*x > v){
            b = x;
        }

    }

}

void newton(double e, double v){
    double kill = 0;    //                             
    double x = 0;
    double i = 0;
    if(v < 1){
        x = 1;
    }
    else{
        x = v;
    }

    for(i; kill != v; i = i + 1){
        x = x - ((x*x - v)/(2*x));
        cout << i << "\t" << x << endl;
        if(fabs(x*x-v <= e)){
            cout << "Newton_raphson square root of " << v <<" is " << x << " for epsilon " << e << " calculated in amount of steps: " << i << endl;
            kill = v;
        }

    }

}
int main() {
    do{
    cout << "\nInput a positive double: \n";
    cin >> var;
    inclusion(0.1, var);
    newton(0.1, var);
    } while (var > -1);
}


#include <iostream>
#include <cmath>

using namespace std;

/*
            
                       
                            
*/

 void inclusion (double e, double v) {
    int counter = 0 ;
    double a = 0 ;
    double b = 0 ;

    if (v >= 1){
        b = v ;
    }
    else {
        b = 1 ;
    }

    double x = (a+b)/2 ;

    if (a*a == v) {
        cout << "Inclusion square root of " << v << " is " << a ;
        cout << "\ni is: " << counter << "\na is: " << a << "\nx is: " << x << "\nb is: " << b ;
    }
    else{
        if (b*b == v) {
            cout << "Inclusion square root of " << v << " is " << b ;
            cout << "\ni is: " << counter << "\na is: " << a << "\nx is: " << x << "\nb is: " << b ;
        }
        else {
            while (fabs(x*x-v)>e) {
                if (x*x <v) {
                    a = x ;
                    x = (a+b)/2 ;
                    counter++ ;
                }
                else {
                    b = x ;
                    x = (a+b)/2 ;
                    counter++ ;
                }
            }
            cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e ;
            cout << "\ni is: " << counter << "\na is: " << a << "\nx is: " << x << "\nb is: " << b ;
        }
    }
}

/*
                      
                                          
                                          
                                                                     
                                                                   
                                                                   
*/

void newton_raphson (double e, double v){
    int counter = 0 ;
    double x = 0 ;
    if (v > 1 || v == 0){
        x = v;
    }
    else {
        x = 1 ;
    }

    while (x*x - v > e) {
        x = x - ((x*x) - v)/(2*x) ;
        counter++ ;
    }
    cout << "\nNewton_raphson square root of " << v << " is " << x << " for epsilon " << e ;
    cout << "\ni is: " << counter << "\nx is: " << x ;
}

/*
                           
                                                                 
                                                                 
                                                                          
                                                                        
                                                                        
*/

/*
                                     
                                     
                    
                    
                    
                    
                    

                                               
*/

int main()
{
    double v;
    double e;
    cout << "Please enter a positive number: " ;
    cin >> v ;
    cout << "Please enter a number e for 0 < e << 1: ";
    cin >> e ;
    inclusion(e, v);
    newton_raphson(e, v);
    return 0;
}


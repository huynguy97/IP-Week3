#include <iostream>

using namespace std;

/*
                               

       

                         
                                                           
                                                           
                                                       
                                                       
                                                                                                      
                                                                     
                                                                    

                              
                                               
                                               
                                                                 
                                                               
                                                               

       

                  

               
                         
               
                         
                 
                               
                               

               
                                        
                                         
                                         
                                           
                                           
                                             
                                             

                
                                    
                                         
                                         
                                           
                                           
                                             
                                             
         

                        

               
                 

               
                 

                 
                    

               
                 
                   
                       
                       

                
                 
                       
                       
                       

                                                                         
                                                         

*/

double absolute(double neg){
    if (neg < 0){
        return -neg;
    }
    else{
        return neg;
    }

}

void newton_raphson(double e, double v){
    double x = max(v, 1.0);
    while ( absolute(x*x - v) > e) {
        x = x - ((x*x - v) /  ( 2*x));
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
}

void inclusion (double e, double v){
    double a = 0;
    double b = max(v, 1.0);
    double result = 0;

    if (a * a == v){
        result = a;
        cout << "Inclusion square root of " << v << " is " << result << endl;
    }
    else if (b * b == v){
        result = b;
        cout << "Inclusion square root of " << v << " is " << result << endl;
    }
    else{
        double x = (a + b) / 2;
        while ( absolute(x*x - v) > e) {
            x = (a + b) / 2;
            if ( x * x <= v){
                a = x;
            }
            else{
                b = x;
            }
        }
        result = x;
        cout << "Inclusion square root of " << v << " is " << result << " for epsilon " << e << endl;
    }
}

int main(){
    cout << "Welcome to the most fabulous square root calculator on earth!" << endl
    << "First, enter the method you want to use to start calculating a square root" << endl << "1. The inclusion method\n2. The Newton-Raphson method" << endl;

    int choice  = 3;
    cin >> choice;

    double number = 0;
    cout << "Next, we want to know the number of which you want to know the root:\n";
    cin >> number;

    double error = 0;
    cout << "Finally, we want to the rate of error (0 < e << 1) you deem correct for your needs.\n";
    cin >> error;

    switch (choice){
        case 1: inclusion(error, number);
                break;
        case 2: newton_raphson(error, number);
                break;
        case 3: break;
    }

    return 0;
}


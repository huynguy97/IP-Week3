using namespace std;
#include <iostream>
#include <cmath> //                                                              

//                            
//                             

using namespace std;

void newton_raphson(double e, double v){
    double x = 1;                               //                                                                                                                                                                                        
    while(abs(x * x - v) >= e){                 //                                                                                                       
        x = x - (x * x - v) / (2 * x);          //                                                     
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epilon " << e << endl;    //                
}

void inclusion(double e, double v) {
    double a = 0;
    double b = max(1.0,v);
    double x;
    if (a * a == v) {
        cout << "Inclusion square root of " << v << " is " << a << endl;
        return;
    }
    if (b * b == v) {
        cout << "Inclusion square root of " << v << " is " << b << endl;
        return;
    }

    do {
        x = (a + b) / 2.0;
        if (x * x < v) {
            a = x;
        }else {
            b = x;
        }
    } while (abs((x * x) - v) >= e);
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e <<"." << endl;
    return;
}

int main(){
    const double ERROR_MARGIN = 0.003;
    double number;
    char method;
    cout << "Welcome to the best root-calculating program ever!" << endl;
    cout << "Enter a number of whom the root is to be calculated:" << endl;
    cin >> number;
    cout << "Choose the method to be used (type 1 or 2):\n[1]: Inclusion\n[2]: Newton-Raphson" << endl;
    cin >> method;
    switch (method) {
        case '1':
            inclusion(ERROR_MARGIN,number);
        break;
        case '2':
            newton_raphson(ERROR_MARGIN,number);
        break;
        default:
            cout << "The method you entered (" << method << ") was not one of the possibilities!" << endl;
        break;
    }
    return 0;
}

/*

                                                                      

         
                          
                                                                                     
             

         
                          
                                                                                     
             

           
                          
                            
                             
                

         
                          
                          
                          
                          
                            
                             
                              
                               
                 

          
                          
                           
                          
                            
                             
                              
                               
                                
                                
                                
                                
                   

                                                                           

         
          
          
          
            
             
              
               
                  

         
          
          
             

           
          
          
             
                

         
          
          
          
            
                
                
                   

          
          
          
             
                
                
                
                   

*/


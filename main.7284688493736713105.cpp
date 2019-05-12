
/*
                                              
                                              

                            

            
            
          
            
          

                                  

                 
 
                             
                                                      
                                      
                                       
                 
   
                                      
                                                                     
                                      
                                     
                 
 
                             
                                                      
                             
                              
                 
 
                                   
                                                                    
                                   
                                    
                 
  
                              
                                              
                              
                              

*/

#include <iostream>
#include <cmath>

using namespace std;

double E = 0.00001;
double number, x, v;

void done(double result){
    cout << "The square root of " << v << " equals " << result << endl;
}

void inclusion(double e, double v){
    int count = 0;

    double a_0 = 0;
    double b_0;

    if(v > 1)
        b_0 = v;
    else
        b_0 = 1;

    if(a_0 * a_0 == v){
        done(a_0);
        cout << "Inclusion:\ti = " << count << "\tai = " << a_0 << "\txi = null" << "\tbi = " << b_0 << endl;
    }else if(b_0 * b_0 == v){
        done(b_0);
        cout << "Inclusion:\ti = " << count << "\tai = " << a_0 << "\txi = null" << "\tbi = " << b_0 << endl;
    }else{
        x = (a_0 + b_0) / 2;
        double a = a_0, b = b_0;
        count++;

        while(!(abs(x * x - v) <= e)){
            if(x * x < v)
                a = x;
            else
                b = x;
            x = (a + b) / 2;
            count++;
        }
        done(x);
        cout << "Inclusion:\ti = " << count << "\tai = " << a << "\txi = " << x << "\tbi = " << b << endl;
    }
}

void newton_raphson(double e, double v){
    int count = 0;

    if(v > 1)
        x = v;
    else
        x = 1;

    while(!(abs(x * x - v) <= e)){
        x = x - (x * x - v) / (2*x);
        count++;
    }
    done(x);
    cout << "Newton-Raphson:\ti = " << count << "\txi = " << x << endl;
}

int main(){

    while(true){
        cout << "Enter you number:" << endl;
        cin >> v;

        inclusion(E, v);
        newton_raphson(E, v);
    }

    return 0;
}


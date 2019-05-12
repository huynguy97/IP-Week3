#include <iostream>
#include <cmath>

//                                                

/*                
                    
             
                    
             
                      
                             
                             
                    
                              
                             
                       
                              
                                
                                
                                
                                  
                                  
                                  
                                   
                                   
*/

/*               
                                                                             
 */
int counter_i = 0;
int counter_n = 0;
double input_v;                  //     
double a = 0;
double b;
double eps = 0.1;            //       
double x;

void inclusion(double e, double v) {
    if (a*a == v) {
        std::cout << "Inclusion square root of " << v << " is " << a << " for epsilon " << e << "\n";
        return;
    }

    if (v > 1) {
        b = v;
    } else {
        b = 1;
    }
    if (b * b == v) {
        std::cout << "Inclusion square root of " << v << " is " << b << " for epsilon " << e << "\n";
        return;
    }

    while(fabs((x*x)-v) > e){
        counter_i++;
        x = (a + b) / 2;
        std::cout << counter_i-1 << "\t" << a << "\t" << x << "\t" << b << "\n";
        if (fabs((x * x) - v) <= e) {
            std::cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << "\n";
            return;
        }
        else {
            if (x * x < v) {
                a = x;
            } else {
                b = x;
            }
        }
    }
}

double f(double x,double v){
    return((x*x)-v);
}
double ff(double x){
    return(2*x);
}

void newton_raphson(double e, double v){
if(v >= 1){
    x = v;
}
else{
    x = 1;
}

while(fabs((x*x)-v) > e){
    std::cout << counter_n << "\t" << x << "\n";
    counter_n++;
    x = x - (f(x,v)/ff(x));
}
std::cout << "Newton_Raphson square root of " << v << " is " << x << " for epsilon " << e << "\n";
}

int main(){
std::cout << "give value of v \n";
std::cin >> input_v;
inclusion(eps,input_v);
newton_raphson(eps,input_v);
}


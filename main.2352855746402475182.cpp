#include <iostream>
#include <cmath>

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
void inclusion (double e, double v){
    double a = 0;
    double b;
    double xi;
    double xis = (xi * xi);
    double q = (fabs(xis - v));

    if(v < 1){
        b = 1;
    }
    else if(v > 1){
        b = v;
    }
    //                                                         
    xi = ((a + b) / 2);
    //                                      
    if ((a * a) == v){
        std::cout << a;
        std::cout << "Inclusion square root of " << v << " is: " << a;
        return;
        //                                                                                      
        //                                
    }
    if ((b * b) == v){
        std::cout << b;
        std::cout << "Inclusion square root of " << v << " is: " << b;
        return;
        //                                
    }
    while (q > e){
        xi = ((a + b) / 2);
        xis = (xi * xi);
        q = (fabs(xis - v));

        if (xis < v){
            a = xi;
        }
        else{
            b = xi;
        }
        //                                                                                  
    }
        std::cout << "Inclusion square root of " << v << " is " << xi  << " for epsilon " << e ;
}

void newton_raphson (double e,double v){
    double x;
    if (v >= 1) {
        x = v;
    }
    else {
        x = 1;
    }
    if (v == 0 || v == 1){
        std::cout << "The root of the number you entered is the number you entered";
    }
    while(fabs((x * x) - v) > e){
        x = x - ((x * x -v) / ( 2 * x));
        //                       
        if(fabs((x * x) - v) <= e){
            std::cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << "\n";
        }
    }

}

int main() {
    double e = 0.1;
    double v;
    std::string answer;
    std::cout << "What do you want to do? (Inclusion / Newton) \n";
    std::cin >> answer;
    if(answer == "Inclusion"){
        std::cout << "Enter a positive number you want to see the root of: \n";
        std::cin >> v;
        inclusion(e, v);;
    }
    else if(answer == "Newton"){
        std::cout << "Enter a positive number v: \n";
        std::cin >> v;
        newton_raphson(e, v);
    }
    else{
        return 0;
    }

}

//                                                                                                                               
//                                                                                                            
//                                       


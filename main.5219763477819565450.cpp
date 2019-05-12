//                                               
#include <iostream>
#include <cmath>
using namespace std;
//                                                                   
//                                                                                                
/*                 
        
                                                                                          
                                                               
        
                                                                                           
                                                                                     
            
                                                                                                             
                                                                                                        
         
                                                                                                
                                                                                                   
         
                                                                                           
                                                                                                    
                                                              
*/
void inclusion(double e, double v){
    double a=0;
    double b=max(v,1.0);
    if(a*a==v){
        cout << "Inclusion square root of " << v << " is " << a << "." << endl;
        return;
    }
    if(b*b==v){
        cout << "Inclusion square root of " << v << " is " << b << "." << endl;
        return;
    }
    double x=0.5;
    int    i=0;
    //                                                                  
    while(!(abs(x*x-v)<=e)){
        cout << i << '\t' << a << '\t' << x << '\t' << b << endl;
        if(x*x<v){
            a=x;
        }else{
            b=x;
        }
        x=(a+b)/2;
        i++;
    }
    cout << i << '\t' << a << '\t' << x << '\t' << b << endl;
    //                                             
    cout << "Inclusion square root of " << v << " is " << x;
    cout << " for epsilon " << e << "." << endl;
}
void newton_raphson(double e, double v){
    int i=0;
    double x=max(1.0,v);
    //                                                                  
    while(!(abs(x*x-v)<e)){
        cout << i << '\t' << x << endl;
        x=x-((x*x-v)/(2*x));
        i++;
    }
    cout << i << '\t' << x << endl;
    //                                             
    cout << "Newton_raphson square root of " << v << " is " ;
    cout<< x << " for epsilon " << e << "." << endl;
}
int main()
{
    inclusion(0.1,0);
    newton_raphson(0.1,0);
    inclusion(0.1,1);
    newton_raphson(0.1,1);
    inclusion(0.1,0.345);
    newton_raphson(0.1,0.345);
    inclusion(0.1,49);
    newton_raphson(0.1,49);
    inclusion(0.1,47);
    newton_raphson(0.1,47);
    //                                                                       
    return 0;
}


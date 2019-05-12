#include <iostream>
#include <cmath>

//                        
//                      

using namespace std;

void inclusion(double e, double v){
    double a =0;
    double b = v;
    if(v<1)b=1;
    int i=0;

    if(a*a==v){cout <<"Inclusion square root of v is " << a;return;}

    if(b*b==v){cout <<"Inclusion square root of v is " << b;return;}

    double x=(a+b)/2;
    cout << "i\t ai\t xi \t bi\n";

    while(abs(x*x-v)>e){
        i++;
        if(x*x<v){
            a=x;
        }else{
            b=x;
        }
        x = (a+b)/2;
        cout << i << "\t"<< a << "\t"<< x << "\t"<< b << "\n";
    }
    cout << "\nInclusion square root of v is " << x << " for epsilon " << e;
}

void newton_raphson(double e, double v){
    double x = v;
    if(v<1)x=1;
    int i =0;

    cout << "i\t xi\n";

    while(abs(x*x-v)>e){
        i++;
        x -= (x*x-v)/(2*x);
        cout << i << "\t" << x << "\n";
    }
    cout << "\nNewton_raphson square root of " << v << " is " << x << " for epsilon " << e;

}

int main()
{
double value;
cin >> value;
inclusion(0.1, value);
cout << "\n\n\n";
newton_raphson(0.1, value);

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
//                         

//         
//                                                                                                            
}


#include <iostream>
#include <cmath>

//                    
//                        

/*
                           

                    
                                   
                                   
                                                                                          

         
                   

         
                     
                        
                            
                              
                                
                                                                        

                       
        
        
          
           

        
        

          
        
           

         
        

         
        
          
                                                        
*/

using namespace std;

int find_root_v (double v){
    int i = 0;
    while(i*i <= v){
        i++;
    }
    return i-1;
}

void inclusion (double e, double v){
    double a = find_root_v(v);
    double b = find_root_v(v) + 1;
    double x = (a+b)/2;
    int i = 0;

    //                               
    if (a*a == v){
        cout << "Inclusion square root of v is " << a << endl;
    }
    else if (b*b == v){
        cout << "Inclusion square root of v is " << a << endl;
    }
    else{   //                 
        cout << "i\ta\tb\tx" << endl;
        while (abs(x*x-v) > e){
            cout << i << "\t" << a << "\t" << b << "\t" << x << endl;
            if (x * x < v){     //                                
                a = x;
            }
            else{
                b = x;
            }
            x = (a+b)/2;
            i++;
            cout << i << "\t" << a << "\t" << b << "\t" << x << endl;
        }
        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
    }
}

void newton_raphson (double e, double v){
    double x = max(find_root_v(v),1);
    int i = 0;
    //                               
    if (x*x == v){
        cout << "Inclusion square root of v is " << x << endl;
    }
    else{   //                 
        cout << "i\tx" << endl;
        cout << i << "\t" << x << endl;
        while (abs(x*x-v) > e){
            x = x-(x*x-v)/(2*x);
            i++;
            cout << i << "\t" << x << endl;
        }
        cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
    }
}

int main()
{
    double v = 0.0;
    double e = 0.0;
    cout << "What number do you want the square root of?" << endl;
    cin >> v;
    cout << "At what precision? (what is the margin of error?)" << endl;
    cin >> e;
    cout << "Inclusion:" << endl;
    inclusion(e, v);
    cout << "\nNewton_raphson:" << endl;
    newton_raphson(e, v);
    return 0;
}

/*
                                          
                                          
                                          
                                          
                                                                           
*/


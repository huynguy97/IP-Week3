#include <iostream>
#include <cmath>

using namespace std;

/*
                        
                      

        

          
           
           
               
           
              

               
           
           
             
           
              
*/

void inclusion(double e, double v)
{
    cout << "USING INCLUSION ALGORTITHM" << endl;
    //        
    double a = 0.0;
    double b;
    double x;
    int counter = 0;

    //      
    if(v>1){
        b = v;
    }
    else{
        b = 1.0;
    }
    //                          

    //                                 
    if(a*a==v){
        cout << "Inclusion square root of v is: " << a << " found in " << counter << " iterations." << endl;
        return;
    }

    if(b*b==v){
        cout << "Inclusion square root of v is: " << b << " found in " << counter << " iterations." << endl;
        return;
    }

    x = (a+b)/2;
    while(abs(x*x-v) > e){
        counter++;
        cout << "Iteration: " << counter << "\tX = " << x << endl;

        x = (a+b)/2;
        if(x*x < v){
            a = x;
        }
        else{
            b = x;
        }

    }

    cout << "Inclusion square root of v is: " << x << " found in " << counter << " iterations.\n" << endl;
    cout << "Found using the following variables: i = " << counter << "\ta = " << a << "\tx = " << x << "\tb = " << b << endl;
}

void newton_raphson(double e, double v)
{
    cout << "\nUSING NEWTON RAPHSON ALGORTITHM" << endl;
    double x = 0.0;
    int counter = 0;

    //      
    if(v>1){
        x = v;
    }
    else{
        x = 1.0;
    }

    while(abs(x*x-v) > e){
        counter++;
        x = x - (x*x-v)/(2*x);
        cout << "Iteration: " << counter << "\tX = " << x << endl;
    }

    cout << "Inclusion square root of v is: " << x << " found in " << counter << " iterations." << endl;
    cout << "Found using the following variables: i = " << counter << "\tx = " << x << endl;
}

int main()
{
    double v;
    double e;
    cout << "Please enter a positive number v: " << endl;
    cin >> v;
    cout << "Please enter the requiered precicion e: " << endl;
    cin >> e;

    inclusion(static_cast<double> (e), static_cast<double> (v));
    newton_raphson(static_cast<double> (e), static_cast<double> (v));
    return 0;
}


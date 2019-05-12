#include <iostream>
#include <cmath>

using namespace std;

//      

void inclusion (double eps, double v) {
double a = 0;
double b;
int i = 0;

    if (v < 1) {
        b = 1;
}
    else {
        b = v;
    }

   if (a * a == v) {
       cout << "Inclusion square root of v is " << a << endl;
       return;
    }
        else if (b * b == v) {
            cout << "Inclusion square root of v is " << b << endl;
            return;
        }

    double x = ((a + b)/ 2);
    while (abs((x * x) - v) > eps) {
           if (( x * x) < v) {
           a = x;
           }

           else {
            b = x;
           }
            x = ( a + b ) / 2;
            i ++;
            cout << "i: " << i << "\tx: " << x << "\ta:" << a << "\tb:" << b << endl;
    }
    cout << "We counted " << i + 1 << " approximations " ;
    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << eps << endl;

}

void newton_raphson (double eps, double v){
  double x;
  int i = 0;

  if (v < 1) {
        x = 1;

}
    else {
        x = v;
    }
cout << "i: " << i << "\tx: " << x << endl;
    while (abs((x * x) - v) > eps){
    x = (x - ((x*x - v) / (2 * x)));
    i ++;
    cout << "i: " << i << "\tx: " << x << endl;
}
        cout << "We counted " << i + 1 << " approximations ";
        cout << "Newton_Raphson square root of " << v << " is "  << x << " for epsilon " << eps << endl;

}

int main()
{
    while (true) {
    cout << "Type 1 for inclusion and type 2 for Newton_raphson " << endl;
    double choice;
    cin >> choice;
    if (choice == 1) {
        cout << "Input a number for inclusion square root" << endl;
        double number;
        cin >> number;
        cout << "Input an epsilon for that square root" << endl;
        double eps;
        cin >> eps;
        inclusion(eps,number);
    }
    if (choice == 2) {
        cout << "Input a number for Newton_rapson square root" << endl;
        double number;
        cin >> number;
        cout << "Input an epsilon for that square root" << endl;
        double eps;
        cin >> eps;
        newton_raphson(eps,number);
    }}

    return 0;
}

/*                                                                                                        

                                                                                                       

                                                                                                                 

                                                                                                                         

                                                                                                                              

                                                                                                                   

                                                                                                      

                                                                                                           

                                                                                       

*/

/*
                            

                                                                                                                   

                                                                    

                                                                                      

                                                                 

                                                                                   

                                                                     

                                                                                                               

                                     

                                                                                          
*/


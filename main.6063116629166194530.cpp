#include <iostream>
#include <math.h>

using namespace std;

/*

                                       
                           

*/

void inclusion (double v, double epsilon)
{
    double a = 0;
    double b = 1;
    double x = 1;
    double CompareValue = 1;
    int i = 0;

    if (v > b)
        b = v;
    if (a * a == v) {
        cout << "Inclusion square root of v is " << a << endl;
        return ;
    }
    if (b * b == v) {
        cout << "Inclusion square root of v is " << b << endl;
        return ;
    }
    while (a * a <= v && b*b >= v) {
        cout << "i = " << i << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        x = (a + b) / 2;
        cout << "x = " << x << endl;
        CompareValue = x * x - v;
        if (CompareValue < 0)
            CompareValue = -CompareValue;
        if (CompareValue <= epsilon) {
            cout << endl;
            cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
            cout << "Getting here took " << i+1 << " steps!" << endl;
            return ;
        }
        if (x * x < v) {
            a = x;
            cout << "Changing a to " << x << endl;
        }
        else {
            b = x;
            cout << "Changing b to " << x << endl;
        }
        i = i + 1;
        cout << endl;
    }
    return ;
}

void newton_raphson (double v, double epsilon)
{
    double x = 1;
    int i = 0;
    if (v * v == v) {
        cout << "Newton-Raphson square root of " << v << " is " << v << endl;
        return;
    }
    while (fabs(x * x - v) >= epsilon)
    {
        cout << "i = " << i << endl;
        x = x - (x * x - v) / (2 * x);
        cout << "x = " << x << endl;
        cout << endl;
        i++;
    }
    cout << "Newton-Raphson square root of " << v << " is " << x << " for epsilon " << epsilon << endl;
    cout << "Getting here took " << i << " steps!" << endl;
    return;
}

int main()
{
    double epsilon = 5;
    double v = 0;
    char choice = 'a';
    cout << "Welcome to the square root calculator!" << endl;
    cout << endl;
    cout << "Enter your value" << endl;
    cin >> v;
    cout << endl;
    cout << "Enter the error margin (epsilon)" << endl;
    cout << "It should be larger than 0 and lower than 1" << endl;
    cin >> epsilon;
    while (epsilon <= 0 || epsilon > 1) {
    cout << "Epsilon should be larger than 0 and lower than 1. Try again" << endl;
    cin >> epsilon;
    cout << endl;
    }
    cout << endl;
    cout << "Would you like your square root calculated by inclusion or " << endl;
    cout << "using the Newton-Raphson algorithm?" << endl;
    cout << endl;
    cout << "For inclusion press i and for Newton-Raphson press n" << endl;
    cin >> choice;
    cout << endl;
    while (choice != 'i' && choice != 'n' && choice != 'I' && choice != 'N') {
        cout << "Your choice is not clear. Try again" << endl;
        cin >> choice;
        cout << endl;
    }
    if (choice == 'i' || choice == 'I') {
        cout << "Starting inclusion..." << endl;
        cout << endl;
        inclusion (v, epsilon);
    }
    else {
        cout << "Starting Newton-Raphson" << endl;
        cout << endl;
        newton_raphson(v, epsilon);
    }

 /*            

                                                                                           
                                                          

                                                                                           
                                                          

                                                                                          
                                                                                              

                                                                                          
                                                                                              

                                                                                           
                                                                                              

 */
}


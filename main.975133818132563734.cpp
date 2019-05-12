//                              
//                                

#include <iostream>
#include <cmath>

using namespace std;

//        
void inclusion (double e, double v)
{
    double a = 0, b;

    if (v >= 1)
    {
        b = v;
    }
    else
    {
        b = 1;
    }

    if (a*a == v)
    {
        cout << "Inclusion square root of " << v << " is " << a << endl;

    }

    else if (b * b == v)
    {
        cout << "Inclusion square root of " << v << " is " << b << endl;
    }

    else
    {
        int i = 0;
        double difference = v, x;
        cout << "\ti " << "\ta" << "\tb" << "\tx" << endl;
        while (difference > e)
        {
            x = abs((a + b) / 2);

            if (x * x  < v)
            {
                a = x;
                difference = abs(x * x - v);
            }

            else
            {
                b = x;
                difference = abs(x * x - v);
            }

            cout << "\t" << i << "\t" << a << "\t" << b << "\t" << x << endl;
            i++;
        }

        cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << endl;
    }
}
//                           

//         
void newton_raphson (double e, double v)
{
    int i = 0;
    double difference = v, x;

    if (v >= 1)
    {
        x = v;
    }
    else
    {
        x = 1;
    }
    cout << "\ti " << "\tx" << endl;
    while (difference > e)
    {
        double formula1 = (x * x)-v;
        double formula2 = 2 * x;

        x = x - ((formula1) / (formula2));
        difference = abs(x * x - v);
        cout << "\t" << i << "\t" << x << endl;
        i++;
    }
    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << endl;
}

void desktop_test_cases()
{
    cout << "\nDidn't have time to enter the results... Sorry!\n" << endl;
    cout << "\tv=0 \tinclusion       \ti \tai \tbi \txi" << endl;
    cout << "\t    \t                \t0 \t0  \t1  \t-" << endl;
    cout << "\n\t  \tNewton-Raphson  \ti \txi \t   \t" << endl;
    cout << "\t    \t                \t0 \t0  \t   \t" << endl;
}

int main()
{
    cout << "Choose an option: \n 1: Inclusion function \n 2: Newton-Raphson. \n 3: Desktop test cases results" << endl;
    int option;
    cin >> option;
    cout << "You chose option: " << option << endl;
    if (option == 1 || option == 2) {
        cout << "Enter the number you want to calculate the square root of (for example: 9.0):" << endl;
        double number;
        cin >> number;
        cout << "Enter a very small number for an epsilon (for example: 0.1):" << endl;
        double epsilon;
        cin >> epsilon;
        cout << "You chose number " << number << " and epsilon " << epsilon << ". The square root is being calculated: " << endl;
        if (option == 1) {
            inclusion(epsilon, number);
        } else if (option == 2) {
            newton_raphson(epsilon, number);
        }
    }
    else if (option == 3)
    {
        desktop_test_cases();
    }

    return 0;
}


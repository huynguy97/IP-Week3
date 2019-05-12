#include <iostream>
#include <cmath>

using namespace std;

//                            
//                            

/*         
                        
                        
                                                            
                                                         
                                                            

        

                                                   
                                                   
                                                                                                      
                                                                                                      
                                                                                                       
*/

void inclusion (double epsilon, double nu)
{
    int i=0;
    double a = 0;
    double b;
    double x;

    if (nu > 1)
        b = nu;
    else
        b = 1;

    if (a*a == nu)
        x = a;
    else if (b*b==nu)
        x = b;
    else
        x = (a+b)/2.0;

    cout<<"i="<<i<<'\t'<< "a="<<a<<'\t'<<"x="<<x<<'\t'<<"b="<<b<<endl;

    while (abs(x*x - nu) >= epsilon)
    {   i++;

        x = (a + b)/2;
        if (x*x < nu)
            a = x;
        else
            b = x;

        cout<<"i="<<i<<'\t'<< "a="<<a<<'\t'<<"x="<<x<<'\t'<<"b="<<b<<endl;
    }
cout << "Inclusion root of "<< nu << " is: " << x << " for epsilon " << epsilon<< endl;
}

void newton_raphson (double epsilon, double nu)
{
   double x; int i=0;
   if (nu > 1)
        x = nu;

   else
        x = 1;
   cout<<"i="<<i<<'\t'<<"x="<<x<<'\t';

   while (abs(x*x - nu) >= epsilon)
   {   i++;
       x = (x - (x*x -nu))/(2*x);
       cout<<"i="<<i<<'\t';
       cout<<"x="<<x<<'\t';
   }

    cout << "Newton Raphson square root of "<< nu << " is: " << abs(x) << " for epsilon " << epsilon<< endl;
}

int main()
{
    double z;
    double y;

    double epsilon;
    double nu;
    cout << "Please enter a number to take the square root of." <<endl;
    cin >> nu;
    cout << "Please give the accuracy of the root between 0 and much smaller than 1." << endl;
    cin >> epsilon;

    cout<<"Inclusion method:"<<endl;
    inclusion (epsilon, nu);
    cout<<"Newton Raphson method:"<<endl;
    newton_raphson(epsilon, nu);

    return 0;

}


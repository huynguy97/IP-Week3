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
//                                                                                    
//                                               

using namespace std;

int iteration ;

void inclusion (double e, double v)
{
double a = 0;
double b = max(1.0, v);
iteration = 0 ;

if (a*a == v)
   {
    cout << "Inclusion square root of " << v << " is " << a << "."<< endl << "These are the values of the variables: a = "
    << a << " \t b = " << b << " \t x = 0. Iterations: " << iteration << ". \n" << endl ;
    return ;
   }

if (b*b == v)
   {
    cout << "Inclusion square root of " << v << " is " << a << "."<< endl << "These are the values of the variables: a = "
    << a << " \t b = " << b << " \t x = 0. Iterations: " << iteration << ". \n" << endl ;
    return ;
   }

double x = (a+b)/2 ;

while (abs(x * x - v ) > e)
    {
    if (x*x < v)
        a = x ;
    else
        b = x ;

    x = (a + b) / 2;
    iteration++ ;
    }
cout << "Inclusion square root of " << v << " = " << x << " for epsilon " << e << "." << endl << "These are the values of the variables: a = "
    << a << " \t b = " << b << " \t x = 0. Iterations: " << iteration << ". \n" << endl ;
}

void test_inclusion ()
{
cout << "TESTING INCLUSION" << endl;
double e = 0.1 ;
while (e >= 0.00001)
{
   inclusion (e, 0.0) ;
   inclusion (e, 1.0) ;
   inclusion (e, 0.6) ;
   inclusion (e, 36.0) ;
   inclusion (e, 333333.3333) ;

   e = e / 10;
}
cout << endl << "Testing inclusion complete" << endl ;
}

void newton_raphson (double e, double v)
{
    iteration = 0 ;
    double x = max(1.0,v);
    while (abs(x * x - v ) > e)
    {
        x = (x - (((x * x) - v)) / (2.0 * x));
        iteration++ ;
    }
    cout << "Newton_Raphson square root of " << v << " is " << x << " for epsilon " << e << "." << endl << "These are the values of the variables: x = "
    << x << ". Iterations: " << iteration << "\n" << endl ;
}

void test_newton_raphson ()
{
cout << "TESTING NEWTON_RAPHSON" << endl;
double e = 0.1 ;
while (e >= 0.00001)
{
   newton_raphson (e, 0.0) ;
   newton_raphson (e, 1.0) ;
   newton_raphson (e, 0.6) ;
   newton_raphson (e, 36.0) ;
   newton_raphson (e, 333333.3333) ;

   e = e / 10;
}
cout << endl << "Testing newton_raphson complete" << endl ;
}

//                                                                                                            
void desktop_tests ()
{
cout << "PERFORMING DESKTOP TESTS FOR INCLUSION" << endl;
inclusion (0.1, 0.0) ;
inclusion (0.1, 1.0) ;
inclusion (0.1, 0.4) ;
inclusion (0.1, 144.0) ;
inclusion (0.1, 69.0) ;
cout << "Desktop testing for inclusion is complete." << endl;

cout << "PERFORMING DESKTOP TESTS FOR NEWTON_RAPHSON" << endl;
newton_raphson (0.1, 0.0 ) ;
newton_raphson (0.1, 1.0) ;
newton_raphson (0.1, 0.4) ;
newton_raphson (0.1, 144.0) ;
newton_raphson (0.1, 69.0) ;
cout << "Desktop testing for newton_raphson is complete." << endl;
}

int main()
{
cout << endl;
test_inclusion ();
cout << endl ;
test_newton_raphson ();
return 0;

}


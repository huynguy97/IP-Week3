#include <iostream>
#include <cmath>

using namespace std;

//                      
//                                                 
//                                                 
//                                      
//                                                                                                               
//                         
//                                                                                                                 
//                                                       

//                                                                                         
void inclusion (double e = 0, double v = 0)
{
cout << "please enter values for e and v \n" ;
cin >> e >> v ;

double a = 0 ;
double b ;
if (v > 1)
    double b = v ;
else
    double b = 1 ;
double x = (a + b)/2 ;

if (abs(x*x - v) <= e)
{
    cout << "\nInclusion square root of " << v << "is " << x << "\n" ;
}
else if (x*x < v)
{
    for (x*x < v; abs(x*x - v) > e; a = a + 0.2, x = (a + b)/2 )
{

}
    cout << "\nInclusion square root of " << v << " is " << x << " for epsilon " << e << "\n" ;
}
else
{
    for (x*x > v; abs(x*x - v) > e; b = b - 0.2, x = (a + b)/2 )
{

}
    cout << "\nInclusion square root of " << v << " is " << x << " for epsilon " << e << "\n" ;
}
}

//                                                                                                               
//                                               

int main()
{
    inclusion (0, 0) ;

    cout << "Hello world!" << endl;
    return 0;
}


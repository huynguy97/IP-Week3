#include <iostream>
#include<math.h>

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
//               
//           
//             

void inclusion(double e, double v)
{
    double a=0;
    double b=1;
    double x;
    if (v>1)
    {
        b=v;
    }
    if (v==a*a)
    {
        cout << a;
        return;
    }
    else if (v==b*b)
    {
        cout << b;
        return;
    }
    else
    {
        x = 1;
        while (fabs(x * x - v) > e)
        {
             x=((a+b)/2);
            if (x*x<v)
            {
                a=x;
                cout << "ondergrens a = x" << endl;
                cout << a << endl;
            }
            else
            {
                b=x;
                cout << "bovengrens b = x" << endl;
                cout << b << endl;
            }

        }
    }
    cout << "inclusion square root of v is x for epsilon e"<< endl;
    cout << x << endl;
    return;
}
void newton_raphson(double e, double v)
{
    if (v==0)
    {
        cout << 0 << endl;
    }
    else {
    double x=1;
    if (v>1)
    {
        x=v;
    }
    while (fabs(x * x - v) > e)
    {
        x=x-((x*x-v)/(2*x));
        cout << "middelwaarde x" << endl;
        cout << x << endl;
    }
    cout << "Newton_raphson square root of v is xn for epsilon e" << endl;
    cout << x << endl;
    return;
    }
}

int main()
{
    double e= 0.1;
    double v;
    cout << "Please enter v" << endl;
    cin >> v;
    cout << "inclusion=1, newton_raphson=2" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        inclusion(e, v);
        return 0;
    }
    if (choice == 2)
    {
        newton_raphson(e,v);
        return 0;
    }
}
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


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
void inclusion (double epsilon, double v)
{
    double a;
    double b;
    double x;
    int i;
    i= 0;
    bool not_there_yet = true;
    a = 0;
    if (v < 1)
    {
        b =1;
    }
    else
    {
        b = v;
    }
    x = (a + b)/2;

    while (not_there_yet)
    {
            cout << "i = " <<i;
            cout <<"\t";
            cout << "a = " <<a;
            cout <<"\t";
            cout <<"x = " <<x;
            cout <<"\t";
            cout << "b = " <<b;
            cout<<"\n";

        if (a * a == v)
        {
            cout << "inclusion square root of v is: " << a << endl;
            cout << "\n";
            not_there_yet = false;
        }
        else if (b * b == v)
        {
            cout << "inclusion square root of v is: " << b << endl;
            cout << "\n";
            not_there_yet = false;
        }
        else if (abs(x * x - v) < epsilon)
        {
            cout << "inclusion square root of v is: " << x << endl;
            cout << "\n";
            not_there_yet = false;
        }
        else if (x * x < v)
        {
            a = x;
            b = b;
        }
        else
        {
            a = a;
            b = x;
        }
        x = (a + b)/2;
        i = i+1;
    }
}

//    
void Newton_Raphson (double epsilon, double v)
{
    int i;
    i=0;
    double x;
    if (v > 1)
    {
        x = v;
    }
    else
    {
        x = 1;
    }

    bool not_there_yet = true;

    while (not_there_yet)
    {
        cout <<"x = " <<x;
        cout <<"\t";
        cout << "i = " <<i;
        cout<<"\n";
        if (abs (x * x - v) < epsilon)
        {
            cout << "Newton_Raphson square root of v is: " << x;
            cout << "\n";
            not_there_yet = false;
        }
        else
        {
            x = x - ((x * x - v)/(2 * x));
            i = i+1;
        }
    }
}

int main()
{
cout << "Enter a whole number v: ";
double number ;
cin >> number ;
inclusion(0.1,number);
Newton_Raphson(0.1,number);
return 0;
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
//                                                                                                                                                                            


#include <iostream>
#include <cmath>
using namespace std;

//                       

void inclusion(double v, double e)
{
    double a;
    double b;

    //                                                                       
    for (int i = 0; i < v; i++)
    {
        a = i;
        if (i * i >= v)
        {
          break;
        }
    }

    b = a;
    a = a-1;

    double x = ((a + b) / 2.0);
    double ai = a;
    double bi = b;
    double xi = x;

    //                                                                                                          
    //                                                    
    while ((abs(xi * xi - v)) >= e)
    {
        cout << xi << "\n" ;
        if (xi * xi < v)
        {
            ai = xi;
        }

        else
            bi = xi;

        xi = ((ai + bi) /2.0);

    }

    cout << "De wortel is, na berekening : \n" << xi << "\n" ;
}

void newtonraphson (double v, double e)
{
    double xi;

    //                                                                             
    //                                                                                                                             
    for (xi = max (1.0,v); abs(xi * xi - v) >= e;)
    {
        xi = xi - ((xi * xi) - v) / (2 * xi);
        cout<< xi<<"\n";
    }

    cout << xi << " is de wortel van "<< v;
}

//                                                                                                                                                        
//                                                                                

int main()
{
    double v;
    int p;
    int k;
    double e;

    cout << "Wilt u de wortel (toets 1) of Voor Newton-Raphson toets (2). \n"  ;
    cin >> k;

        if(k == 1){
            cout << "Van welk getal wilt u de wortel?\n" ;
            cin >> v;
            cout << "Welke e wil?\n";
            cin >> e;
            inclusion(v, e);
        }
        if(k == 2){
            cout << "Van welk getal wilt u de wortel?\n" ;
            cin >> v;
            cout << "Welke e wil?\n";
            cin >> e;
            newtonraphson(v, e);
        }
}


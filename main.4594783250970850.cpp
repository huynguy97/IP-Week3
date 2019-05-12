#include <iostream>

//                                      
//                                                     

using namespace std;

double abs(double x)
{
    if  (x < 0)
    {
        return x * -1 ;

    }

    else
    {
        return x ;
    }
}

double initial_value (double v)
{
    double n = 0 ;

    while (n * n <= v)
    {
        n = n + 1 ;
    }

    if (n * n > v)
    {
        n = n - 1 ;
    }

    return n ;
}

double inclusion (double e, double v)
{
    double a = initial_value(v);

    double b = a + 1 ;

    if (a * a == v)
    {
      return a ;
    }

    else
    {
        double x = ((a + b)/2) ;
        int i = 0 ;
        while (abs(x * x -v) > e)
        {
            if (x * x < v)
            {
                a = x ;
                b = b ;
            }

            else
            {
                b = x ;
                a = a ;
            }

            x = ((a + b)/2) ;

            cout << "i: " << i << "\ta: " << a << "\tb:" << b << "\tx:" << x << endl ;
            i++;
        }

        return x ;
    }
}

double initial_value_2 (double v)
{
    double n = 0 ;

    if (v < 1)
    {
       n = 1 ;
    }

    else
    {
        while ((n * n <= v) && (v >= 1))
        {
            n = n + 1 ;
        }

        if (n * n > v)
        {
            n = n - 1 ;
        }
    }

    return n ;
}

double newtonraphson (double e, double v)
{
    double x = initial_value_2(v) ;
    int i = 0 ;

    while (abs(x * x -v) > e)
    {
        x = x - (x * x - v)/(2*x) ;

        cout << "i: " << i << "\tx:" << x << endl ;
        i++ ;
    }

    return x ;
}

int main()
{
    int option ;

    cout << "Hello world!" << endl;
    cout << "1) Inclusion" << endl ;
    cout << "2) NewtonRaphson" << endl ;
    cout << "Choose option 1 or option 2:" << endl ;
    cin >> option;

    if (option == 1)
    {
        cout << "Enter a number:" ;
        double v ;
        cin >> v ;
        cout << "You entered: "<< v << endl ;
        cout << inclusion(0.001, v) ;
    }

    else if (option == 2)
    {
        cout << "Enter a number:" ;
        double v ;
        cin >> v ;
        cout << "You entered: "<< v << endl ;
        cout << newtonraphson(0.001, v) ;
    }

    else
    {
        cout << "That's not a valid entry" << endl ;
    }

    return 0 ;

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
//                                                                                   

//                                                                                 
//                                                                                    

//                                                                                                    
//                                                           


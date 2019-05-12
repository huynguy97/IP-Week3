#include <iostream>

using namespace std;

/*
                                                        

    
            
                    

    
            
                 

      
                
                   

     
                  
                       

     
                  
                       

                                                   
   
           
        

   
           
        

     
           
        

    
            
        

    
            
         

                                                                            
*/

void inclusion (double e, double v)//                                          
{
    //                            
    double a = 0;
    double b = 1;
    if ( v > 1)//                                                                                                                                
        b = v;
    double x = (a+b)/2;//                              
    int i = 0;
    cout << "\nFinding the square root of " << v << " using inclusion:" << endl << "i: " << i << ", a: " << a << ", x: " << x << ", b: " << b << endl;

    if (a*a==v)//                             
    {
        cout << "Inclusion square root of " << v << " is " << a << "." << endl;
        return;
    }
    if (b*b==v)//                             
    {
        cout << "Inclusion square root of " << v << " is " << b << "." << endl;
        return;
    }

    while ( x*x-v < -e || x*x-v>e )//                                                                            
    {
        //                                                                                                                       
        if ( x*x < v)
            a = x;
        else
            b = x;
        x = (a+b)/2;
        cout << "i: " << ++i << ", a: " << a << ", x: " << x << ", b: " << b << endl;
    }

    cout << "Inclusion square root of " << v << " is " << x << " for epsilon " << e << "." << endl;

}

void newton_raphson (double e, double v)//                                                
{
    double x = 1;
    if ( v > 1)
        x = v;
    int i = 0;
    cout << "\nFinding the square root of " << v << " using Newton-Raphson:" << endl << "i: " << i << ", x: " << x << endl;

    while ( x*x-v < -e || x*x-v>e )//                                                                            
    {
        x = x - (x*x - v)/(2*x);//                                                                                                            
        cout << "i: " << ++i << ", x: " << x << endl;
    }

    cout << "Newton_raphson square root of " << v << " is " << x << " for epsilon " << e << "." << endl;
}

int main()//                                                                 
{

    double v;
    double e;

    cout << "Which squareroot do you seek?" << endl;
    cin >> v;

    cout << "With which epsilon?" << endl;
    cin >> e;

    inclusion(e,v);
    newton_raphson(e,v);

    return 0;
}


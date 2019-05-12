#include <iostream>
#include <cmath> //        
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

int main()
{
    cout << "choose whether you want to use the inclusion algorithm (type: \"1\") or the Newton-Raphson algorithm (type: \"2\")" << endl;
    double choice ;
    cin >> choice ;
    while (choice != 1 && choice != 2)
    {
        cout << choice << " is not an option!!!" << endl ;
        cin >> choice ;
    }
    if (choice==1)
    {
        cout << "enter a positive number" << endl;
        double V;
        cin >> V ;
        while (V<0)
        {
            cout << "enter a REAL positive number" << endl;
            cin >> V ;
        }
        cout << "enter precision" << endl ;
        double E ;
        cin >> E ;
        while (E>0.1)
        {
            cout << "please enter precision lower than 0.1" << endl ;
            cin >> E ;
        }
        double A = 0.0 ;
        double B = V+1.0 ;
        double X = (A + B)/2 ;
        int i = 1 ;
        if(A*A==V)
            cout << "inclusion square root of " << V <<  " is " << A << " for epsilon " << E << "\n" ;
        else if (B*B==V)
            cout << "inclusion square root of " << V <<  " is " << B << " for epsilon " << E << "\n" ;
        else
        {
            while ( abs (X*X-V)>E)
            {
                cout << "'i' is equal to " << i << "\n'X' is equal to " << X << "\n'A' is equal to " << A << "\n'B' is equal to " << B << "\n" << endl ;
                if (X*X<V)
                {
                    A=X ;
                    X = (A + B)/2 ;
                    i++ ;
                }
                else
                {
                    B=X ;
                    X = (A + B)/2 ;
                    i++ ;
                }
            }
            cout << "'i' is equal to " << i << "\n'X' is equal to " << X << "\n'A' is equal to " << A << "\n'B' is equal to " << B << "\n \n" << endl ;
            cout << "inclusion square root of " << V << " is " << X << " for epsilon " << E << "\n" << endl ;
        }
        return 0;
    }
    else
    {
        cout << "enter a positive number" << endl;
        double V;
        cin >> V ;
        while (V<0)
        {
            cout << "enter a REAL positive number" << endl;
            cin >> V ;
        }
        cout << "enter precision" << endl ;
        double E ;
        cin >> E ;
        while (E>0.1)
        {
            cout << "please enter precision lower than 0.1" << endl ;
            cin >> E ;
        }
        double X = V+1 ;
        int i=1 ;
        while (abs(X*X-V)>E)
        {
            cout << "'i' is equal to " << i << "\n'X' is equal to " << X << "\n" << endl ;
            X=X-((X*X-V)/(2*X)) ;
            i++ ;
        }
        cout << "'i' is equal to " << i << "\n'X' is equal to " << X << "\n\n" << endl ;
        cout << "Newton_Raphson square root of " << V << " is " << X << " for epsilon " << E << "\n" ;
        return 0 ;
    }
}


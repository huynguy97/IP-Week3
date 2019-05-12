//                          
//                         

#include <iostream>
#include <cmath>
//                                      
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
    enum Control {A, B, C};

    Control conditions;
    double eps;
    double number;
    double a_i;
    double b_i;
    double x_i;
    int i = 0;
    bool method;
    cout << "Please give your desired epsilon between 0 and 1: ";
    cin >> eps;
    cout << "Please give the (positive) value you want the square root of ";
    cin >> number;
    cout << "Do you want to use the inclusion (0) of Newton (1) method? ";
    cin >> method;
    if (method)
    {
        cout << "You chose the Newton-Raphson method" << endl;
        {
        //                                                 
        if (number < 1)
            x_i = 1;
        else
            x_i = number;
        }
        //                                                                     
        cout << "i\tx_i" << endl;
        while(abs(x_i * x_i - number) > eps)
        {
            x_i = x_i - (x_i * x_i - number) / (2 * x_i);
            cout << i << "\t" << x_i << "\n";
            i++;
        }
        cout << "The Newton_raphson square root of v is " << x_i << " for epsilon " << eps;
    }
    else
    {
        cout << "You chose the inclusion method" << endl;
        //                                                                                                      
        {
            a_i = 0;
            if( number < 1 )
                b_i = 1;
            else
                b_i = number;

        //                                                         
            if( a_i * a_i == number)
                conditions = A;
            else if( b_i * b_i == number)
                conditions = B;
            else
                conditions = C;
        }
        switch(conditions)
        {
        case A: cout << "The inclusion square root of v is " << a_i << endl; break;
        case B: cout << "The inclusion square root of v is " << b_i << endl; break;
        default:
            //                                                            
          cout << "i \ta_i \tx_i \tb_i" << endl;
          //                                                             
          x_i = number;
          while( (abs((x_i*x_i)-number)) > eps)
            {
                x_i = (a_i+b_i)/2;
                cout << i << "\t" << a_i << "\t" << x_i << "\t" << b_i << "\n";
                if ( (x_i*x_i) < number)
                    a_i = x_i;

                else
                    b_i = x_i;
                i++;
            }
            cout << "The inclusion square root of v is " << x_i << " for epsilon " << eps;
            break;
        }
    }
    return 0;
}

//        
//                                               


#include <iostream>

using namespace std;
/*                          
                             
*/

/*             
                
       
             
         
        
                    

       
               
         
         
         
        
                    

         
               
                
              
         
           
                  
                 
             
        
                       

                  

          
                
         
         
             
           
              
          
              
         
        
               
            
         
            
        
       
               
              
                 
                   
           
           
                 
     
     
     
                        
                              
                         
                   
             
                          

                
                              
                    
                 

                                   
                                  
                                   
                                                                                   
                                                                   
*/

//             
double e = 0.1;
double v;
double a;
double b =1.0;
double x;
double check;
int teller;
bool found = false;

int main()
{
    cout <<"what is V?";
    cin >> v;
    if (v > 1)
    {
        b = v;
    }
    while(found == false)
    {
        if(a * a == v)
        {
            cout<<"Inclusion square root of v is ";
            cout<<v;
            found = true;
        }
        if(b * b == v)
        {
            cout<<"Inclusion square root of v is ";
            cout<<v;
            found = true;
        }
        else
        {
            x = (a + b)/2;
            check = x*x - v;
            std::cout<<"A is " << a << "\t";
            std::cout<<"B is " << b << "\t";
            std::cout<<"X is " << x << "\n";
            if (check <0)
            {
                check = check*-1;
            }
            if (check <= e)
            {
                cout<<"Inclusion square root of v is " << x << " for epsilon e";
                std::cout<<"   I =" << teller;
                found = true;
            }
            else
            {

                if(x*x<v)
                {
                    a = x;
                }
                else
                {
                    b = x;
                }
            }
        }
    teller++;
    }
}

/*              */
void newton_raphson (double e, double v){
    double x = 1;
    double a = 0;
    if (v>1){
        x=v;
    }
    while (abs((x*x-v)>(e))){
        cout << x << '\t' <<endl;
        x = x-(x*x-v)/(2*x);
        a++;
    }

    cout << "The Newton_raphson square root of v: " << x <<endl;
    cout << "I is " << a <<endl;
}
/*
           
                         
             
             
                     
                        
 
*/
/*
              
                       
                       
                       
                       
                       
*/


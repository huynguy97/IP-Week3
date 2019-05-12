#include <iostream>
#include <limits> //                                                                    
#include <cmath>

using namespace std;

/*                     
                                                                                                                                               
                                                                                                                                                
                                                                                                                                                   
                                                                                                           

                                                                                  

                    

                                             

          
        
                                                  
        
                                                 
                     
                             
                                       
                     
                                           
                                            
                                             
                                                 
                                                   
                                                       
                                                         
                                                             
                                                               
                                                                  
                                           
                                
                                         
                                          
                                              
                                                 
                                                   
                                                       
                                                         
                                                             
                                          

                                                             
                                                                                                     
                                                                                                        

               
        
                  
                                 
                                       
                                    
        
                  
                                 
                     
                     
                                      
                                                  
                                      
                     
                     
                                   
                                                
                                                                             
                                                                             
                                                                              
                                          
                                
                     
                                 
                                              
                                                                              
                                                                              
                                             

                                                                                                                               
                                                                                  
                                                            */

//                                                                                                                        
//                                                                                                     
double maximum(double a, double b){
    if (a >= b){
        return a;
    }
    return b;
}

//                                                                                                                                         
void inclusion(double e, double v){
    double mini = 0.0;
    double maxi = maximum(v,1.0);
    double x = (mini + maxi)/2;
    int counter = 0; //                                                                            
    bool edgecase = false;

    cout << "Inclusion step " << counter << '\t' << "a = " << mini << '\t' << "b = " << maxi << '\t' << "x = " << x << endl;
    //                                        
    if (mini*mini == v){
        cout << "Inclusion converged in " << counter << " steps." << endl << endl;
        cout << "The square root of " << v << ", calculated with inclusion, is " << mini << endl << endl;
        edgecase = true;
    }
    else if (maxi*maxi == v){
        cout << "Inclusion converged in " << counter << " steps." << endl << endl;
        cout << "The square root of " << v << ", calculated with inclusion, is " << maxi << endl << endl;
        edgecase = true;
    }

    if (!edgecase){ //                                                                                                                                                 
        while (abs(x*x - v) >= e){
            if (x*x < v){ //                                                                                               
                mini = x;
            }
            else {
                maxi = x;
            }
            x = (mini + maxi)/2;
            counter++;
            //                                                                
            cout << "Inclusion step " << counter << '\t' << "a = " << mini << '\t' << "b = " << maxi << '\t' << "x = " << x << endl;
        }
    }

    //                                                                            
    cout << "Inclusion converged in " << counter << " steps." << endl << endl;
    cout << "The square root of " << v << ", calculated with inclusion, is " << x << endl << endl;
}

//                                                                                                                   
void newton_raphson(double e, double v){
    double x = maximum(v,1.0);
    int counter = 0; //                                                                            

    cout << "Newton-Raphson step " << counter << '\t' << "x = " << x << endl;
    //                                                                 
    while (abs(x*x - v) >= e){
        x = x - (x*x - v)/2.0/x;
        counter++;
        //                                  
        cout << "Newton-Raphson step " << counter << '\t' << "x = " << x << endl;
    }
    //                                                                            
    cout << "Newton-Raphson converged in " << counter << " steps." << endl << endl;
    cout << "The square root of " << v << ", calculated with Newton-Raphson, is " << x << endl << endl;
}

//                                                                                                                                                    
double take_input_double(string message){
    double outp = 0;
    cout << message << endl;
    while (!(cin >> outp)){ //                                                                                                                           
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Invalid input. " << message << endl;
    }
    cout << endl; //                                    
    return outp;
}

//                                                                                                                                     
int main(){
    double v = take_input_double("Input a double to calculate the square root of:");
    double e = take_input_double("Input a double as an accuracy threshold:");
    //                                                                                                                 
    if (v >= 0 && e > 0){
        inclusion(e,v);
        newton_raphson(e,v);
    }
    else { //                                                                            
        cout << "The square root of a negative number cannot be calculated, nor can the algorithms converge with non-positive accuracy threshold." << endl << endl;
    }
}

/*                                                   

      
                                               
 

                                        
   

                                               
                               

                                                     

                             
                               
                                
                                    

                                                             

      
                                               
 

                                        
   

                                               
                               

                                                     

                             
                                    

                                                          

         
                                               
    

                                        
   

                                               
                               

                                                          

                             
                                 
                                  
                                    

                                                                  

       
                                               
  

                                        
   

                                                
                                                        
                                                         
                                                                  
                                                                   
                                                                   
                                                                   
                                                                   
                                                                  
                                                                   
                               

                                                            

                              
                              
                                   
                                   
                                   
                                   
                                    

                                                                 

       
                                               
  

                                        
   

                                               
                                                
                                                         
                                                                  
                                                                   
                                                                   
                                                                   
                                                                   
                               

                                                            

                              
                             
                                   
                                   
                                   
                                    

                                                                 

                                                                                       

                                                                                                                                                       
                                                                                                                                 

                                               
          

                                        
        

                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                  
                                                          
                                                          
                                                         
                                                         
                                                         
                                                                 
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                 
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                

                                                                      

                                        
                                        
                                        
                                        
                                        
                                        
                                        
                                       
                                        
                                        
                                        
                                  
                                  
                                  
                                   
                                   
                                   
                                   
                                   
                                   
                                   
                                     

                                                                           */


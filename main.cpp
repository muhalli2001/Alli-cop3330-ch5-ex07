#include <iostream>
#include "std_lib_facilities.h"

//
double num_roots(double a, double b, double c)
{
    b = b*b;
    double eval;
    
    eval = b-(4*a*c); //b^2-4ac
    
    return eval;
}
void solve_quadratic(double a, double b, double c)
{
    double eval = num_roots(a,b,c);
   
    double result1, result2;

    if(eval>0)
    {   
   
        double neg_b = -b;
     
        result1 = neg_b + sqrt(eval);
        result1 = result1/(2*a);
        result2 = neg_b-sqrt(eval);
        result2 = result2/(2*a);
  
        cout<<"roots are:"<<result1<<"and"<<result2;
    }
    else if(eval==0)
    {
        result1 = -b / (2*a);

        cout<<"root is:"<<result1;
    }
    else if(eval<0)
    {
        cout<<"no real roots for given values";
    }
    
}
int main()
{
    double a,b,c;
    printf("Provide the a,b,c values of your quadratic form equation. use spaces between inputs");

    cin >> a >> b >> c;

    solve_quadratic(a,b,c);


    return 0;
}
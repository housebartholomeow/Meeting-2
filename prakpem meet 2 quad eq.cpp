#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, quadforplus, quadforminus, x, x1, x2, discriminant;

    cout << "Please enter desired coefficients" << endl;
    cin >> a >> b >> c;
    
    
    discriminant = b*b-4*a*c;
    quadforplus = (-b+sqrt(discriminant))/(2*a);
    quadforminus = (-b-sqrt(discriminant))/(2*a);
    x1 = quadforplus;
    x2 = quadforminus;
    x = -b/(2*a);

    if(discriminant>0){
        cout<<"roots for quadratic formula are: x1 ="<<x1<<" | x2 ="<<x2<<endl;
    }

    else if(discriminant==0){
        cout<<"root for quadratic formula is: x ="<<x<<endl;
    }
    else{
        cout<<"cannot compute; roots are not real"<<endl;
    }
    return 0;
}
#include <iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,x1,x2;
    cout<<"Ingrese ax2, bx y c: "<<endl;
    cin>>a>>b>>c;
    if(a!=0 && sqrt(b*b-4*a*c)>=0){
        x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
        x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
        cout<<"x1 = "<<x1<<"\nx2 = "<<x2<<endl;
        }
    else
        cout<<"No tiene solucion real "<<endl;
return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float m1,m2,b1,b2,mf,bf,abscisa,yinterseccion;
    cout<< "completar la primera funcion: m= ";
    cin>>m1;
    cout<< "b= ";
    cin>>b1;
    cout<< "completar la segunda funcion: m= ";
    cin>>m2;
    cout<< "b= ";
    cin>>b2;
    mf=m1-m2;
    bf=b2-b1;
    abscisa=bf/mf;
    yinterseccion=m1*abscisa+b1;
    if((m1==m2) && (b1==b2))
    {
       cout<<"tiene infinitos puntos de interseccion"<<endl;
    }
    else
       {
           if(m1==m2)
           {
               cout<<"son rectas paralelas"<<endl;
           }
        else
            cout<<"el punto de interseccion es ("<<abscisa<<","<<yinterseccion<<")"<<endl;
       }




    return 0;
}

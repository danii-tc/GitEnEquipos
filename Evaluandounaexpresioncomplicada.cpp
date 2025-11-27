#include <bits/stdc++.h>
using namespace std;
int main(){
double z,y,x;

cin>>x;
cin>>y;
cin>>z;

double resultado = 0;

double parteArriba = pow(2 * y + z, 2.8) - z;
double DivisionAbajo = x/z;
double parteAbajo = (x + y) - DivisionAbajo;
double DivisionGeneral = parteArriba/parteAbajo;

cout<<DivisionGeneral<<endl;


}

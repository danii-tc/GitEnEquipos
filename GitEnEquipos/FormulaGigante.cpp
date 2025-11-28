#include <bits/stdc++.h>
using namespace  std ;

int main()
{
    double x, y, z, r;
    cin>>x>>y>>z;
    r=(((2*x+y)/z)*(y*y*y-z))/(((x+2*y+3*z)/(z-2*y-3*x))+x*x+z*z);
    cout<<r;
    return 0;
}

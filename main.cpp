#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tc, a[3];
    cin>>tc;
   
    for (int i=0; i<tc; i++)
    {
        int move=0;
        for (int j=0;j<3; j++)
            cin>>a[j];
        sort(a,a+3);
        if (a[0]!=a[1]||a[1]!=a[2])
            move=2*(a[2]-a[0]-2);
        if (a[0]==a[2])
            move=0;
        if (a[2]-a[0]==1)
            move=0;
        cout<<move<<endl;
    }
    return 0;
}

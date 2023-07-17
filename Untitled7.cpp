#include<iostream>
using namespace std;

int maximum(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int left_max=maximum(a,b);
    int right_max=maximum(c,d);
    int final_max=maximum(left_max,right_max);
    cout<<final_max;
    return 0;
}

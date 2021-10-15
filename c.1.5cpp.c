#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[]={5,8,6,2,7,9};
    for(int i=0;i<6;i++)
    {
        int x=n[i];
        int j=i-1;
        while(j>=0 && n[j]>x)
        {
            n[j+1]=n[j];
            j--;
        }
        n[j+1]=x;
    }
    for(int i=0;i<6;i++)
    {
        cout <<n<<" ";    }
        cout<<endl;
}

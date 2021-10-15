#include<bits/stdc++.h>
using namespace std;
int main()

{
    int num[]= {1,5,6,5,8,2};
    for(int i=0;i<6-1;i++)
    {
        for(int j=0;j<6-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]= temp;
            }
            for(int k=0;k<6;k++)
            {
                cout<<num[i]<<" ";
            }
        }
    }
}

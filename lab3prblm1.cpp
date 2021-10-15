#include<iostream>
#include<string>
using namespace std;
int LCS[100][100];
int LCSlen(string,int x,int x1,string,int y,int y1)
{
    for(int i=0;i<=x1;i++)
        LCS[i][y1]=0;
    for(int j=0;j<=y1;j++)
        LCS[j][x1]=0;
    for(int i=x1-1;i>=0;i--)
    {
        for(int j=y1-1;j>=0;j--)
        {
            LCS[i][j]=LCS[i+1][j+1];
            if(x[i]==y[j])
                LCS[i][j]++;
            if(LCS[i+1][j]>LCS[i][j])
                LCS[i][j]=LCS[i+1][j];
            if(LCS[i][j+1]>LCS[i][j])
               LCS[i][j]=LCS[i][j+1];

        }
    }
    return LCS[0][0];
}
int main()
{
    string x,y;
    cin>>x>>y;
    int x1=x*length(),y1=y*length();
    int result=LCSlen(x,x1,y,y1);
    cout<<result<<endl;
    return0;
}

#include<bits/stdc++.h>
using namespace std;
string frames;
string requests;
string result="";
string str[100];
int main()
{
    cin>>frames>>requests;
    char ch;
    int n=requests.size(),f=0,ma=0,misses=0;
    int m=frames.size();
    for(int i=0;i<n;i++)
    {
        f=0;
        for(int j=0;j<m;j++)
        {
            if(requests[i]==frames[j]) f=1;
        }
        if(!f)
        {
            int ind=-1;
            for(int j=0;j<m;j++)
            {
                ind= -1;
                for(int k=i+1;k<n;k++)
                {
                    if(frames[j]==requests[k]) {ind=k; break;}
                }
                if(ind==-1) ind=n+1;
                if(ind>ma)
                {
                    ma=ind;
                    ch=frames[j];
                }
            }
            for(int j=0;j<m;j++)
            {
                if(frames[j]==ch) {frames[j]=requests[i]; break;}
            }
            misses++;
        }
    }
    cout<<"Misses : "<<misses<<"\nHeated : "<<n-misses<<"\n";
}

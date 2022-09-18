/*
6
2 4
0 3
3 5
4 7
5 8
6 9
*/
#include<bits/stdc++.h>
using namespace std;
struct event
{
    int s,f;
    event() {}
    event(int _s, int _f)
    {
        s= _s;
        f= _f;
    }
    void print()
    {
        printf("Start time = %d  Finish time = %d\n",s,f);
    }
};
bool com(event a, event b)
{
    if(a.f<b.f)
        return true;
    else
        return false;
}
int main()
{
    int t,d;
    event p[100],select[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p[i].s>>p[i].f;
    }
    sort(p,p+n,com);

    int time=0,cnt=0,mi=0,j=0;
    for(int i=0; i<n; i++)
    {
        if(p[i].s>=time)
        {
            cnt++;
            time=p[i].f;
            select[j].f=time;
            select[j].s=p[i].s;
            j++;
        }
    }
    cout<<"Selected Activity is : "<<"\n";
    for(int i=0;i<cnt;i++) cout<<"("<<select[i].s<<","<<select[i].f<<")"<<"\n";
    cout<<"Maximum activity "<<cnt<<"\n";

    return 0;
}



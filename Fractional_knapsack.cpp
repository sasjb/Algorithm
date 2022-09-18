#include<bits/stdc++.h>
using namespace std;
struct Item
{
    int weight,value;
    Item(){}
    Item(int _wei, int _val)
    {
        weight= _wei;
        value= _val;
    }

};
bool com(Item a, Item b)
{
    double r1= (double) a.value/ (double) a.weight;
    double r2= (double) b.value/ (double) b.weight;
    if(r1>r2) return true;
    else return false;
}
int main()
{
    int value,weigh,W;
    Item p[100];
    int n; cin>>n>>W;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].value>>p[i].weight;
    }
    sort(p,p+n,com);

    int total=0,cnt=0,mi=0;
    for(int i=0;i<n;i++)
    {
        if(p[i].weight<=W)
        {
            W-=p[i].weight;
            total+=p[i].value;
        }
        else
        {
            total+=(p[i].value)*((double)W/(double)p[i].weight);
            break;
        }
    }
    cout<<"\nMaximum value/Profit is : "<<total<<"\n";

    return 0;
}


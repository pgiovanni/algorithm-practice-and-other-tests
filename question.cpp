#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int s[50],a,n;
    while(cin>>a)s[n++]=a;
    sort(s,s+n);
    for(int i=0;i<n-1;i++)cout<<s[i]<<'+';
    cout<<s[n-1]<<endl;
    return 0;
}
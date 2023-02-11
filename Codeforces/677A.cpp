#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int i;
    int count=0;
    while(n)
    {
        cin>>i;
        if(i>h){
            count+=2;
        }else{
        count+=1;
        }
        n--;
    }
    cout<<count;
    return 0;
}

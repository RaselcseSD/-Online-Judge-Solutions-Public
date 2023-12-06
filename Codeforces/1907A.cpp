#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    ios;
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--) {
        string pos;
        cin>>pos;
        string str = "abcdefgh";
        for(ll i = 1 ; i <= 8 ; i++) {
            if(pos[1]-'0'!=i)
                cout<<pos[0]<<i<<endl;
        }
        for(ll i = 0 ; i < 8 ; i++) {
            if(pos[0] != str[i]) {
                cout<<str[i]<<pos[1]<<endl;
            }
        }
    }
    return 0;
 }

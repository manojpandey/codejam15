#include <iostream>
#include <cstdio>
#include <string>
#include <utility> // pair
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring> //memset
using namespace std;
  
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef long long ll;
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define rep(i,n) for (i=0; i<n ; i++)
#define rep1(i,n) for (i=1; i<=n ; i++)
#define MAX 111111
#define MOD 10000000007
int a[MAX];

int main () {
    freopen ("d.in", "r", stdin);
    freopen ("d.out", "w", stdout);
    
    int t, x, r, c, z = 0, flag, size;
    // flag = 1 (R), 0(G)
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &x, &r, &c);
        size = r*c;
        flag = 1;
        if(x == 1) {
            printf("Case #%d: GABRIEL\n", ++z);
            continue;
        }
        if(r>=x || c>=x){
            if(r*c >= (x*((x+1)/2))){
                if((r*c)%x == 0){
                    if ((r % 2) == 0 && (c % 2) == 0 && abs(r - c) == 2 && (x>=r) &&(x>=c)) {
                        flag = 1;
                    } 
                    else flag = 0;
                }
            }
        }
        if(flag)
            printf("Case #%d: RICHARD\n", ++z);
        else printf("Case #%d: GABRIEL\n", ++z);
    }
    return 0;
}
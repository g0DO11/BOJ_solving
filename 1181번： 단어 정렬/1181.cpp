// undefined ************************************************************************** undefined
// undefined                                                                            undefined
// undefined                                               :::    :::    :::            undefined
// undefProblem Number: 11651                             :+:    :+:      :+:           undefined
// undefined                                             +:+    +:+        +:+          undefined
// undefBy: spiders22 <boj.kr/u/spiders22>              +#+    +#+          +#+         undefined
// undefined                                           +#+      +#+        +#+          undefined
// undefhttps://boj.kr/11651                          #+#        #+#      #+#           undefined
// undefSolved: 2024/03/25 04:41:27 by spiders22     ###          ###   ##.kr           undefined
// undefined                                                                            undefined
// undefined ************************************************************************** undefined
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int N=0;
string A[20202];
string s;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i];
    sort(A, A+N, [&](string a, string b){
        if(a.size()==b.size()) return a < b;
        return a.size() < b.size();
    });
    for(int i=0;i<N;i++) {
        if(s!=A[i]) cout<<A[i]<<'\n';
        s=A[i];
    }
    return 0;
}
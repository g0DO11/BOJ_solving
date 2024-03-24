/*undefined ************************************************************************** undefined*/
/*undefined                                                                            undefined*/
/*undefined                                               :::    :::    :::            undefined*/
/*undefProblem Number: 11651                             :+:    :+:      :+:           undefined*/
/*undefined                                             +:+    +:+        +:+          undefined*/
/*undefBy: spiders22 <boj.kr/u/spiders22>              +#+    +#+          +#+         undefined*/
/*undefined                                           +#+      +#+        +#+          undefined*/
/*undefhttps://boj.kr/11651                          #+#        #+#      #+#           undefined*/
/*undefSolved: 2024/03/25 04:07:55 by spiders22     ###          ###   ##.kr           undefined*/
/*undefined                                                                            undefined*/
/*undefined ************************************************************************** undefined*/
 

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int N=0;
pair<int, int> A[101010];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i].first>>A[i].second;
    sort(A, A+N, [&](pair<int, int> a, pair<int, int> b){
        if(a.second==b.second) return a.first < b.first;
        return a.second < b.second; 
    });
    for(int i=0;i<N;i++) cout<<A[i].first<<' '<<A[i].second<<'\n';
    return 0;
}
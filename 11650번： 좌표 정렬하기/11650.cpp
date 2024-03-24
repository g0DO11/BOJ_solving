/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 11650                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: spiders22 <boj.kr/u/spiders22>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/11650                          #+#        #+#      #+#    */
/*   Solved: 2024/03/25 01:00:28 by spiders22     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <algorithm>
using namespace std;

int N=0;
pair<int, int> A[101010];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin>>N;
    for(int i=0;i<N;i++) { cin>>A[i].first; cin>>A[i].second; }

    sort(A, A+N, [&](pair<int, int> a, pair<int, int> b){
        if(a.first==b.first) return a.second < b.second;
        return a.first < b.first;
    });

    for(int i=0;i<N;i++) cout<<A[i].first<<' '<<A[i].second<<'\n';
    return 0;
}
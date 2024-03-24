/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 10989                             :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: spiders22 <boj.kr/u/spiders22>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/10989                          #+#        #+#      #+#    */
/*   Solved: 2024/03/25 00:19:03 by spiders22     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
using namespace std;

int N=0, in=0;
int A[10001];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++) {
        cin>>in;
        A[in]+=1;
    }
    for(int i=1;i<10001;i++) {
        for(int j=1;j<=A[i];j++) cout<<i<<'\n';
    }
}
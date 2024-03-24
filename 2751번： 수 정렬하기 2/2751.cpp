/* ************************************************************************** */
/*                                                                            */
/*                                                      :::    :::    :::     */
/*   Problem Number: 2751                              :+:    :+:      :+:    */
/*                                                    +:+    +:+        +:+   */
/*   By: spiders22 <boj.kr/u/spiders22>              +#+    +#+          +#+  */
/*                                                  +#+      +#+        +#+   */
/*   https://boj.kr/2751                           #+#        #+#      #+#    */
/*   Solved: 2024/03/25 00:16:04 by spiders22     ###          ###   ##.kr    */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <algorithm>
using namespace std;

int N=0;
int A[1010101];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i];
    sort(A, A+N);
    for(int i=0;i<N;i++) cout<<A[i]<<'\n';
}
#include <bits/stdc++.h>
using namespace std;

set<size_t> subset_sum(vector<size_t>& A){
    set<size_t> S;
    for(size_t i = 0; i < (1 << A.size()); i++){
        size_t sum = 0;
        for(int j = 0; j < A.size(); j++)
            if(i & (1 << j))
                sum += A[j];
        S.insert(sum);
    }
    return S;
}

int main(){
    ios_base::sync_with_stdio(false);
    int N;
    size_t T;
    cin >> N >> T;
    vector<size_t> A(N);
    for(int i = 0; i < N; i++)
        cin >> A[i];
    
    vector<size_t> A1(A.begin(), A.begin() + N/2),
                    A2(A.begin() + N/2, A.end());
    set<size_t> S1 = subset_sum(A1),
                S2 = subset_sum(A2);
    size_t max = 0;
    vector<size_t> V2(S2.begin(), S2.end());
    for(size_t x: S1){
        int idx =  lower_bound(V2.begin(), V2.end(), T - x) - V2.begin();
        if(idx == V2.size())
            idx--;
        size_t sum = (x + V2[idx] > T) ? (x + V2[idx - 1]) : (x + V2[idx]);
        if(sum > max && sum <= T)
            max = sum;
        if(max == T)
            break;
    }

    cout << max << '\n';
    return 0;
}
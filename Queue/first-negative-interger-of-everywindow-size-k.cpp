#include<iostream>
using namespace std;
#include<queue>
#include<deque>
#include<vector>

vector<long long>printFirstNegativeInteger( long long int A[], long long int N, long long int K){
    
    deque<long long int>dq;
    vector<long long>ans;

    //for first window of size ka
    for (int i=0; i<K; i++){
        if(A[i]<0){
            dq.push_back(i);
        }
    }    
        //store answer as well
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    
    //for remaining window same logic

    for(int i=K; i<N; i++){
        //remval logic from front
        if(!dq.empty() && i-dq.front()>=K){
            dq.pop_front();
        }
        //addition from end 
        if(A[i]<0){
            dq.push_back(i);
        }
        //answer store for this windows
        if(dq.size()>0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }

    }

    return ans;


}

int main() {
    long long A[] = {12, -1, -7, 8, 15, 30, 16, 28};
    long long N = 8;
    long long K = 3;

    vector<long long> result = printFirstNegativeInteger(A, N, K);
    for (auto x : result)
        cout << x << " ";
    return 0;
}

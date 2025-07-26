#include<iostream>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Celebrity{

public:
    int findCelebrity(vector<vector<int>>& M, int n){
        stack<int>s;
        for(int i=0; i<n; i++){
            s.push(i);
        }
        int a, b;
        while(s.size()>1){
            a =s.top();
            s.pop();
            b =s.top();
            s.pop();
        }

        if(M[a][b]==1){
            s.push(b);
        }
        if(M[b][a]==1){
            s.push(a);
        }
        int Rcount=0;
        int ans=s.top();
        for(int i =0; i<n; i++){
            if(M[ans][i]==0)
                Rcount++;
        }

        int Ccount=0;
        for(int i =0; i<n; i++){
            if(M[i][ans]==1)
                Ccount++;
        }

        if(Rcount!=n){
            return -1;
        }
        if(Ccount!=n-1){
            return -1;
        }

        return ans;
 
    }
};

int main() {
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    Celebrity c;
    int result = c.findCelebrity(M, 3);
    
    if (result == -1)
        cout << "No celebrity found\n";
    else
        cout << "Celebrity is person " << result << "\n";

    return 0;
}
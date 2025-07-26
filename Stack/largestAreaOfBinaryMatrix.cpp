#include<iostream>
#include<vector>
#include<climits>
#include<stack>
using namespace std;
#define MAX 1000


class LargestAreaOfBinary{
    private:
        vector<int>nextSmallEle(vector<int>&array, int n){
            stack<int>s;
            vector<int>ans(n);

            s.push(-1);
            for(int i= n-1; i>=0; i--){
                int curr= array[i];
                while(s.top() != -1 && array[s.top()]>curr){
                    s.pop();
                }
                ans[i]=s.top();
                s.push(i);
            }
            return ans;

        }

        vector<int>prevSmallEle(vector<int>&array, int n){

            stack<int>s;
            vector<int>ans(n);

            s.push(-1);
            for(int i= 0; i<n; i++){
                int curr= array[i];
                while(s.top() != -1 && array[s.top()]>curr){
                    s.pop();
                }
                ans[i]=s.top();
                s.push(i);
            }
            return ans; 
        }

        int largestAreaOfRectangle(vector<int>&heights , int n){
            // int n=heights.size();

            vector<int>nextsmall(n);
            nextsmall = nextSmallEle(heights, n);

            vector<int>prevsmall(n);
            prevsmall = prevSmallEle(heights, n);

            int area = INT_MIN;

            for(int i=0; i<n; i++){

                if(nextsmall[i]==-1){
                    nextsmall[i]=n;
                }
                int l = nextsmall[i] - prevsmall[i]-1;
                int h= heights[i];

                int newarea = l*h;
                area = max(area, newarea);
            }
            return area;

        }




    public:
        int MaxArea(int M[MAX][MAX], int n, int m){
            // int area = largestAreaOfRectangle(M[0], m);
            vector<int> row(M[0], M[0] + m);
            int area = largestAreaOfRectangle(row, m);
            //above is for first row now check for remaining ones

            for(int i=1; i<n; i++){
                for(int j=0; j<m; j++){
                    if(M[i][j]!=0){
                        M[i][j]=M[i-1][j]+M[i][j];
                    }
                    else{
                        M[i][j]=0;
                    }
                    // area=max(area, largestAreaOfRectangle(M[i], m));

                }
                vector<int> row(M[i], M[i] + m);  // convert int* to vector<int>
                area = max(area, largestAreaOfRectangle(row, m));

                
            }
            return area;

        }
};

int main() {
    int M[MAX][MAX] = {
        {0, 1, 1, 0},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };
    int n = 4, m = 4;

    LargestAreaOfBinary lb;
    cout << "Max area: " << lb.MaxArea(M, n, m) << endl;

    return 0;
}
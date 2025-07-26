#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;



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

int largestAreaOfRectangle(vector<int>&heights){
    int n=heights.size();

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

int main(){
    vector<int> arr = { 2,1, 5, 6, 2 ,3};
    cout << "Largest area is: " << largestAreaOfRectangle(arr) << endl;
    return 0;

}
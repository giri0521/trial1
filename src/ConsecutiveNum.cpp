#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ConsecutiveNum(vector<int> v){
    if (v.empty()) return 0;
    int current= 1;
    int maxCount = 1;
    sort(v.begin(), v.end());
    for(int i = 1; i < v.size(); ++i){
        if(v[i] == v[i -1]){
            continue;
        }
        else if(v[i] == v[i - 1] + 1){
            current++;
        }
        else{
            maxCount = max(maxCount, current);
            current = 1;
        }
    }
    maxCount = max(maxCount, current);
    return maxCount;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin>> n;
    vector<int> v;
    v.reserve(n);
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << "Total consecutive numbers in the given list: " << ConsecutiveNum(v) << '\n';
    return 0;
}

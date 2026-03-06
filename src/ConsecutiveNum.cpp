#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int ConsecutiveNum(vector<int> v){
    // sort the copy since we're taking by value
    int count = 1;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; ++i){
        if(v[i+1] == v[i] + 1){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin>> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cout << "Total consecutive numbers in the given list: " << ConsecutiveNum(v) << '\n';
    return 0;
}

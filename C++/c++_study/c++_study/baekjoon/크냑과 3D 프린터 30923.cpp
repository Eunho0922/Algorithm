//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int x, max;
//    int arr[1000001];
//    cin >> x;
//    
//    for (int i = 0; i < x; i++) {
//        cin >> arr[i];
//    }
//    
//    for (int i = 0; i < x; i++) {\
//        max = arr[i];
//        for (int j = i + 1; j < x; j++) {
//            if (arr[j] > max) {
//                max = arr[j];
//                arr[j] = arr[i];
//                arr[i] = max;
//            }
//        }
//        cout << arr[i] << "\n";
//    }
//    
//}
//
//
//int n, k;
//
//void print(vector<int> v) {
//    for (int  i = 0 ;i < v.size(); i++) {
//        cout << v[i] << " ";
//    }
//    cout << "\n";
//}
//
//void combi(int start, vector<int> b) {
//    if (b.size() == k) {
//        // logic
//        print(b);
//        return;
//    }
//    
//    for (int i = start + 1; i < n; i++) {
//        b.push_back(i);
//        combi(i, b);
//        b.pop_back();
//    }
//    
//    return;
//}



//int main() {
//    
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int x, num1, num2, num3, num4;
//    int sum = 0;
//    
//    cin >> x;
//    
//    num1 = x / 10;
//    num2 = x % 10;
//    
//    num3 = num1 + num2;
//    num4 = num2 * 10 + num3;
//    
    
    
    

//    int N, k, x;
//    
//    cin >> N;
//    cin >> k;
//    
//    for (int i = 0; i < N; i++) {
//        cin >> x;
//        v.push_back(x);
//    }
//    sort(v.begin(),  v.end());
//    
//    cout << v[k - 1];
    
    
    
//}



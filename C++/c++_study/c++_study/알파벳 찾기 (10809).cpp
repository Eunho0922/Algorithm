//#include <stdio.h>
//#include <bits/stdc++.h>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    
//    string arr;
//    int alpha[27] = {-1,};
//    cin >> arr;
//
//    for (int j = 0; j < arr.size(); j++) {
//        for (int i = 0; i < 26; i++) {
//            if (arr[j] == i + 97 ) {
//                alpha[i] = j;
//                break;
//            }
//        }
//        
//    }
//    
//    for (int i = 0; i < 26; i++) {
//        if (alpha[i] == 0) {
//            cout << alpha[i] - 1 << " ";
//        } else {
//            cout << alpha[i] << " ";
//        }
//    }
//    
//    return 0;
//}

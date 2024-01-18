//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    stack<char> stk;
//
//    int T;
//    cin >> T;
//
//
//    for (int i = 0; i < T; i++) {
//
//        string str;
//        cin >> str;
//
//        for (int j = 0;j < str.length(); j++) {
//            if (str[j] == '(') {
//                stk.push(str[j]);
//            } else if(str[j] == ')') {
//                if (!stk.empty() && stk.top() == '(') {
//                    stk.pop();
//                } else {
//                    stk.push(str[j]);
//                }
//            }
//        }
//
//        if (!stk.empty()) {
//            cout << "NO\n";
//        } else {
//            cout << "YES\n";
//        }
//
//        while (!stk.empty()) {
//            stk.pop();
//        }
//    }
//}
//

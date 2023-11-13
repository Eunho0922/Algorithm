//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//    int a;
//    cin >> a;
//    
//    stack<int> stk;
//    
//    for (int i = 1; i <= a ; i++) {
//        string input;
//        cin >> input;
//        
//        if (input == "push") {
//            int num;
//            cin >> num;
//            stk.push(num);
//        } else if(input == "pop") {
//            if (stk.empty()) {
//                cout << "-1\n";
//            } else {
//                cout << stk.top() << "\n";
//                stk.pop();
//            }
//        } else if(input == "size") {
//            cout << stk.size() << "\n";
//        } else if (input == "empty") {
//            cout << stk.empty() << "\n";
//        } else {
//            if (stk.empty()) {
//                cout << "-1\n";
//            } else {
//                cout << stk.top() << "\n";
//            }
//        }
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//    
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    
//    int N;
//    cin >> N;
//    
//    stack<int> stk;
//    
//    for (int i = 1; i <= N; i++) {
//        int num;
//        cin >> num;
//        if (num == 1) {
//            int X;
//            cin >> X;
//            stk.push(X);
//        } else if (num == 2) {
//            if (stk.empty()) {
//                cout << "-1\n";
//            } else {
//                cout << stk.top() << "\n";
//                stk.pop();
//            }
//        } else if (num == 3) {
//            cout << stk.size() << "\n";
//        } else if (num == 4) {
//            if (stk.empty()) {
//                cout << "1\n";
//            } else {
//                cout << "0\n";
//            }
//        } else if (num == 5) {
//            if (stk.empty()) {
//                cout << "-1\n";
//            } else {
//                cout << stk.top() << "\n";
//            }
//        } else {
//            break;
//        }
//    }
//    return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(void) {
//    ios_base::sync_with_stdio();
//    cin.tie(NULL);
//    
//    stack<int> stk;
//    
//    int K;
//    cin >> K;
//    
//    for (int i = 0; i < K; i++) {
//        int num;
//        cin >> num;
//        if (num == 0) {
//            stk.pop();
//        } else {
//            stk.push(num);
//        }
//    }
//    
//    int result = 0;
//    while (!stk.empty()) {
//        result += stk.top();
//        stk.pop();
//    }
//    
//    cout << result;
//}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    
    stack<char> stk;
    
    int T;
    cin >> T;
    
    
    for (int i = 0; i < T; i++) {
        bool VSP = true;

        string str;
        cin >> str;
        for (int j = 0;j < str.length(); j++) {
            if (str[j] == '(') {
                stk.push(str[j]);
            } else {
                if (!stk.empty() && str[j] == ')' && stk.top() == '(') {
                    stk.pop();
                } else {
                    VSP = false;
                    break;
                }
            }
        }
        if (!stk.empty()) {
            VSP = false;
        }
        
        if (VSP == false) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        
    }
}

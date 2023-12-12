//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int N, input, max = 0;
//    double arr[1000];
//    double result = 0.0;
//
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> input;
//        arr[i] = input;
//    }
//
//    max = arr[0];
//
//    for (int i = 0; i < N; i++) {
//        if (max <= arr[i]) {
//            max = arr[i];
//        }
//    }
//    
//    for (int i = 0; i < N; i++) {
//        arr[i] = (arr[i] / max) * 100;
//    }
//    
//    for (int i = 0; i < N; i++) {
//        result += arr[i];
//    }
//    
//    result = result / N;
//    cout << result;
//    
//    
//}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int T = 0;
//    cin >> T;
//    for (int i = 0; i < T ; i++ ) {
//        string s;
//        cin >> s;
//        if (s.length() < 2) {
//            cout << s[0] << s[0] << endl;
//        } else {
//            cout << s[0] << s[(s.length()) - 1] << endl;
//        }
//    }
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int n;
//    char ch;
//    
//    cin >> n;
//    
//    int total = 0;
//
//    for (int i = 0; i < n; i++) {
//        cin >> ch;
//        total += ch - 48;
//    }
//    
//    cout << total << endl;
//}

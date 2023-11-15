#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin >> input;

    deque<int>(deq);

    for (int i = 0; i< input; i++) {
        int command;
        cin >> command;

        if (command == 1) {
            int X;
            cin >> X;
            deq.push_front(X);
        } else if(command == 2) {
            int X;
            cin >> X;
            deq.push_back(X);
        } else if(command == 3) {
            if (deq.empty()) {
                cout << "-1\n";
            } else {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        } else if(command == 4) {
            if (deq.empty()) {
                cout << "-1\n";
            } else {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        } else if(command == 5) {
            cout << deq.size() << "\n";
        } else if(command == 6) {
            if (deq.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if(command == 7) {
            if (deq.empty()) {
                cout << "-1\n";
            } else {
                cout << deq.front() << "\n";
            }
        } else if(command == 8) {
            if (deq.empty()) {
                cout << "-1\n";
            } else {
                cout << deq.back() << "\n";
            }
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
const int N = 2e3 + 5;
// ifstream in("data.txt", ios::in);
ifstream in("email-Eu-core.txt", ios::in);
ofstream out1("csr_col_index.txt.", ios::out);
ofstream out2("csr_ptr.txt", ios::out);
ofstream out3("ans.txt", ios::out);

vector<int> node[N];
vector<int> ptr, col_index;

int main() {
    int a, b;
    while (in >> a >> b) {
        node[a].push_back(b);
    }

    int ptr_cnt = 0;
    for (auto x : node) {
        if (x.size()) {
            ptr.push_back(ptr_cnt);
            ptr_cnt += x.size();
            for (auto y : x) {
                col_index.push_back(y);
            }
        }
    }
    ptr.push_back(col_index.size());

    for (auto x : col_index) out1 << x << ' ';
    out1 << '\n';

    for (auto x : ptr) out2 << x << ' ';
    out2 << '\n';

    cout << col_index.size() << " " << ptr.size() << '\n';
    
}
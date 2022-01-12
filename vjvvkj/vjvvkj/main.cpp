#include<cstdio>
using namespace std;

string caseConversion (string s) {
   // Write your code here that converts the given camel case string s  and
   // returns a snake case version of that string
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        string s;
        cin>>s;
        string out_;
        out_ = caseConversion(s);
        cout << out_;
        cout << "\n";
    }
}

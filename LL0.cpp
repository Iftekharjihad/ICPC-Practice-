#include <bits/stdc++.h>
using namespace std;
using Prod = vector<string>;

vector<string> split_ws(const string &s){
    vector<string> out;
    string cur;
    for(char c : s){
        if(isspace((unsigned char)c)){
            if(!cur.empty()){ out.push_back(cur); cur.clear(); }
        } else {
            cur.push_back(c);
        }
    }
    if(!cur.empty()) out.push_back(cur);
    return out;
}
vector<string> tokenize_input(const string &line){
    auto parts = split_ws(line);
    if(parts.size() <= 1){
        vector<string> chars;
        for(char c : line) if(!isspace((unsigned char)c)) chars.push_back(string(1,c));
        return chars;
    }
    return parts;
}

bool is_nonterminal(const string &sym, const unordered_set<string>& nonterms){
    return nonterms.find(sym) != nonterms.end();
}

bool ll0_parse(const unordered_map<string, Prod>& prods,
               const string& start,
               const vector<string>& input_tokens,
               const unordered_set<string>& nonterms)
{
    vector<string> st;
    st.push_back("$"); 
    st.push_back(start);

    size_t ip = 0;
    vector<string> inp = input_tokens;
    inp.push_back("$");

    while(!st.empty()){
        string top = st.back();
        string curtok = (ip < inp.size() ? inp[ip] : "$");
        if(top == "$"){
            if(curtok == "$"){
                return true;
            } else {
                return false;
            }
        }
        if(is_nonterminal(top, nonterms)){
            auto it = prods.find(top);
            if(it == prods.end()){
                cerr << "No production for nonterminal " << top << "\n";
                return false;
            }
            const Prod &rhs = it->second;
            st.pop_back();
            if(rhs.size() == 1 && rhs[0] == "eps"){
                continue;
            }
            for(auto rit = rhs.rbegin(); rit != rhs.rend(); ++rit){
                st.push_back(*rit);
            }
            continue;
        }
        if(top == curtok){
            st.pop_back();
            ip++;
            continue;
        } else {
            return false;
        }
    }
    return (ip == inp.size());
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unordered_map<string, Prod> prods;
    prods["S"] = Prod{"a", "A"};
    prods["A"] = Prod{"b"};
    string start = "S";
    unordered_set<string> nonterms = {"S", "A"};

    cout << "LL(0) parser example\n";
    cout << "Grammar:\n  S -> a A\n  A -> b\n";
    cout << "Enter input tokens (space separated). Example: a b  OR just: ab\n> ";

    string line;
    if(!getline(cin, line)) return 0;

    auto tokens = tokenize_input(line);

    cout << "Tokens: ";
    for(auto &t : tokens) cout << "'" << t << "' ";
    cout << "\n";

    bool ok = ll0_parse(prods, start, tokens, nonterms);
    cout << (ok ? "ACCEPTED\n" : "REJECTED\n");

    return 0;
}

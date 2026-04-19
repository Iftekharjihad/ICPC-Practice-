#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int sz = 0;
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    sz++;
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_pos(Node* &head,Node* &tail, int val, int idx){
    if(idx == 0){
        Node* newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        sz++;
        return;
    }
    // if(idx == sz-1){
    //     insert_at_tail(head,tail,val);
    //     return;
    // }
    Node* tmp = head;
    for(int i = 0; i < idx-1; i++){
        tmp = tmp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = tmp->next;
    tmp->next = newnode;
    sz++;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void rec(Node* tmp){
    if(tmp == NULL)return;
    rec(tmp->next);
    cout << tmp->val << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int val;
        cin >> val;
        if(val == -1)break;
        insert_at_tail(head,tail,val);
    }
    int q;
    cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;
        if(x > sz){
            cout << "Invalid" << endl;
            continue;
        }
        insert_at_any_pos(head,tail,y,x);
        print_linked_list(head);
        cout << endl;
    }
    
    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtBottom(st, element);

    st.push(topElement);
}

void reverse(stack<int>& st){
    if(st.empty()){
        return;
    }

    int topElement = st.top();
    st.pop();

    reverse(st);

    insertAtBottom(st, topElement);
}

void print(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(){
    stack<int> st;

    st.push(4);
    st.push(5);
    st.push(2);
    st.push(25);

    cout << "stack before reverse: ";
    print(st);

    reverse(st);

    cout << "stack after reverse: ";
    print(st);

    return 0;
}
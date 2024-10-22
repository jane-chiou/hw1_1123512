#include <iostream>
#include <queue>

using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    
    if (n % 2 != 0) {
        cout << "The length of queue must be even number." << endl;
        return;
    }

    queue<int> firstHalf;

    for (int i = 0; i < n / 2; i++) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {

        q.push(firstHalf.front());
        firstHalf.pop();


        q.push(q.front());
        q.pop();
    }
}

int main() {

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout << "Queue before interleave: ";
    queue<int> temp = q;  
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    interleaveQueue(q);

    cout << "Queue after interleave: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}

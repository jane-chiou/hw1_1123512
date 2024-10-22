#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[4] = {4, 5, 2, 25};
    int Max = 0;
    for(int i = 0; i < 4; i++){
        if(i < 3){
            Max = max(arr[i], arr[i + 1]);
        }
    }

    for(int a = 0; a < 4; a++){
        cout << arr[a] << " -> ";
        if(a == 3){
            cout << -1 << endl;
        }

        for(int b = a + 1; b < 4; b++){
            if(arr[b] > arr[a]){
                cout << arr[b] << endl;
                break;
            }
            else if(arr[a] == Max){
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};
    bool visited[5] = {false};  

    for (int i = 0; i < 5; i++) {
        if (visited[i]) 
            continue;  

        int count = 1;
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true; 
            }
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
}

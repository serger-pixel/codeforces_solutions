#include<isotream>
using namespace std;



int solutions(int n, int x){
    if (n%2 == 0){
        return 0;
    }
    return -x;
}

int main() {
    int t;
    int n, x;
    for (int i = 0; i< t; i++){
        cin >> n >> x;
        cout << solutions(n, x) << endl;
    }
}
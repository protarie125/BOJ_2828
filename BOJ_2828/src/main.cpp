#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int left{ 1 };
    int right{ M };

    int J;
    cin >> J;

    int move{ 0 };
    for (int i = 0; i < J; ++i)
    {
        int p;
        cin >> p;

        if (p < left) {
            int m = left - p;
            move += m;
            left = p;
            right -= m;
        }
        else if (right < p) {
            int m = p - right;
            move += m;
            right = p;
            left += m;
        }
    }

    cout << move;

    return 0;
}
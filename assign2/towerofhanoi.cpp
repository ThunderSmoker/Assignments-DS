#include <iostream>
using namespace std;
void tower0fHanoi(int n, char from, char to, char help)
{
    if (n == 0) return;
    tower0fHanoi(n - 1, from, help, to);
    cout << "MOVE DISK " << n << " from rod" << from << " to rod " << to << "\n";
    tower0fHanoi(n - 1, help, to, from);
}

int main()
{
    int n = 3;
    tower0fHanoi(3, 'A', 'B', 'C');
    return 0;
}
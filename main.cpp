// Mason Ayala
// Lab 9 - Call and Return

#include <iostream>
using namespace std;

double average(const int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return (double)sum / n;
}

void printSummary(double avg)
{
    cout << "Average: " << avg << "\n";
}

int main()
{
    const int N = 4;
    int scores[N] = { 80, 90, 70, 100 };

    double avg = average(scores, N);
    printSummary(avg);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void generateRandomArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100000;
    }
}

void generateWorstCase(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
}

void generateBestCase(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
}

int main()
{
    srand(time(0));

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr_best(n), arr_worst(n), arr_average(n);
    vector<int> temp(n);

    generateBestCase(arr_best.data(), n);
    generateWorstCase(arr_worst.data(), n);
    generateRandomArray(arr_average.data(), n);

    copy(arr_best.begin(), arr_best.end(), temp.begin());
    clock_t start = clock();
    selectionSort(temp.data(), n);
    clock_t end = clock();
    cout << "Selection Sort (Best Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_worst.begin(), arr_worst.end(), temp.begin());
    start = clock();
    selectionSort(temp.data(), n);
    end = clock();
    cout << "Selection Sort (Worst Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_average.begin(), arr_average.end(), temp.begin());
    start = clock();
    selectionSort(temp.data(), n);
    end = clock();
    cout << "Selection Sort (Average Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_best.begin(), arr_best.end(), temp.begin());
    start = clock();
    insertionSort(temp.data(), n);
    end = clock();
    cout << "Insertion Sort (Best Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_worst.begin(), arr_worst.end(), temp.begin());
    start = clock();
    insertionSort(temp.data(), n);
    end = clock();
    cout << "Insertion Sort (Worst Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_average.begin(), arr_average.end(), temp.begin());
    start = clock();
    insertionSort(temp.data(), n);
    end = clock();
    cout << "Insertion Sort (Average Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_best.begin(), arr_best.end(), temp.begin());
    start = clock();
    bubbleSort(temp.data(), n);
    end = clock();
    cout << "Bubble Sort (Best Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";
    
    copy(arr_worst.begin(), arr_worst.end(), temp.begin());
    start = clock();
    bubbleSort(temp.data(), n);
    end = clock();
    cout << "Bubble Sort (Worst Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    copy(arr_average.begin(), arr_average.end(), temp.begin());
    start = clock();
    bubbleSort(temp.data(), n);
    end = clock();
    cout << "Bubble Sort (Average Case) Time: " << fixed << setprecision(6) << ((double)(end - start)) / CLOCKS_PER_SEC * 1000 << " milliseconds\n";

    return 0;
}

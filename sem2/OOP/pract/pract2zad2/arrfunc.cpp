
#include <algorithm>

inline double arrSum(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

inline double arrAvg(double arr[], int n) 
{
    double sum = arrSum(arr, n);

    return sum / n;
}

inline double medianArr(double arr[], int n)
{
    double median;

    std::sort(arr, arr + n);

    if(n % 2 == 0)
    {
        median = (arr[n/2] + arr[n/2 +1])/ 2;
    }
    else
    {
        median = arr[n/2];
    }

    return median;
}
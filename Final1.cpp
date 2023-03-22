#include <iostream> 
using namespace std; 

double averageSum(double num1[], double num2[], double size)
{
    double sum1  = 0; 
    double sum2 = 0;

    for (int i = 0; i < size; i++)
    {
        sum1 += *(num1 + i);
        sum2 += *(num2 + i);

    }

    return sum1 / size + sum2 / size;

 }

 int main()
{

    const int size = 10; 
    double num1[size] = {240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    double num2[size] = {10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    double sum; 

    sum = averageSum(num1, num2, size);
    cout << "Average of the Nums: " << sum << endl; 
}

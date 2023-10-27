#include <iostream>
using namespace std;

int main()
{
    cout << "Task #1\n";
    double num1;
    double num2;
    double sum;

    cout << "Input first number: ";
    cin >> num1;
    cout << "Input second number: ";
    cin >> num2;

    double* pNum1 = &num1;
    double* pNum2 = &num2;
    double* pSum = &sum;

    *pSum = *pNum1 + *pNum2;
    cout << "Sum: " << *pSum << "\n\n";

    cout << "Task #2\n";

    double height;
    double idealWeight;
    double weightDifference;
    double temp = 100.0;

    cout << "Input your height: ";
    cin >> height;
    cout << "Input your ideal weight: ";
    cin >> idealWeight;

    double* pHeight = &height;
    double* pIdealWeight = &idealWeight;

    double** ptrHeight = &pHeight;
    double** ptrIdealWeight = &pIdealWeight;

    weightDifference = **ptrHeight - temp - **ptrIdealWeight;

    cout << "For ideal weight yor need: ";
    if (weightDifference < 0)
    {
        cout << "lose " << weightDifference << " kg\n";
    }
    else
    {
        cout << "gain " << weightDifference << " kg\n";
    }

}

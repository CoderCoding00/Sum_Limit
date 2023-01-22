// THE SUM LIMIT PROBLEM

// Given 2 non-negative ints, a and b, print their sum,
// so long as the sum has the same number of digits as a.
// If the sum has more digits than a, just return a without b.

//  • inputof(2,3) - 5
//  • inputof(8,3) - 8
//  • inputof(8,1) -9

// Solution 1

int sumLimit(int a, int b)
{
    int result;
    if (a + b <= 9)
        return a + b;
    else
        result = a;

    return result;
}

// Solution 2

// int sumLimit(int a, int b)
// {
//     int sum = a + b;
//     int aDigits = 0;
//     int sumDigits = 0;
//     int temp = a;
//     while (temp > 0)
//     {
//         temp /= 10;
//         aDigits++;
//     }
//     temp = sum;
//     while (temp > 0)
//     {
//         temp /= 10;
//         sumDigits++;
//     }
//     if (sumDigits == aDigits)
//         return sum;
//     else
//         return a;
// }

// *** TEST CASES

// int main()
// {
//    cout << "Testing sumLimit(2, 3): " << sumLimit(2, 3) << endl;
//    cout << "Testing sumLimit(8, 3): " << sumLimit(8, 3) << endl;
//    cout << "Testing sumLimit(8, 1): " << sumLimit(8, 1) << endl;
//    return 0;
// }
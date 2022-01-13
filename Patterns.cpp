#include <iostream>
using namespace std;
int main()
{
    // Pattern 1
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = i;
        while (j <= (n))
        {

            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 2,3
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            // cout << j;
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 4
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << "  ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 5,6,7
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*"; // j //1
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 8
    int count = 0;
        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                count = count + 1;
                cout << count << " ";
                j = j + 1;
            }
            cout << endl;
            i = i + 1;
        }

    // Pattern 9
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 9 - different way of upper
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 10
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 11 while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char z = 'A' + i - 1;
            // char z = char(65 + i - 1);
            cout << z;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 12
    while (i <= n)
    {
        int j = 1;
        char z = 'A';
        while (j <= n)
        {
            // char z = 'A' + j - 1;  //other method
            cout << z;
            z = 'A' + j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 13
    while (i <= n)
    {
        int j = 1;
        char z = 'A';
        while (j <= n)
        {
            int x = i + j - 2;
            z = 'A' + x;
            cout << z;

            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 14
    while (i <= n)
    {
        int j = 1;
        char z = 'A';
        while (j <= i)
        {

            cout << char('A' + i - 1);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 15
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i + j - 2);
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 16
    while (i <= n)
    {
        int j = 1;
        char start = 'A' + n - i;
        while (j <= i)
        {
            cout << start;
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 17
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 18
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        int k = 1;
        while (k <= i - 1)
        {
            cout << "*";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }

    //Pattern 19
    while (i <= n)
    {
        int j = 1;
        int x = n - i + 1;
        while (j <= x)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 20
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        int x = n - i + 1;
        while (j <= x)
        {
            cout << "*";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    // Pattern 21
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        int x = n - i + 1;
        while (j <= x)
        {
            cout << i;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    // Pattern 22
    while (i <= n)
    {
        int space = n - i + 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    // Pattern 23
    while (i <= n)
    {
        int space = n - i + 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        int x = i;
        while (j <= i)
        {
            cout << x;
            x = x + 1;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }

    // Pattern 24
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }

        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Pattern 25
    while (i <= n)
    {
        int j = 1;
        int start = n - i + 1;
        while (j <= start)
        {
            cout << j;
            j = j + 1;
        }

        int k = 1;
        while (k <= i - 1)
        {
            cout << "f";
            k = k + 1;
        }
        int l = 1;
        while (l <= i - 1)
        {
            cout << "f";
            l = l + 1;
        }

        int m = 1;
        int start3 = n + i;
        while (m <= start)
        {
            cout << n - m - i + 2;
            m = m + 1;
        }

        cout << endl;
        i = i + 1;
    }
}

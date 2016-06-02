/* functions examples */
#include <iostream> //std::cout
#include <algorithm> //std::for_each
#include <vector> //std::vector

using namespace std;

//function prototype
int add(int a, int b);
double cube(double x);
void showInt(int a);
long double chance(unsigned number, unsigned picks);

int main()
{
        int z;
        double choises, picks;

        //simple function
        z = add(2,3);
        cout << "Adding 2+3 = " << z << endl;
        cout << "Cube of 4 = " << cube(4) << endl;

        // using function to show vector values
        vector<int> v{1, 2, 3, 4, 5, 6};
        for_each(v.begin(), v.end(), &showInt);

        cout << endl;

        cout << "Total number of picks (e.g. 6 for 6/49): ";
        cin >> picks;
        cout << "Enter number of total choices (e.g. 49 for 6/49): ";
        cin >> choises;

        cout << "You have one chance in ";
        cout << chance(choises, picks);
        cout << " of winning." << endl;

        return 0;
}
//****definitions****

int add(int a, int b)
{
        int r;
        r = a +b;
        return r;
}

double cube(double x)
{
        return x * x * x;
}

//Printing values
void showInt(int a)
{
        cout << a << ' ';
}

//Calculate chance
long double chance(unsigned number, unsigned picks)
{
        long double result = 1.0;
        long double n;
        unsigned p;
        for(n = number, p = picks; p > 0; n--, p--)
                result = result * n / p;
        return result;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {0, 1, 2, 3, 4, 5};
    cout << "Vector: " << endl;

    //Range c++11
    for (const int &i: v)
        cout << i << ' ';
    cout << endl;

    //iterators
    for ( vector<int>::iterator i = v.begin(); i != v.end(); ++i )
        cout << *i << ' ';
    cout << endl;

    //indices
    for( vector<int>::size_type i = 0; i != v.size(); i++ )
        cout << v[i] << ' ';
    cout << endl;

    for(int i: {6, 7, 8, 9, 10, 11})
        cout << i << ' ';
    cout << endl;

    int a[] = {12, 13, 14, 15, 16, 17};
    cout << "Array: " << endl;

    //Range
    for (int i: a)
        cout << i << ' ';
    cout << endl;

    /* //Iterators */
    /* for(element_type* i = a; i != (a + (sizeof(a)/sizeof(a*))); i++) */
    /*     cout << *i << ' '; */
    /* cout << endl; */

    //Indices
    for (unsigned int i, l = (sizeof(a)/sizeof(*a)); i < l; i++)
        cout  << a[i] << ' ';
    cout << endl;

    return 0;
}


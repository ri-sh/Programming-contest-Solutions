//http://www.cse.iitk.ac.in/users/aca/lop13/codes/lec2/vector.cpp


#include <bits/stdc++.h>

using namespace std;

vector <int> unique1 (vector <int> a)
{
    sort (a.begin(), a.end());

    int sz = unique (a.begin(), a.end()) - a.begin();

    //cout << sz << endl;

    //a.resize (sz);

    return a;
}

vector <int> unique2 (vector <int> a)
{
    set <int> st (a.begin(), a.end());
    vector <int> res (st.begin(), st.end());

    return res;
}


int main()
{
    vector <int> a;
    for (int i = 0; i < 5; i++)
        a.push_back (1);

    for (int i = 0; i < 5; i++)
        a.push_back (2);
    /*
    // operations
    sort (a.begin (), a.end());

    reverse (a.begin(), a.end());

    sort (a.rbegin(), a.rend());

    // unique
    */

    // creating a new vector using previous vector
    // creating a set using vector
    // deleting an element at perticular index
    // talk about how capacity is decided in this case.

    vector <int> fir = unique1 (a);

    cout << "fir" << endl;
    for (int i = 0; i < fir.size(); i++)
        cout << fir[i] << " ";
    cout << endl;


    vector <int> sec = unique1 (a);
    cout << "sec" << endl;
    for (int i = 0; i < sec.size(); i++)
        cout << sec[i] << " ";
    cout << endl;

    return 0;
}

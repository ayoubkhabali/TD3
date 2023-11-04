#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

bool recherche_element(set<int> &s, int element) {
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        if (*it == element) {
            return true;
        }
    }
    return false;
}

bool updated_recherche_element(set<int> &s,set<int>::iterator it1,set<int>::iterator it2, int element ) {
     set<int>::iterator it;   
    for (it= it1; it1 != it2; ++it) {
         if (*it == element) {
            return true;
        }       
    }

    return false;
}

int main() {
    set<int> set1;

    for (int i = 1; i <= 100; ++i) {
        set1.insert(i);
    }
    int x;
    cout << "Saisez un valeur que tu vas chercher : ";
    cin >> x;

    set<int>::iterator it1 = set1.begin();
    set<int>::iterator it2 = set1.begin();

    set<int>::iterator index1 =  std::advance(it1,2);
    set<int>::iterator index2 =   std::advance(it2,10);

    if (updated_recherche_element(set1, std::advance(it1,2) ,std::advance(it2,10),12)) {
        cout << "cet valeur existe dans la set" << endl;
    } else {
        cout << "cet valeur n'existe pas dans la set" << endl;

    }


    return 0;
}
#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;
using std::string;

void show_list(list<int> g) {
        list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


// void tri_par_selection(list<int> &lst) {
//     for (list<int>::iterator current = lst.begin(); current != lst.end(); ++current) {
//         list<int>::iterator minElement = current;

//             for (list<int>::iterator next = std::next(current); next != lst.end(); ++next) {
//                 if (*next < *minElement) {
//                     minElement = next;
//                 }
//             }

//         if (minElement != current) {
//             iter_swap(current, minElement);
//         }
//     }
// }



void tri_par_insertion(list<int> &lst) {
    for (list<int>::iterator current = std::next(lst.begin()); current != lst.end(); ++current) {
        int key = *current;
        list<int>::iterator prev = current;
        
        while (prev != lst.begin() && *std::prev(prev) > key) {
            *prev = *std::prev(prev);
            --prev;
        }
        
        *prev = key;
    }
}


void tri_bull(list<int> &lst) {
    bool swapped;
    do {
        swapped = false;
        list<int>::iterator current = lst.begin();
        list<int>::iterator next = std::next(current);
         while (next != lst.end())   {
                if (*current > *next)  {
                iter_swap(current,next);
                swapped = true;
                }
            current = next;
            ++next;
        }


    } while (swapped);
    
}

void tri_par_selection(list<int> &lst) {

    for (list<int>::iterator current = lst.begin(); current != lst.end(); ++current) {
        list<int>::iterator minElement = current;
                for (list<int>::iterator next = std::next(current); next != lst.end(); ++next) {
                    if (*current < *minElement) {
                        minElement = next;
                    }
                }
                if (minElement != current) {
                     iter_swap(current, minElement);
               }

    }
}

int main() {
    list<int> list1;
    int taille;
    cout << "Saisez la taille de list : ";
    cin >> taille;
    int temp;

    for (int i=0; i<taille; i++) {
        cout << "Saisez l'entier n" << i+1 << " : ";
        cin >> temp;
        list1.push_back(temp) ;
    }
    tri_par_selection(list1);
    show_list(list1);
    
    return 0;
}
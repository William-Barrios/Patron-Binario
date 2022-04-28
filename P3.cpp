//William Barrios
#include <iostream>

using namespace std;

void intercambio(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


void mezclar(int* a, int* b, int* c)
{
    int* p = a;
    int* q = b;
    bool x = true;
    
    while (x) {
        if (q != c) {
            if (p != q) {
                if (*p > *q) {
                    intercambio(p, q);
                }
                else {
                    p++;
                }
            }
            else {
                p = a;
                q++;
            }
        } 
        else{
            q = c - 1;
            if (*q > *c) {
                intercambio(c, q);
            }
            x = false;
        }
    }
}

int main() {
    int A[10] = { 3,7,15,23,71,2,20,30,32,70 };

    cout << "Array antes" << endl;
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;

    mezclar(&A[0], &A[5], &A[9]);

    cout << "Array despues" << endl;
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;

}
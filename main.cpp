#include <iostream>
#include "number_bucket.h"
using namespace std;

int main() {
    int value = 30;

    num_bucket bucket;

    cout << bucket.get_size() << endl;


    cout << bucket.isEmpty() << endl;

    bucket.push(value);


    cout << bucket.get_size() << endl;

    bucket.pop();

    cout << bucket.get_size() << endl;
    return 0;
}

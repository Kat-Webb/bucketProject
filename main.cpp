using namespace std;
#include "number_bucket.h"


int main() {
    int value = 30;

    
    //assigning the variable name bucket to the object num_bucket
    num_bucket bucket;

    //checking the size of the bucket with get_size
    cout << "The bucket has " << bucket.get_size() << " values in it." << endl;

    //checking if the bucket is empty via boolean. The bucket should be empty right now.
    cout << bucket.isEmpty() << endl;

    //adding in a value via push function.
    bucket.push(value);
    
    //checking the number of numbers in the bucket at this point, which should be one. 
    cout << "The number of numbers in the bucket is: " << bucket.get_size() << endl;

    //asking the user to input a value that will then be pushed 
    cout << "Please enter a value to input" << endl;
    cin >> value;
    bucket.push(value);

    //checking to see if the bucket is empty or not. it shouldn't be.
    cout << bucket.isEmpty() << endl;
    
    //printing the values in the bucket. I know you didn't ask for it I just found it useful in testing :)
    bucket.print();
   
    //checking the number of numbers in the bucket again
    cout << "The number of numbers in the bucket is: "<< bucket.get_size() << endl;

    //removing a value from the bucket
    bucket.pop();

    // tells the user the number of numbers in the bucket one more time
    cout << "Now the number of numbers in the bucket is: " << bucket.get_size() << endl;
    return 0;
}

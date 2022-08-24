#include <iostream>
#include <vector>
using namespace std;

class num_bucket{
public:
//constructor is always public
//constructor recalls num_bucket, and creates the frame for it
    vector<int> bucket;
//constructor
    num_bucket(){
        //asks the vector to hold up to 100 values, but potentially less.
        bucket.reserve(100);
    };
    ~num_bucket(){
        //erases the values inside the vector, making the length zero.
        bucket.clear();
    };
    //push function
    void push(int value){
        bucket.push_back(value);
    };

    //erases the first item in the vector at that moment.
    void pop(){
        bucket.erase(bucket.begin());
    }

    int get_size(){
        return bucket.size();
    }
    bool isEmpty(){
       return bucket.empty();
    }
private:

};

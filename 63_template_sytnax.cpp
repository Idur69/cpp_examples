// Template:

/*
Templates are used to define data types as a parameters 
making  it useful to reduce repitation of the same declaration 
of the classes  for different  data types.

classes are templates of objects, 
here templates itself templates of the classes.

That is, what classes are for objects, templates are for classes.

why templates?
1. Dont Repeat yourself.
2. Generic Programming.
*/

// sytax:

template <class T>

class vector{
    T *arr;
    int size;
    public:
        vector(T * arr){
            // code
        }
        // many other methods

};

int main(){
    vector <int>myVec(3);
    vector <float>myVec(3);

    return 0;
}
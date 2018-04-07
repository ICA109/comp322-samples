// A generic sort function 
template <class T>
T sort(T arr[], int size)
{
    // code to implement Quick Sort
    return arr[0];
}
 
// Template Specialization: A function 
// specialized for char data type
template <>
char sort<char>(char arr[], int size)
{
    // code to implement counting sort
    return arr[0];
}

int main() {
    return 0;
}
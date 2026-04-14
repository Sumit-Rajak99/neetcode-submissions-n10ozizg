class DynamicArray {
private:
    int* arr;        // pointer to dynamic array
    int size;        // current number of elements
    int capacity;    // current capacity

public:

    // Constructor
    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        arr = new int[capacity];
    }

    // Get element at index
    int get(int i) {
        if (i < 0 || i >= size) {
            throw out_of_range("Index out of bounds");
        }
        return arr[i];
    }

    // Set element at index
    void set(int i, int n) {
        if (i < 0 || i >= size) {
            throw out_of_range("Index out of bounds");
        }
        arr[i] = n;
    }

    // Add element at end
    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = n;
    }

    // Remove last element
    int popback() {
        if (size == 0) {
            throw out_of_range("Array is empty");
        }
        return arr[--size];
    }

    // Double the capacity
    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        delete[] arr;
        arr = newArr;
    }

    // Return current size
    int getSize() {
        return size;
    }

    // Return current capacity
    int getCapacity() {
        return capacity;
    }

    // Destructor (important to prevent memory leak)
    ~DynamicArray() {
        delete[] arr;
    }
};

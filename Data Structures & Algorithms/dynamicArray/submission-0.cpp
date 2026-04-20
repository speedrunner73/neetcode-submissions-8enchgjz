class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;

public:
    DynamicArray(int capacity) {
        this->capacity = capacity;
        this->size = 0;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size] = n;
        ++size;
    }

    int popback() {
        int val = arr[size - 1];
        --size;
        return val;
    }

    void resize() {
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];

        // copy old elements
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        // free old memory
        delete[] arr;

        // point to new array
        arr = newArr;
        capacity = newCapacity;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};

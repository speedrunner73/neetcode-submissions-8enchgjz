class DynamicArray {
    private int[] arr;
    private int size;
    private int capacity;

    public DynamicArray(int capacity) {
        size = 0;
        this.capacity = capacity;
        arr = new int[capacity];
    }

    public int get(int i) {
        return arr[i];
    }

    public void set(int i, int n) {
        arr[i] = n;
    }

    public void pushback(int n) {
        if (size == capacity) {
            resize();
        }
        arr[size] = n;
        size++;
    }

    public int popback() {
        int val = arr[size - 1];
        size--;
        return val;
    }

    private void resize() {
        int newCapacity = 2 * capacity;
        int[] newArr = new int[newCapacity];

        for (int i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        arr = newArr;
        capacity = newCapacity;
    }

    public int getSize() {
        return size;
    }

    public int getCapacity() {
        return capacity;
    }
}

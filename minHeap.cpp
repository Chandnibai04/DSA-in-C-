#include<iostream>
using namespace std;

class heap {
    public:
        int arr[100];
        int size;

        heap() {
            arr[0] = -1;  // Placeholder to make the array 1-based
            size = 0;
        }

        // Insert a value into the heap
        void insert(int val) {
            size = size + 1;
            int index = size;
            arr[index] = val;

            // Maintain min-heap property by heapifying up
            while (index > 1) {
                int parent = index / 2;
                if (arr[parent] > arr[index]) { // Swap if parent is larger than the child
                    swap(arr[parent], arr[index]);
                    index = parent;
                } else {
                    return;
                }
            }
        }

        // Delete the root element from the heap
        void deletefromHeap() {
            if (size == 0) {
                cout << "Nothing to delete" << endl;
                return;
            }
            arr[1] = arr[size];
            size--;

            int i = 1;
            while (i <= size) {
                int leftIndex = 2 * i;
                int rightIndex = 2 * i + 1;

                // Find the smallest among the current node and its children
                if (leftIndex <= size && arr[i] > arr[leftIndex]) {
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                } 
                else if (rightIndex <= size && arr[i] > arr[rightIndex]) {
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                } 
                else {
                    return;
                }
            }
        }

        // Print the elements of the heap
        void print() {
            for (int i = 1; i <= size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        // Heapify function for building a heap from an array
        void heapify(int arr[], int n, int i) {
            int smallest = i;
            int left = 2 * i;
            int right = 2 * i + 1;

            // Check if left child exists and is smaller than the current smallest
            if (left <= n && arr[smallest] > arr[left]) {
                smallest = left;
            }
            // Check if right child exists and is smaller than the current smallest
            if (right <= n && arr[smallest] > arr[right]) {
                smallest = right;
            }

            // If smallest is not the current node, swap and heapify the affected subtree
            if (smallest != i) {
                swap(arr[smallest], arr[i]);
                heapify(arr, n, smallest);
            }
        }
};

int main() {
    heap h;

    // Building a min-heap from an array
    int arr[6] = {-1, 54, 53, 55, 52, 50}; // Size is 5 elements, arr[0] is unused
    int n = 5;

    // Start heapifying from the last non-leaf node to the root
    for (int i = n / 2; i > 0; i--) {
        h.heapify(arr, n, i); // Call heapify using the class instance 'h'
    }

    // Printing the array after heapifying
    cout << "Printing the array as a min-heap:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

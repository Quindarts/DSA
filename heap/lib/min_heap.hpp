#include <iostream>
#ifdef __cplusplus
#endif
void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};

class MinHeap
{

    int *harr;
    int max_size; // phan tu toi da cua heap
    int size;

public:
    MinHeap(int max_size);

    void MinHeapify(int i);

    int parent(int i)
    {
        return (i - 1) / 2;
    };

    int left(int i)
    {
        return (2 * i + 1);
    };

    int right(int i)
    {
        return (2 * i + 1);
    };

    int extractMin();

    // Giam gia tri cua node tai chi muc i voi new_val
    void decreaseKey(int i, int new_val);

    // Trả về node min (node ở gốc) từ heap min
    int getMin()
    {
        return harr[0];
    }
    // Xoa 1 phan tu vi tri i.
    void deleteKey(int i);

    // Tim vi o vi tri K
    void insertKey(int k);
};

// Khoi tao heap
MinHeap::MinHeap(int cap)
{
    size = 0;
    max_size = cap;
    harr = new int[cap];
}

// Insert heap 1 gia tri k moi
// buoc 1 kiem tra size da max chua
// buoc 2 tang size len 1.
// buoc 3 chen phan tu vao vi tri cuoi cung cua mang.
// neu node cha > node moi chen vao -> swap node cha, node moi.
void MinHeap::insertKey(int k)
{

    if (size == max_size)
    {
        std::cout << "Max size, insert not found";
        return;
    }
    size++;
    int i = size - 1;
    harr[i] = k;

    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap2(&harr[i], &harr[parent(i)]);
        i = parent(i);
    };
}

// Cap nhat gia tri cua index i
//
void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
        swap2(&harr[i], &harr[parent(i)]);
        i = parent(i);
    }
}

// Xoa node goc ( node min ) ra khoi heap min va tra ve node vua xoa
int MinHeap::extractMin()
{
    if (max_size <= 0)
        return INT8_MAX;

    if (max_size == 1)
    {
        size--;
        return harr[0];
    }

    int root = harr[0];
    harr[0] = harr[size - 1];
    size--;
    MinHeapify(0);

    return root;
}

// Xoa gia tri tai chi muc i
/**
 *  Ý tưởng : đầu tiên thay đổi value  = số nhỏ nhất hệ 8 ( -128)
 *
 *  Vì nó là số bé nhất nên nó là node root
 *
 *  Cuối cùng xóa node root ra khỏi cây.
 * **/
void MinHeap::deleteKey(int i)
{

    // replace value voi min Integer
    decreaseKey(i, INT8_MIN);
    // xoa node root
    extractMin();
};

// Sap xep lai cay heap min o 1 node cha co chi muc i
void MinHeap::MinHeapify(int i)
{

    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < size && harr[l] < harr[i])
    {
        smallest = l;
    }
    if (r < size && harr[r] < harr[i])
    {
        smallest = r;
    }
    if (smallest != i)
    {
        swap2(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }
}
double sumab(int a, int b)
{
    return a + b;
}
#ifdef __cplusplus
#endif
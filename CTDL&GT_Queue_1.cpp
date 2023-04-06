nguồn tham khảo: https://devmaster.edu.vn/cach-xay-dung-cau-truc-du-lieu-stack-va-queue.html
// định nghĩa kích thước của hàng đợi
int size = 10;
// đánh dấu vị trí đầu hàng đợi
int front = 0;
// đánh dấu vị trí cuối hàng đợi
int rear = -1;
// khai báo 1 mảng để tạo hàng đợi
int queue[10];
bool isEmpty() {
    return (front < 0 || front > rear) ? true : false;
}
bool isFull() {
    return rear == size - 1 ? true : false;
}
void enqueue(int item) {
    if (isFull()) {
        cout << "Hàng đợi đầy " << endl;
        return;
    }
    rear++;
    queue[rear] = item;
}
void dequeue() {
    if (isEmpty()) {
        cout << "hàng đợi rỗng" << endl;
        return;
    }
    queue[front] = 0;
    front++;
}
int peek() {
    return queue[front];
}

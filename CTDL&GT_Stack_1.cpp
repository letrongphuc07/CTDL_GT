nguồn tham khảo: https://devmaster.edu.vn/cach-xay-dung-cau-truc-du-lieu-stack-va-queue.html
// định nghĩa kích thước của ngăn xếp
int size = 100;
// tạo 1 biến để xác định vị trí đầu ngăn xếp
int top = 0;
// khai báo 1 mảng để tạo ngăn xếp
int stack[100];
bool isEmpty() {
    return top == 0 ? true : false;
}
bool isFull() {
    return top == size ? true : false;
}
void push(int item) {
    if (isFull()) {
        cout << "Ngăn xếp đầy " << endl;
        return;
    }
    top++;
    stack[top] = item;
}
void pop() {
    if (isEmpty()) {
        cout << "ngăn xếp rỗng "
        return;
    }
    stack[top] = 0;
    top--;
}

int peek() {
    return stack[top];
}

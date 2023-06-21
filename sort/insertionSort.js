/*
Là kiểu sắp xếp xem mảng ban đầu chứa các phần tử chưa sắp xếp. 
Nó tạo mảng đã sắp xếp bằng cách chạy for từ 0 -> i và i chạy từ 1->n
thêm từng phần tử dần dần vào mảng 0->i.

So sánh với phần tử trước đó
vi du: mảng có 5 phần tủ i = 0 -> i = 3
Chạy i = 1; chạy i = [ 1 -> 0] 
chạy i =2; chạy i = [2 -> 0]
Chạy i = 3; chạy i = [3 -> 0]

đổi vị trí a[pos] và a[pos-1] nếu a[pos-1] > x 
(x là giá trị pos(max) = i trong khoảng [0,pos])
Tot nhat: On
Xau nhat On^2
*/
const arr = [1, 2, 3, 5, 4, 8, 6, 10, 7];
function InsertionSort(arr) {
    for (let i = 1; i < arr.length; i++) {
        let x = arr[i];
        let pos = i;
        while (pos > 0 && x < arr[pos - 1]) {
            arr[pos] = arr[pos - 1];
            pos--;
        }
        arr[pos] = x;
    }
    console.log(arr);
}
InsertionSort(arr);

//Tìm phần tử nhỏ nhất trong array. xong đó tiếp tục for phần tự tiếp theo cho tới hết mảng.
//On^2
const arr = [1, 2, 3, 5, 4, 8, 6, 10, 7];
function SelectionSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        let min = i;
        for (let j = i + 1; j < arr.length; j++) {
            if (arr[min] > arr[j]) min = j;
        }
        if (min !== i) {
            tmp = arr[min];
            arr[min] = arr[i];
            arr[i] = tmp;
        }
    }
    console.log(arr);
}
SelectionSort(arr);

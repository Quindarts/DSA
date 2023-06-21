let arr = [1, 2, 3, 5, 6, 7, 9];
function BSearch(arr, key, l, r) {
    var mid = ((l + r) / 2);
    if (key === arr[mid]) {
        return mid;
    } else if (key < arr[mid]) {
        return BSearch(arr, key, l, mid - 1);
    } else {
        return BSearch(arr, key, mid + 1, r);
    }
}

console.log(BSearch(arr, 3, 0, 7));

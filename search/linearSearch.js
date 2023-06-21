let x = 1;
const arr = [1, 2, 3, 4, 5, 6];
function linearSearch(x, arr) {
    let flag = 0;
    for (let i = 0; i < arr.length; i++) {
        if (x == arr[i]) {
            flag = 1;
            break;
        }
    }
    return flag;
}
console.log(linearSearch(x,arr));
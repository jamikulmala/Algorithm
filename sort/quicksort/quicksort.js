
let sort = document.getElementById("sort");
let reset = document.getElementById("return");

sort.addEventListener("click", function sortArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    let sorted_numbers = quickSort(numbers, 0, numbers.length-1);
    document.getElementById("result").innerText = sorted_numbers;
    });

reset.addEventListener("click", function resetArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    document.getElementById("array").value = text;
    document.getElementById("result").innerText = numbers;
});

function swap(items, left, right){
    var temp = items[left];
    items[left] = items[right];
    items[right] = temp;
}

function partition(arr, left, right) {
    var pivot = arr[Math.floor((right+left)/2)];
    i = left;
    j = right;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr, i, j);
            i++;
            j--;
        }
    }
    return i;
}

function quickSort(arr, left, right) {
    var pivot;
    if(arr.length > 1){
    pivot = partition(arr, left, right);
        if (left < pivot-1) {
            quickSort(arr, left, pivot-1);
        }
        if (right > pivot) {
            quickSort(arr, pivot, right);
        }
    }
    return arr;
}

let sort = document.getElementById("sort");
let reset = document.getElementById("return");

sort.addEventListener("click", function sortArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    console.log(numbers);

    let sorted_numbers = mergesort(numbers);
    document.getElementById("result").innerText = sorted_numbers;
    });

reset.addEventListener("click", function resetArr(){
    let text = document.getElementById("array").value;
    let numbers = text.split(' ').map(Number);
    document.getElementById("array").value = text;
    document.getElementById("result").innerText = numbers;
});

function mergesort(arr){
    if(arr.length < 2){
        return arr;
    }
    let mid = Math.floor(arr.length/2);
    let leftArray = arr.slice(0, mid);
    let rightArray = arr.slice(mid);
    return merge(mergesort(leftArray), mergesort(rightArray));
    }

function merge(left, right){
    let temp = [];

    let next_left = 0;
    let next_right = 0;
    while(next_left < left.length && next_right < right.length){
        if(left[next_left] < right[next_right]){
            temp.push(left[next_left]);
            next_left += 1;
        }
        else{
            temp.push(right[next_right]);
            next_right += 1;
        }

    }

    while(next_left < left.length){
        temp.push(left[next_left]);
        next_left += 1;
    }
    while(next_right < right.length){
        temp.push(right[next_right]);
        next_right += 1;
    }

    return temp;
}
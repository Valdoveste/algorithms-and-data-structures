// var previusIndex = 0;
// var nextIndex = 1;
// var res = 0;

// var seq = [0, 1];

// var n = 100;

// for(let i = 0; i < n; i++){
//     res = (seq[previusIndex] + seq[nextIndex]);
//     seq.push(res)
//     previusIndex++;
//     nextIndex++;
// }

// for(let i = 0; i < n; i++){
//     console.log(seq[i])
// }


var seq = [0, 1];
var n = 1;

for(let i = 0; i < n; i++){
    seq.push(seq[(seq.length - 1)] + seq[(seq.length - 2)]);
    console.log(seq[i])
}
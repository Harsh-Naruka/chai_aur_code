if(!Array.prototype.myForEach) {
    Array.prototype.myForEach = function(userFn) {
        const originalArr = this

        for(let i=0;i<originalArr.length;i++){
            userFn(originalArr[i],[i])
        }
    }
}

if(!Array.prototype.myMap){
    Array.prototype.myMap = function(userFn){
    const result=[];

    for(let i=0;i<this.lenght;i++){
        const value = userFn(this[i],i);
        result.push(value);
    }
    return result;
};
}

// array
const arr = [1, 2, 3, 4, 5, 6];

const ret = arr.myForEach(function (value , index) {
    console.log(`My For Each Value at Index ${index} is ${value}`);
});

console.log(`Ret is`,ret);

//Signature .map
//Return - New Array, Each ele Iterate , userFn

const n=arr.map((e) => e*2);
const n2=arr.myMap((e) => e*3);

console.log(n);
console.log(arr);
console.log(n2);

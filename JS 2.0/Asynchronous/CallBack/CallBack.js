function myDisplayer(some) {
  console.log(some);
}

function Calculator(num1, num2,callback) {//Call Back
  let sum = num1 + num2;
  callback(sum);
}

 Calculator(5, 5,myDisplayer);//Function Call in ParaMeter
 Calculator(15,20,function(result){//Annoynomus Function
  console.log(result);
 })
 console.log("Line-1");
setInterval(function (){
  //console.log("Hello");
 },1000);
 console.log("Line-2");
 
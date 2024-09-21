let payment=true;
let mark=70;

function enroll(callback){
console.log("Course Enrollment Processing");
setTimeout(function(){
  if(payment){
    callback();
  }
  else{
    console.log("Payment not made");
  }
}, 2000);
} 
function process(callback) {
  console.log("Course on Progress");
  setTimeout(function(){
    if(mark>=80){
      callback();
      }
      else{
        console.log("Mark not sufficient");
        }
}, 3000);
}
function getCertificate() {
  
}
// enroll(process);
// process(getCertificate);  
// getCertificate();
//=> you can not use this type function.You must use callback Annoynomus function
enroll(function(){
  process(getCertificate)
});
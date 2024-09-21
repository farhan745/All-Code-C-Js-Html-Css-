let payment = true;
let mark = 90;

function enroll() {
  console.log("Course Enrollment is in Progress.");
  const promise = new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (payment) {
        resolve("Payment is Sucessfully Completed");
      } else {
        reject("Payment not made");
      }
    }, 2000);
  });
  return promise;
}
function process() {
  console.log("Course on Progress");
  const promise = new Promise(function (resolve, reject) {
    setTimeout(function () {
      if (mark >= 80) {
        resolve("You got A+");
      } else {
        reject("Mark not sufficient");
      }
    }, 3000);
  });
  return promise;
}
function getCertificate() {
  console.log("Preparing your Certificate");
  let promise = new Promise(function (resolve) {
    setTimeout(function () {
      resolve("Congrates! You Got the Certificate");
    }, 1000);
  });
  return promise;
}
async function course() {
  try{
    await enroll();
    await process();
    let msg = await getCertificate();
    console.log(msg);

  }
  catch(error){
    console.log(error);
  }
}
course();
 
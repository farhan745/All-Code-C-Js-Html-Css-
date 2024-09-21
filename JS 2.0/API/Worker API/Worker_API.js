let w;
function startWorker() {
  if (typeof Worker !== "undefined") {
    //Worker Avilable
    if (typeof w == "undefined") {
      //Create a new worker called w
      w = new Worker("worker.js");
    }
    //listening for worker events
    w.onmessage = function (event) {
      document.getElementById("demo").innerHTML = event.data;
    };
  } else {
    alert("Your Browse does not support web worker");
  }
}

function stopWorker() {
  if (typeof Worker !== "undefined") {
    w.terminate();
    w = undefined;
  } else {
    alert("Your Browse does not support web worker");
  }
}

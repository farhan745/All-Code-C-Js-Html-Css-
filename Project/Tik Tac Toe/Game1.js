const boxes = document.querySelectorAll(".box"); // Get all elements with class "box"

let reset = document.querySelector("#reset-btn");
let newGameBtn = document.querySelector("#new-btn");
let msgContainer = document.querySelector(".msg-container");
let msg = document.querySelector("#msg");
let turnO = true;
const winPatterns = [
  [0, 1, 2],
  [0, 3, 6],
  [0, 4, 8],
  [1, 4, 7],
  [2, 5, 8],
  [2, 4, 6],
  [3, 4, 5],
  [6, 7, 8],
];
function resetGame(){
  turnO=true;
  enableBoxes();
  msgContainer.classList.add("hide");
}
boxes.forEach((box, index, array) => {
  box.addEventListener("click", function () {
    console.log("click"); // Log "click" to the console when a box is clicked

    if (turnO) {
      box.innerText = "O";
      turnO = false;
    }
    else {
      box.textContent = "X";
      turnO = true;
    }
    box.disabled = true;
    checkWinner();
  });
});
function disableBoxes(){
  for(let box of boxes){
    box.disabled = true;
  }
}
function enableBoxes(){
  for(let box of boxes){
    box.disabled = false;
    box.innerHTML="";
  }
}
function showWinner(winner){
  msg.innerHTML=`Congratulation, Winner is ${winner}`;
  msgContainer.classList.remove("hide");
  disableBoxes();
}
function checkWinner(){
  for(let pattern of winPatterns){
    let pos1Val=boxes[pattern[0]].innerText;
    let pos2Val=boxes[pattern[1]].innerText;
    let pos3Val=boxes[pattern[2]].innerText;

    if(pos1Val!="" && pos2Val!="" && pos3Val!=""){
      if(pos1Val===pos2Val && pos2Val===pos3Val){
        showWinner(pos1Val);
        
      }
    }
  }
}
newGameBtn.addEventListener("click",resetGame);
reset.addEventListener("click",resetGame);

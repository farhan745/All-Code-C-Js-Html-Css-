let p=document.getElementById("id1");
p.innerHTML='Farhan';
let c=document.getElementsByClassName("class1");
c[1].innerHTML='Change in 2 num';
function validateForm(){
  let x = document.forms['myForm'];
  let y = x['fname'].value
  if(y=== ""){
    alert(`Sorry Try again!`);
    return false;
  }

}
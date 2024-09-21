function validation(){
  let inputObj=document.getElementById("id1");
  if(!inputObj.checkValidity()){
    document.getElementById("demo").innerHTML=inputObj.validationMessage;
  }
  else if(inputObj.valueMissing){
    document.getElementById("demo").innerHTML="Please fill in this field.";
  }
}
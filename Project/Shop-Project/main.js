let cloth = document.getElementById("cloths");
let review = document.getElementById("reviews");
let contact = document.getElementById("contacts");
let blog = document.getElementById("blogs");

cloth.addEventListener("click", () => {
  cloth.style.color = "red";
  review.style.color = "black";
  contact.style.color = "black";
  blog.style.color = "black";
});
review.addEventListener("click", () => {
  cloth.style.color = "black";
  review.style.color = "red";
  contact.style.color = "black";
  blog.style.color = "black";
});
contact.addEventListener("click", () => {
  cloth.style.color = "black";
  review.style.color = "black";
  contact.style.color = "red";
  blog.style.color = "black";
});
blog.addEventListener("click", () => {
  cloth.style.color = "black";
  review.style.color = "black";
  contact.style.color = "black";
  blog.style.color = "red";
});
let login = document.getElementById("login");
login.addEventListener("click", () => {
  document.querySelector(".loginPage").style.display = "block";
});
let loged = document.getElementById("loged");
loged.addEventListener("click", () => {
  let email = document.getElementById("email");
  let pass = document.getElementById("pass1");
  if (email.value === "" || pass.value === "") {
    alert("Please fill all the fields");
  } else {
    alert("You Loged In");
    document.querySelector(".loginPage").style.display = "none";
  }
});
let submit = document.getElementById("submit");
submit.addEventListener("click", () => {
  let name = document.getElementById("name");
  let pass = document.getElementById("pass2");
  if (name.value === "" || pass.value === "") {
    alert("Please fill all the fields");
  } else {
    alert(`${name.value} Thanks for conneted`);
    document.querySelector(".loginPage").style.display = "none";
  }
});

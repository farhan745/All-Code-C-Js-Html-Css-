let display = document.getElementById("display");
async function getData() {
  let res = await fetch(
    "http://127.0.0.1:5500/JS%202.0/API/Fetch%20API/data.txt"
  );
  let data = await res.text();
  display.innerHTML = data;
}

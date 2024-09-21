let hasMeeting = true;

let meeting = new Promise(function (resolve, reject) {
  if (!hasMeeting) {
    let meetingDetails = {
      name: "Technical Meeting",
      location: "Google",
    };
    resolve(meetingDetails);
  } else {
    reject("Meeting Already Scheduled!");
  }
});

meeting
  .then((value) => {
    document.getElementById("id1").innerHTML = JSON.stringify(value);
  })
  .catch((error) => {
    document.getElementById("id1").innerText = error;
  });


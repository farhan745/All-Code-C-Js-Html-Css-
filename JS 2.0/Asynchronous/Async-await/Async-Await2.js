let hasMeeting = true;

let meeting = new Promise(function (resolve, reject) {
  if (hasMeeting) {
    let meetingDetail = {
      name: "Technical Meeting",
      location: "Google",
      time: "10:30PM",
    };
    resolve(meetingDetail);
  } else {
    reject("Meeting Already Scheduled!");
  }
});
function addToCalender(meetingDetail) {
  let Calender = `${meetingDetail.name} was schduled on ${meetingDetail.location} at ${meetingDetail.time}.`;
  return Promise.resolve(Calender);
}

async function myMeeting() {
  try {
    let meetingdetail = await meeting;
    let calender = await addToCalender(meetingdetail);
    document.getElementById("id1").innerHTML = calender;
    console.log(meetingdetail);
  } catch {
    document.getElementById("id1").innerHTML = "Meeting Already Scheduled!";
  }
}
myMeeting();   

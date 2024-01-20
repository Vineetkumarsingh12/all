const date = new Date(); // You can replace this with your specific date

const options = {
  year: 'numeric',
  month: 'numeric',
  day: 'numeric',
  timeZone: 'Asia/Kolkata', // Set the time zone to Indian Standard Time
  hour12: false, // Use 12-hour format with AM/PM
  hour: 'numeric',
  minute: 'numeric',
  second: 'numeric',
};

const indianDateFormat = date.toLocaleDateString('en-IN', options);

console.log(indianDateFormat);

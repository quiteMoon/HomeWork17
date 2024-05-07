// Задача 1
const name = prompt("Введіть ваше ім'я:");
alert(`Привіт, ${name}!`);

// Задача 2
const currentYear = 2024;
const birthYear = parseInt(prompt("Введіть ваш рік народження:"));
const age = currentYear - birthYear;
alert(`Вам ${age} років.`);

// Задача 3
const sideLength = parseFloat(prompt("Введіть довжину сторони квадрата:"));
const perimeter = 4 * sideLength;
alert(`Периметр квадрата дорівнює ${perimeter}.`);

// Задача 4
const radius = parseFloat(prompt("Введіть радіус кола:"));
const area = Math.PI * radius ** 2;
alert(`Площа кола дорівнює ${area}.`);

// Задача 5
const distance = parseFloat(prompt("Введіть відстань у кілометрах:"));
const hours = parseFloat(prompt("За скільки годин ви хочете дістатися?"));
const speed = distance / hours;
alert(`Вам потрібно рухатися зі швидкістю ${speed} км/год.`);

// Задача 6
const dollars = parseFloat(prompt("Введіть суму в доларах:"));
const exchangeRate = 0.82; // 1 долар = 0.82 євро (прикладний курс)
const euros = dollars * exchangeRate;
alert(`Ви отримаєте ${euros.toFixed(2)} євро.`);

// Задача 7
const flashDriveSizeGB = parseInt(prompt("Введіть об'єм флешки у ГБ:"));
const fileSizeMB = 820;
const filesCount = Math.floor(flashDriveSizeGB * 1024 / fileSizeMB);
alert(`На флешці поміститься ${filesCount} файлів розміром 820 МБ.`);

// Задача 8
const walletMoney = parseFloat(prompt("Введіть суму грошей у гаманці:"));
const chocolatePrice = parseFloat(prompt("Введіть вартість однієї шоколадки:"));
const chocolateCount = Math.floor(walletMoney / chocolatePrice);
const change = walletMoney - chocolateCount * chocolatePrice;
alert(`Ви можете купити ${chocolateCount} шоколадок, залишок в гаманці: ${change.toFixed(2)} грн.`);

// Задача 9
const number = parseInt(prompt("Введіть тризначне число:"));
const reversedNumber = (number % 10) * 100 + Math.floor(number / 10) % 10 * 10 + Math.floor(number / 100);
alert(`Перевернене число: ${reversedNumber}`);

// Задача 10
const userNumber = parseInt(prompt("Введіть ціле число:"));
const isEven = userNumber % 2 === 0;
const parity = isEven ? "парне" : "непарне";
alert(`Ви ввели ${parity} число.`);

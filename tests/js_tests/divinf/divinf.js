/*
** EPITECH PROJECT, 2017
** infinadd test
** File description:
** TEST : add with infinite numbers
*/

const	red = "\x1b[31m";
const	green = "\x1b[32m";
const	cyan = "\x1b[36m";
const	white = "\x1b[37m";
const	nb_digit = 9999;
var	nb_test = 10;

var	shell = require("shelljs");
var	fs = require("fs");

var	nb1 = make_nb(nb_digit);
var	nb2 = make_nb(nb_digit - 10);
var	str1 = nb1 + " " + nb2;
var	str2 = nb1 + "/" + nb2;

shell.exec("./test " + str1 + " > res1");
shell.exec("echo " + str2 +" | bc > res2");

var	res1 = "";
var	res2 = "";
while (nb_test) {
	fs.readFile("res1", {encoding: 'utf-8'}, (err, data) => {
		res1 = data;
		fs.readFile("res2", {encoding: 'utf-8'}, (err, data) => {
			res2 = data.replace(/\\\n/g, "");
			test_output(res1, res2);
		});
	});
	nb_test--;
}

function	test_output(str1, str2)
{
	if (res1 == res2)
		console.log(green, "[divinf] WORK with " + nb_digit + " digits");
	else {
		fs.writeFile("error", nb1 + "\n/\n" + nb2 + "\n\n" + res1 + "\n\n" + res2);
		console.log(red, "[divinf] DON'T WORK with " + nb_digit + " digits");
	}
}

function	make_nb(nb_digit)
{
	var str = "";

	while (nb_digit) {
		str += (Math.floor(Math.random() * 6) + 1).toString();
		nb_digit--;
	}
	return (str);
	shell.exec("make -sC ..");
}
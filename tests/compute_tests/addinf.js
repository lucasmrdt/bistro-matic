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
const	nb_digit = 10000;

var	shell = require("shelljs");
var	fs = require("fs");

var	nb1 = make_nb(nb_digit);
var	nb2 = make_nb(nb_digit - 100);
var	str1 = nb1 + " " + nb2;
var	str2 = nb1 + "+" + nb2;

shell.exec("make -sC ..");
shell.exec("./../test addinf " + str1 + " > res1");
shell.exec("echo " + str2 +" | bc > res2");

var	res1;
var	res2;
fs.readFile("res1", {encoding: 'utf-8'}, (err, data) => {
	res1 = data;
	fs.readFile("res2", {encoding: 'utf-8'}, (err, data) => {
		res2 = data.replace(/\\\n/g, "");
		test_output(res1, res2);
	});
});

function	test_output(str1, str2)
{
	console.log(white, "addinf : " + str1);
	console.log(cyan, "bc : " + str2);
	if (res1 == res2)
		console.log(green, "\n[addinf] WORK");
	else
	{
		console.log("nb1 : " + nb1 + "\n+\n" + "nb2 : " + nb2);
		console.log(red, "\n[addinf] DON'T WORK");
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
}
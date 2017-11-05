/*
** EPITECH PROJECT, 2017
** infinadd test
** File description:
** TEST : add with infinite numbers
*/

let	shell = require("shelljs");
let	fs = require("fs");
let	func = require("./../my_functions");

const	red = "\x1b[31m";
const	green = "\x1b[32m";
const	cyan = "\x1b[36m";
const	white = "\x1b[37m";

const	name = "bistromatic";
const	max_computes = 100;
let	nb_computes = Math.round(Math.random() * (max_computes - 1000) + 1000)





let	nb_digit = func.nb_digits;
let	base = func.make_base();
let	n1 = func.make_nb(nb_digit + 1, base);
let	n2 = func.make_nb(nb_digit, base);

let	str1 = base + " " + n1 + " " + n2;
let	str2 = "\"obase=" + base.length + ";ibase=" + base.length + "; " + n1 + op + n2 + "\"";

console.log(cyan);
console.time("my_compute");
shell.exec("./test " + str1 + " > res1");
console.timeEnd("my_compute");
console.time("bc");
shell.exec("echo " + str2 +" | bc > res2");
console.timeEnd("bc");

let	res1 = "";
let	res2 = "";
let	info = {};

fs.readFile("res1", {encoding: 'utf-8'}, (err, data) => {
	res1 = data;
	fs.readFile("res2", {encoding: 'utf-8'}, (err, data) => {
		res2 = data.replace(/\\\n/g, "");
		func.display_result(n1, n2, res1, res2, op, name, base);
		shell.rm("res1");
		shell.rm("res2");
	});
});
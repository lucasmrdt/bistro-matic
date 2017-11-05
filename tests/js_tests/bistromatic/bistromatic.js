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
const	max_computes = 1000;
let	nb_computes = Math.round(Math.random() * (max_computes - 100) + 100);
//let	base = func.make_base();
let	base = "0123456789";
let	ops = "()+-*/%";

let	nb_brackets = 0;
let	compute = "";

while (nb_computes)
{
	if (Math.random() > .7)
	{
		if (compute && !isNaN(compute[compute.length - 1]))
			compute += ops[Math.round(Math.random() * (4 - 2) + 2)];
		compute += ops[0];
		nb_brackets++;
	}
	compute += Math.floor(Math.random() * 10) + 1;
	compute += ops[Math.round(Math.random() * (4 - 2) + 2)];
	compute += Math.floor(Math.random() * 10) + 1;
	nb_computes--;
	if (nb_brackets && Math.random() > .7)
	{
		compute += ops[1];
		if (nb_computes)
			compute += ops[Math.round(Math.random() * (4 - 2) + 2)];
		nb_brackets--;
	}
}
while (nb_brackets)
{
	compute += ops[1];
	nb_brackets--;
}

let	nb_digit = func.nb_digits;
let	n1 = func.make_nb(nb_digit + 1, base);
let	n2 = func.make_nb(nb_digit, base);

let	str2 = "\"obase=" + base.length + ";ibase=" + base.length + "; " + compute + "\"";

console.log(cyan);
console.time("my_compute");
shell.exec("echo \"" + compute + "\" | ./../../../calc 0123456789 \"()+-*/%\" "+ compute.length + " > res1");
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
		res2 = data.replace(/\\\n|\n/g, "");
		func.display_result_bistro(res1, res2, compute, base);
		shell.rm("res1");
		shell.rm("res2");
	});
});
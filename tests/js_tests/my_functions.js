/*
** EPITECH PROJECT, 2017
** my_functions test
** File description:
** file
*/

let	fs = require("fs");

const	red = "\x1b[31m";
const	green = "\x1b[32m";
const	cyan = "\x1b[36m";
const	white = "\x1b[37m";

let	max_digits = 213;

module.exports = {
	
	nb_digits : Math.floor(Math.random() * (max_digits - 1) + 1),

	display_result(n1, n2, res1, res2, op, name, base)
	{
		let	output = n1 + "\n" + op + "\n" + n2 + "\n\n" + res1 + "\n\n" + res2;

		if (res1 == res2)
		console.log(green, "[" + name + "] WORK with " + n2.length + " digits   [" + base + "]");
		else {
			fs.appendFile("output", output);
			console.log(red, "[" + name + "] DON'T WORK with " + n2.length + " digits   [" + base + "]");
		}
	},

	make_base()
	{
		let	chars = "0123456789ABCDEF";
		let	length = Math.floor(Math.random() * (15 - 4) + 4);
		let	base = "";

		for (var i= 0; i < length; i++)
			base += chars[i];
		return (base);
	},

	make_nb(nb_digits, base)
	{
		let	str = "";

		while (nb_digits) {
			str += base[Math.floor(Math.random() * (base.length - 1) + 1)];
			nb_digits--;
		}
		return (str);
	}


}
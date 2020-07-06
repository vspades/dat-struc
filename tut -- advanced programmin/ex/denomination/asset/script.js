function f1() {
	var tot = document.getElementById('id1').value;
// quotient of v1/100
	var d100 = Math.trunc(tot / 100);
	if (d100 > 0)
		document.getElementById('id2').value = d100;
	else
		document.getElementById('id2').value = 0;
	tot = tot % 100
// quotient of v1/50
	var d50 = Math.trunc(tot / 50);
	if (d50 > 0)
		document.getElementById('id3').value = d50;
	else
		document.getElementById('id3').value = 0;
	tot = tot % 50
// quotient of v1/20
	var d20 = Math.trunc(tot / 20);
	if (d20 > 0)
		document.getElementById('id4').value = d20;
	else
		document.getElementById('id4').value = 0;
	tot = tot % 20
// quotient of v1/10
	var d10 = Math.trunc(tot / 10);
	if (d10 > 0)
		document.getElementById('id5').value = d10;
	else
		document.getElementById('id5').value = 0;
	tot = tot % 10
// quotient of v1/5
	var d5 = Math.trunc(tot / 5);
	if (d5 > 0)
		document.getElementById('id6').value = d5;
	else
		document.getElementById('id6').value = 0;
	tot = tot % 5
// quotient of v1/1
	var d1 = Math.trunc(tot / 1);
	if (d1 > 0)
		document.getElementById('id7').value = d1;
	else
		document.getElementById('id7').value = 0;
	tot = tot % 1
}

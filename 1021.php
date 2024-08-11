<?php
$x = readline();
$x = $x * 100;

echo "NOTAS:\n";
$y = (int) ($x / 10000);
echo "$y nota(s) de R$ 100.00\n";
$x = $x % 10000;

$y = (int) ($x / 5000);
echo "$y nota(s) de R$ 50.00\n";
$x = $x % 5000;

$y = (int) ($x / 2000);
echo "$y nota(s) de R$ 20.00\n";
$x = $x % 2000;

$y = (int) ($x / 1000);
echo "$y nota(s) de R$ 10.00\n";
$x = $x % 1000;

$y = (int) ($x / 500);
echo "$y nota(s) de R$ 5.00\n";
$x = $x % 500;

$y = (int) ($x / 200);
echo "$y nota(s) de R$ 2.00\n";
echo "MOEDAS:\n";
$x = $x % 200;

$y = (int) ($x / 100);
echo "$y moeda(s) de R$ 1.00\n";
$x = $x % 100;

$y = (int) ($x / 50);
echo "$y moeda(s) de R$ 0.50\n";
$x = $x % 50;

$y = (int) ($x / 25);
echo "$y moeda(s) de R$ 0.25\n";
$x = $x % 25;

$y = (int) ($x / 10);
echo "$y moeda(s) de R$ 0.10\n";
$x = $x % 10;

$y = (int) ($x / 5);
echo "$y moeda(s) de R$ 0.05\n";
$x = $x % 5;

$y = (int) ($x / 1);
echo "$y moeda(s) de R$ 0.01\n";

?>
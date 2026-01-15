# Floating point arithmetic on two numbers
read a b
echo "$a + $b" | bc
echo "$a - $b" | bc
echo "$a * $b" | bc
echo "scale=2; $a / $b" | bc

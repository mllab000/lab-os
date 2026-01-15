# Calculator using command line arguments
a=$1 op=$2 b=$3
case $op in
+) echo "$a + $b = $((a+b))";;
-) echo "$a - $b = $((a-b))";;
x) echo "$a x $b = $((a*b))";;
/) echo "$a / $b = $((a/b))";;
%) echo "$a % $b = $((a%b))";;
^) echo "$a ^ $b = $((a**b))";;
*) echo "Invalid input";;
esac

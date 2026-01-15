# Largest of three numbers
a=$1 b=$2 c=$3
if [ $a -gt $b -a $a -gt $c ]; then echo $a
elif [ $b -gt $c ]; then echo $b
else echo $c
fi

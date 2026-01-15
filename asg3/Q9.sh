# Character type check
read ch
if [ ${#ch} -ne 1 ]; then echo "More than one character"
elif echo "$ch" | grep -q '[a-z]'; then echo "Lower case alphabet"
elif echo "$ch" | grep -q '[A-Z]'; then echo "Upper case alphabet"
elif echo "$ch" | grep -q '[0-9]'; then echo "Digit"
else echo "Special symbol"
fi

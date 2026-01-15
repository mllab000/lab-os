# Gross salary calculation
read basic
da=$(echo "$basic * 0.4" | bc)
hra=$(echo "$basic * 0.3" | bc)
echo "$(echo "$basic + $da + $hra" | bc)"

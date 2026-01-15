# Profit or loss calculation
read cp sp
if [ $sp -gt $cp ]; then echo "Profit=$((sp-cp))"
elif [ $cp -gt $sp ]; then echo "Loss=$((cp-sp))"
else echo "No Profit No Loss"
fi

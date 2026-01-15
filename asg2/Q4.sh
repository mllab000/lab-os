# Display wc of dtcal file
echo "Filename: dtcal"
wc -l dtcal | awk '{print "Line count:",$1}'
wc -w dtcal | awk '{print "Word count:",$1}'
wc -c dtcal | awk '{print "Charcount:",$1}'


# defaults
set title "A visualisation of BE1_2.rif"
set style data steps
set pointsize 0.2
set grid back
set mouse 
set key outside title "Numeric variables"   box 3
set xlabel "steps"

# Set parameters
bool_nb=2

# Initialise the global vars
max=-1e36
min=1e36
range=0
range_10=1
delta=1

# Various stuff to be able to display booleans
update_delta(x) = (range=max-min,range_10=ceil(range/10),(delta2=((range)/(bool_nb+2)), (delta2<1?1:delta=delta2)))
getminmax(x)= ((x<min ? min=x : x>max ? (max=x) : x),update_delta(x),x)
scale_bool(x,i) = min + 1.7*i*delta + (x*delta)
label_pos(i)=min + i*delta*1.7+delta*0.5



plot "< read-rif.sh BE1_2.rif "  using 1:(scale_bool($2,0))  lc rgb "blue" notitle, \
     "< read-rif.sh BE1_2.rif "  using 1:(scale_bool($3,1))  lc rgb "blue" notitle, \
     "< read-rif.sh BE1_2.rif "  using 1:(getminmax($4)) title "NS_Cars"  with linespoints, \
     "< read-rif.sh BE1_2.rif "  using 1:(getminmax($5)) title "EW_Cars"  with linespoints, \
     "< read-rif.sh BE1_2.rif "  using 1:(getminmax($6)) title "NS_Ped"  with linespoints, \
     "< read-rif.sh BE1_2.rif "  using 1:(getminmax($7)) title "EW_Ped"  with linespoints

unset label
set label "NS_button" at  3, (label_pos(0)) front left 
set label "EW_button" at  3, (label_pos(1)) front left 

unset ytics
set ytics range_10
unset output
replot
pause mouse close

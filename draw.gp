set term gif animate delay 10
set output "anim.gif"
max_iter = 99
radius = 0.1

# visual set
set xrange[-1:1]
set yrange[-1:1]
set size ratio -1
set nokey

do for [i=0: max_iter]{
  plot "data.dat" every :::i::i using 1:2:(radius) with circles #linecolor rgb "red"
}

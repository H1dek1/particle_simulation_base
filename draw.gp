set term gif animate delay 1
set output "anim.gif"
max_iter = 999

set xrange[-1:1]
set yrange[-1:1]
set size ratio -1
set nokey

do for [i=0: max_iter]{
  plot "data.dat" every :::i::i using 1:2 with points pointtype 6 pointsize 3 linecolor rgb "red"
}

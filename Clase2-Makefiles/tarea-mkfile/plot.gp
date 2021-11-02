set xl "Numero de pasos";set yl "Diferencia porcentual"
set yr [-0.000001:];set xr [:]
set grid
set key top left box
set border lw 1.5
set term pdf; set out "fig.pdf"
plot 'datos.txt' u 1:2 w l t 'Diferencia porcentual 1 a 3', 'datos.txt' u 1:3 w l t 'Diferencia porcentual 2 a 3'
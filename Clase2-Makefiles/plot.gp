set xlabel 'N'; set ylabel 'diff porcentual'
set term pdf; set out "fig.pdf"
plot 'datos.txt'w l t 'diferencia porcentual'

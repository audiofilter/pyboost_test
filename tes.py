from pytemp.butterworth_iir import *
from pytemp.iir_coeff import *
x=iir_coeff(8)
butterworth_iir(x,0.24)
print x.order

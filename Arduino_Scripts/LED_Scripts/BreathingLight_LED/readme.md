Uses the formula:
pwm_val = 255.0*(1.0 -  abs((2.0*(x/smoothness_pts))-1.0))

Where smoothness_pts is N

Creates a simple breathing light using the LED and the function

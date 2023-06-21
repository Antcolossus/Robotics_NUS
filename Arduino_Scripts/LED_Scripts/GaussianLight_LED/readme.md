Uses the formula: 
pwm_val = 255.0*pow(2.71828,-(pow(x/smoothness_pts-0.5,2)/(2.0*pow(0.13,2))))

Where smoothness_pts is N

Creates a Gaussian light using the LED and the function

/* 
 *  Ex_10 - AnalogOut
 *  Simple Triangle breathing LED on the TomatoCube Pico MainBoard
 *  LED 
 *  -- GP12
 *  
 */

#define ONBOARD_LED 12    // LED GP12

float smoothness_pts = 500;
int x = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ONBOARD_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    if (x >= smoothness_pts)
        x = 0;
     
    float pwm_val = 255.0*pow(2.71828,-(pow(x/smoothness_pts-0.5,2)/(2.0*pow(0.13,2))));
    analogWrite(ONBOARD_LED,int(pwm_val));
    x += 1;
    delay(5);                    
}
                  
                
                    
                

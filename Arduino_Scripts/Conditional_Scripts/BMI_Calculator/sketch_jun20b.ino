/* 
 *  Ex_11 - Conditional
 *  Simple communication through the Serial monitor.
 *  
 */
String rcvString = "";
String hcvString = "";
float BMI = 0.0;
float Height = 0.0;
float Weight = 0.0;

;void setup() {
   Serial.begin(115200); //set up serial library baud rate to 115200
   delay(2000);
   Serial.println("What is your Height?");
}

void loop() {
   if(Serial.available()) { //if number of bytes (characters) available for reading
      Serial.print("Your height is "); //print I received
      rcvString = Serial.readString();
      Height = rcvString.toFloat(); // read string until newline character
      Serial.print(Height); 
      Serial.println(" meters tall.");
      Serial.println("");
      Serial.println("What is your Weight?");
   }

    if (Serial.available() && Height != 0.0){

      Serial.print("Your Weight is ");
      hcvString = Serial.readString();
      Weight = hcvString.toFloat();
      Serial.print(Weight);
      Serial.println(" Kg");

      Serial.println("");
      
      BMI = Weight/(Height*Height);
      Serial.print("Your BMI is ");
      Serial.print(BMI);
      Serial.println("");

      if (BMI < 16){
        Serial.println("You are Severely Underweight");
      }
      else if (BMI <= 18.4){
        Serial.println("You are Underweight");
      }
      else if (BMI <= 24.9){
        Serial.println("You are Normal");
      }
      else if (BMI <= 29.9){
        Serial.println("You are Overweight");
      }
      else if (BMI <= 34.9){
        Serial.println("You are Moderately Overweight");
      }
      else if (BMI <=39.9){
        Serial.println("You are Severely Overweight");
      }
      else{
        Serial.println("You are Morbidly Overwieght");
      }

      Serial.println("");
      Height = 0.0;
      Weight = 0.0;

    }

}
//===================================================
//===================================================

void printGeneralStatus()
{
  DateTime now = rtc.now();
  Serial.print("Current date: "); Serial.print(now.year());  Serial.print("-"); Serial.print(now.month());  Serial.print("-"); Serial.println(now.day());
  Serial.print("Current time: "); Serial.print(now.hour());  Serial.print(":"); Serial.print(now.minute()); Serial.print(":"); Serial.println(now.second());
  DSTStatusToWords();
  Serial.print("Sunrise: "); Serial.println(SunriseTime); 
  Serial.print("Sunset: "); Serial.println(SunsetTime); 
  Serial.print("Natural light: "); Serial.print(HoursNaturalLight, 2); Serial.print(" hours, or "); Serial.print (MinNaturalLight, 0); Serial.println( " minutes");
}

//===================================================
//===================================================

void printLightStatus()
{
  LightModeStatusToWords();
  Serial.print("Requested amount of total light:  "); Serial.print(HoursLightNeeded, 2); Serial.print(" hours, or "); Serial.print (MinLightNeeded, 0); Serial.println( " minutes");
  Serial.print("Artificial light needed: "); Serial.print(MinArtificialLight / 60, 2); Serial.print(" hours, or "); Serial.print (MinArtificialLight, 0); Serial.println( " minutes");
  Serial.print("Start Artifical lights: "); Serial.println(StartLightTime);
}

//===================================================
//===================================================

void printDoorStatus()
{
  DoorModeStatusToWords();
  DoorStatusToWords();
  Serial.print("Door Open offset from sunrise: "); Serial.print(OpenDoorOffset, 0); Serial.println(" minutes ");
  Serial.print("Door Open Time: "); Serial.println(OpenDoorTime);
  Serial.print("Door Close offset from sunset: "); Serial.print(CloseDoorOffset, 0); Serial.println(" minutes ");
  Serial.print("Door Close Time: "); Serial.println(CloseDoorTime);
}

//===================================================
//===================================================

void printNestBarStatus()
{
  Serial.print("Nest bar release time: "); Serial.println(NestBarTime);
}

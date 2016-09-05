 <img src="https://firebasestorage.googleapis.com/v0/b/dride-2384f.appspot.com/o/drideLogo2.png?alt=media&token=33d6a0dd-edd9-48e9-b42d-dd3721be83a8">

# dride is almost here



# Api reference
-----
# ADAS


###getRoad()

###### Return: [(int x1,int y1), (int x2,int y2), (int x3,int y3), (int x4,int y4)] 
Represent the left roadn lane a line from x1,y1 to x2,y2 and x3,y3 to x4,y4 correspondly

###getFrontCar()

###### Return: [(int x1,int y1), (int x2,int y2)] 
Represent a line from the left corner of the object to the right

###roadAngle()

###### Return: int angle
A number between 0-360 that represent the road angle.

###getSpeed()

###### Return: int speed
A number between 0-250 that represent the current speed.

###getCurrenPosition()

###### Return: (real lat, real lon)
A point that represent the current latitude and longitude.

--- 
# Speech


###startDictation()

###### Return: (string text)
Represent the text that was converted from the voice

###say(string text, string langCode)

###### Return: ()
Will speak the text 



---
# DVR


###getVideo(timestamp fromTime, timestamp toTime)

###### Return: (string videoUrl)
The url for the video requested









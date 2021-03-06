' Set to graphical mode with 640 x 480 window
Graphics 640, 480

' Load bat and ball images
Local bat:TImage = LoadImage("bat.png")
Local ball:TImage = LoadImage("ball.png")

' Set player position and number of lives. Includes width of bat in calculation
Local px:Int = (640 - 128) / 2
Local py:Int = 400
Local lives:Int = 3

' Control ball's position and speed. Will be changed later
Local bx:Int = 0
Local by:Int = 0
Local sx:Int = 0
Local sy:Int = 0

' Draw Amiga-style gradient
Function DrawGradient(increment:Int)
	Local y:Int = 0
	
	While y < 480
		Local blueshade:Float = Float(y) / 480
		Local blue:Int = (192 * blueshade)
		SetColor(0, 0, blue)
		DrawRect(0, y, 640, increment)
		y = y + increment
	Wend
SetColor(255, 255, 255)
End Function 

Local score:Int = 0

' Hide the mouse pointer
HideMouse

While Not KeyHit(KEY_ESCAPE) And Not AppTerminate()
	
	Local m:String = ""
	Cls
	
	DrawGradient(24)
	 
	' Draw the ball and bat
	DrawImage(ball, bx, by)
	DrawImage(bat, px, py)
	
	' Center and add messages
	If sx = 0
		m = "Press SPACE to serve the ball"
		DrawText(m, (640 - TextWidth(m)) / 2, 240)
		m = "You have " + lives + " lives left!"
		DrawText(m, (640 - TextWidth(m)) / 2, 254)
	End If
	
	m = "Score <" + score + "> Lives <" + lives + ">"
	DrawText(m, (640 - TextWidth(m)) / 2, 0)
	
	' Attach the bat to the mouse
	px = MouseX()
	If KeyHit(KEY_SPACE) And sx = 0
		sx = 4
		sy = 4
	End If
	
	' Make sure it doesn't go out of bounds when the mouse is moved outside the window
	If px < 0
		px = 0
	End If
	If px > 640 - 128
		px = 640 - 128
	End If
	
	' Make the ball bounce by checking to see when it hits a wall
	bx = bx + sx
	by = by + sy
	If bx < 0 Or bx > 640 - 24
		sx = sx * -1
	End If
	If by < 0 Then
		by = 0
		sy = sy * -1
	End If
	
	If by > py
		lives = lives - 1
		bx = 0
		by = 0
		sx = 0
		sy = 0
	End If
	
	' Check to see if the ball and bat hit each other
	If ImagesCollide(bat, px, py, 0, ball, bx, by, 0)
		by = by - 1
		sy = sy * -1
		score = score + 1
	End If
	
	Flip
Wend

ShowMouse
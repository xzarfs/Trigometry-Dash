extends KinematicBody2D

var InputCondition : bool = true
export var JumpSlowdown : float = 7
export var JumpForce : float = 500
export var Gravity : float = 10
var FinalFrameVelocity : float = 0
var JumpRotation : float = 4
var BestXPosition : float = 200

func _ready():
	position.x = BestXPosition

func _physics_process(delta):
	print(rotation_degrees)
	if CheckFloor():
		FinalFrameVelocity = 0
		if Input.is_action_pressed("up"):
			FinalFrameVelocity -= JumpForce
	else:
		FinalFrameVelocity += float(Gravity)
		print("air")
	
	if CheckFloor():
		if abs(int(rotation_degrees) % 90) < 45:
			if abs(int(rotation_degrees) % 90) > 5:
				rotation_degrees -= 5
			else:
				rotation_degrees = 0
		else:
			if abs(int(rotation_degrees) % 90) < 85:
				rotation_degrees += 5
			else:
				rotation_degrees = 0
	
	move_and_slide(Vector2(0,FinalFrameVelocity), Vector2(0,-1))

func CheckFloor() -> bool:
	if $CollisionDetection.get_overlapping_bodies().

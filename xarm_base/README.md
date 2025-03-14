# Hiwonder 6DOF xArm
This project implements the Hiwonder 6DOF robotic arm.

## Controls for the xArm
| servoId | arrayIndex | description  | value=500        | value=1500 | value=2500 |
|---------|------------|--------------|------------------|------------|------------|
| 1       | 0          | claw         | n/a              | open       | close      |
| 2       | 1          | wrist        | counterclockwise | home       | clockwise  |
| 3       | 2          | top elbow    | back             | home       | forward    |
| 4       | 3          | middle elbow | back             | home       | forward    |
| 5       | 4          | bottom elbow | forward          | home       | back       |
| 6       | 5          | base         | counterclockwise | home       | clockwise  |
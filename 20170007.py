import random

X = 0

Y = 0

while(X < 100 and Y < 100):

   X += random.randint(1,10)

   Y += random.randint(1,10)

if(X > Y):

  print("Player 1 wins!")

else:

  print("Player 2 wins!")
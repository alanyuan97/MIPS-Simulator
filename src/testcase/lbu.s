#lbu,0,,,should return 0
lui  $14,8192
addiu $2,$2,255
sb   $2,2($14)
lbu   $2,2($14)
srl  $2,$2,31
jr   $0
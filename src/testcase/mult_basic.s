#mult,1,,,$LO should return 1
addiu $14,$0,65535
sll  $3,$14,15
ori $3,$3,65535
mult $3,$3
mfhi $14
mflo $2
jr $0

#subu,255,,,normal sub should return $2 0xFF
addiu $1,$0,65535
sll  $3,$1,15
ori $3,$3,65535
addu  $2,$3,1
subu  $2,$2,1
jr    $0
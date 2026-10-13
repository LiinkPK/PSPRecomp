/* Entry 0x0886808C | file offset 0x00065064 | FUN_0886808c | bytes 156 */

float FUN_0886808c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_30 [16];
  
  fVar1 = (float)FUN_08867fec();
  FUN_089a3b30(auStack_30,param_1,param_2);
  fVar2 = (float)FUN_08867fec(auStack_30,param_3);
  if (1.5707964 < fVar2) {
    fVar1 = -fVar1;
  }
  return fVar1;
}


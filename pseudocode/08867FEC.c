/* Entry 0x08867FEC | file offset 0x00064FC4 | FUN_08867fec | bytes 160 */

undefined4 FUN_08867fec(undefined4 param_1,undefined4 param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  
  FUN_089a3bc8(auStack_30,param_1);
  FUN_089a3bc8(auStack_20,param_2);
  fVar1 = (float)FUN_089a3b10(auStack_30,auStack_20);
  if (fVar1 < 1.0) {
    if (fVar1 <= -1.0) {
      uVar2 = 0x40490fdb;
    }
    else {
      uVar2 = FUN_089a4520();
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


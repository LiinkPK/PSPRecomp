/* Entry 0x0889140C | file offset 0x0008E3E4 | FUN_0889140c | bytes 228 */

float FUN_0889140c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_b0 [12];
  ushort local_a4;
  ushort local_a2;
  undefined1 auStack_58 [44];
  short local_2c;
  short local_2a;
  
  iVar1 = FUN_088916a4(param_1,auStack_b0);
  if (iVar1 == 0) {
    iVar1 = 0;
    fVar3 = 0.0;
    if (local_a2 != 0) {
      fVar4 = fVar3;
      do {
        iVar2 = FUN_08891894(param_1,auStack_58,(uint)local_a4 + iVar1);
        fVar3 = fVar4;
        if (((iVar2 == 0) && (local_2c == 3)) &&
           (fVar3 = (float)(int)local_2a, (float)(int)local_2a <= fVar4)) {
          fVar3 = fVar4;
        }
        iVar1 = iVar1 + 1;
        fVar4 = fVar3;
      } while (iVar1 < (int)(uint)local_a2);
    }
  }
  else {
    fVar3 = -1.0;
  }
  return fVar3;
}


/* Entry 0x088D88AC | file offset 0x000D5884 | FUN_088d88ac | bytes 204 */

undefined4 FUN_088d88ac(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  
  iVar2 = FUN_088d86c0();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    pfVar4 = *(float **)(param_1 + 8);
    if (pfVar4 != (float *)0x0) {
      sVar1 = *(short *)(pfVar4 + 3);
      if (sVar1 < 8) {
        if (6 < sVar1) {
          fVar5 = *pfVar4;
          FUN_088d9f5c(pfVar4,6,1);
          FUN_088d9aec(5.0 - fVar5,*(undefined4 *)(param_1 + 8));
        }
      }
      else if (sVar1 == 10) {
        FUN_088d9f5c(pfVar4,6,1);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


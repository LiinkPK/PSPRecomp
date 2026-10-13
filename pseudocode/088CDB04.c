/* Entry 0x088CDB04 | file offset 0x000CAADC | FUN_088cdb04 | bytes 212 */

undefined4 FUN_088cdb04(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  
  iVar2 = FUN_088cd9d4();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    pfVar4 = *(float **)(param_1 + 8);
    if (pfVar4 != (float *)0x0) {
      sVar1 = *(short *)(pfVar4 + 3);
      if (sVar1 < 0x10) {
        if (0xe < sVar1) {
          fVar5 = *pfVar4;
          FUN_088d9f5c(pfVar4,0x11,1);
          FUN_088d9aec(5.0 - fVar5,*(undefined4 *)(param_1 + 8));
        }
      }
      else if (sVar1 < 0x11) {
        FUN_088d9f5c(pfVar4,0x11,1);
      }
    }
    FUN_088cd754(param_1);
    uVar3 = 0;
  }
  return uVar3;
}


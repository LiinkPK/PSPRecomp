/* Entry 0x088CE7F4 | file offset 0x000CB7CC | FUN_088ce7f4 | bytes 204 */

undefined4 FUN_088ce7f4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  
  iVar2 = FUN_088ce71c();
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    pfVar4 = *(float **)(param_1 + 8);
    if (pfVar4 != (float *)0x0) {
      sVar1 = *(short *)(pfVar4 + 3);
      if (sVar1 < 5) {
        if (3 < sVar1) {
          fVar5 = *pfVar4;
          FUN_088d9f5c(pfVar4,3,1);
          FUN_088d9aec(5.0 - fVar5,*(undefined4 *)(param_1 + 8));
        }
      }
      else if (sVar1 < 6) {
        FUN_088d9f5c(pfVar4,3,1);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* Entry 0x088B2264 | file offset 0x000AF23C | FUN_088b2264 | bytes 108 */

undefined4 FUN_088b2264(int param_1)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 4) == 0) {
    iVar3 = 0;
    psVar2 = (short *)(param_1 + 6);
    do {
      if (*psVar2 != -1) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar3 < 4);
    if (*(short *)(param_1 + 2) == -1) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Entry 0x0899BEE0 | file offset 0x00198EB8 | FUN_0899bee0 | bytes 256 */

void FUN_0899bee0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    FUN_0899c6dc();
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      sVar1 = *(short *)(iVar4 + 2) + -1;
      *(short *)(iVar4 + 2) = sVar1;
      if (sVar1 == 0) {
        FUN_0899b830();
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x58);
    }
    else {
      sVar1 = *(short *)(iVar4 + 2) + -1;
      *(short *)(iVar4 + 2) = sVar1;
      if (sVar1 == 0) {
        FUN_0899b830();
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x58);
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar3 = *(int *)(param_1 + 0x54);
      while( true ) {
        iVar2 = iVar5 * 4;
        iVar5 = iVar5 + 1;
        iVar3 = *(int *)(iVar2 + iVar3);
        sVar1 = *(short *)(iVar3 + 2) + -1;
        *(short *)(iVar3 + 2) = sVar1;
        if (sVar1 == 0) {
          FUN_0899b804(iVar3);
          iVar4 = *(int *)(param_1 + 0x58);
        }
        if (iVar4 <= iVar5) break;
        iVar3 = *(int *)(param_1 + 0x54);
      }
    }
    FUN_0899b804(*(undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}


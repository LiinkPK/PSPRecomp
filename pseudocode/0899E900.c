/* Entry 0x0899E900 | file offset 0x0019B8D8 | FUN_0899e900 | bytes 152 */

void FUN_0899e900(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 == 0x100) {
    if (param_2 == 1) {
      iVar4 = 0;
      do {
        iVar3 = 3;
        iVar2 = param_1;
        do {
          uVar1 = *(undefined4 *)(iVar2 + 0x20);
          iVar3 = iVar3 + -1;
          *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)(iVar2 + 0x10) = uVar1;
          iVar2 = iVar2 + 4;
        } while (-1 < iVar3);
        iVar4 = iVar4 + 1;
        param_1 = param_1 + 0x40;
      } while (iVar4 < 8);
    }
    else {
      iVar4 = 0;
      if (param_2 == 3) {
        do {
          iVar3 = 7;
          iVar2 = param_1;
          do {
            uVar1 = *(undefined4 *)(iVar2 + 0x40);
            iVar3 = iVar3 + -1;
            *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x20);
            *(undefined4 *)(iVar2 + 0x20) = uVar1;
            iVar2 = iVar2 + 4;
          } while (-1 < iVar3);
          iVar4 = iVar4 + 1;
          param_1 = param_1 + 0x80;
        } while (iVar4 < 8);
      }
    }
  }
  return;
}


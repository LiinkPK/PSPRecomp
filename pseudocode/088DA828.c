/* Entry 0x088DA828 | file offset 0x000D7800 | FUN_088da828 | bytes 132 */

void FUN_088da828(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[3];
  iVar4 = *param_1;
  while (iVar1 = iVar4, iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x3c);
    if ((*(ushort *)(iVar1 + 0x20) & 1) != 0) {
      if ((int)*(short *)(iVar1 + 0xc) < *(int *)(iVar3 + 0x2c)) {
        iVar2 = *(int *)(iVar3 + 0xc) + *(short *)(iVar1 + 0xc) * 0x1c;
      }
      else {
        iVar2 = 0;
      }
      FUN_088da520(iVar1,iVar2);
    }
  }
  return;
}


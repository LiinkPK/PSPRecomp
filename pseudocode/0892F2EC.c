/* Entry 0x0892F2EC | file offset 0x0012C2C4 | FUN_0892f2ec | bytes 152 */

void FUN_0892f2ec(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_f;
  
  iVar1 = *(int *)(param_1 + 0x88);
  iVar3 = 0;
  iVar4 = 0;
  if (0 < iVar1) {
    uStack_f = (char)(param_2 >> 8);
    iVar2 = param_1;
    do {
      if (((uint)*(byte *)(iVar2 + 0x8c) == (param_2 & 0xff)) &&
         (*(char *)(iVar2 + 0x8d) == uStack_f)) {
        iVar4 = iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  FUN_088d46e4(param_1 + 0x5c,iVar4,0,iVar1 + -1,0,0xffffffff);
  *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 1;
  return;
}


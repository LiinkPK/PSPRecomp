/* Entry 0x088844C4 | file offset 0x0008149C | FUN_088844c4 | bytes 204 */

void FUN_088844c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = param_1;
  do {
    iVar2 = *(int *)(iVar4 + 0xc);
    if (iVar2 != 0) {
      iVar1 = iVar3 + *(int *)(param_1 + 0x18) * 0xc;
      if ((int)*(short *)(iVar2 + 0xc) == (uint)*(ushort *)(&DAT_089c9f70 + iVar1 + 2)) {
        FUN_088d9f5c(iVar2,*(undefined2 *)(&DAT_089c9f70 + iVar1 + 4),0);
      }
      else if (iVar2 != 0) {
        FUN_088da060(iVar2);
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 6;
  } while (iVar5 < 2);
  return;
}


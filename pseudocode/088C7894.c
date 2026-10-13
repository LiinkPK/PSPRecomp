/* Entry 0x088C7894 | file offset 0x000C486C | FUN_088c7894 | bytes 108 */

int FUN_088c7894(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(param_3 + 0x5e);
  iVar2 = param_2 + *(short *)(param_3 + 2) + (int)*(short *)(param_3 + 6);
  uVar3 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    iVar2 = iVar2 + ((uint)uVar1 << (uVar3 & 0x1f));
    param_1 = param_1 + 1;
    uVar3 = uVar3 + 1;
    uVar1 = *param_1;
  }
  uVar3 = 0;
  uVar1 = *puVar4;
  while (uVar1 != 0) {
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + ((uint)uVar1 << (uVar3 & 0x1f));
    uVar3 = uVar3 + 1;
    uVar1 = *puVar4;
  }
  return iVar2;
}


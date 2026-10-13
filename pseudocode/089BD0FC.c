/* Entry 0x089BD0FC | file offset 0x001BA0D4 | FUN_089bd0fc | bytes 88 */

int FUN_089bd0fc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    uVar2 = (uint)*(char *)(param_1 + 0x19);
    uVar4 = (uint)*(byte *)(param_1 + 0x18);
    uVar3 = uVar4;
    if ((-1 < (int)uVar2) && (uVar3 = uVar2, (int)uVar4 < (int)uVar2)) {
      uVar3 = uVar4;
    }
    iVar1 = *(int *)(param_1 + 0x14) + uVar3 * 0x30;
    if (iVar1 != 0) {
      return (int)*(short *)(iVar1 + 0x28);
    }
  }
  return 0;
}


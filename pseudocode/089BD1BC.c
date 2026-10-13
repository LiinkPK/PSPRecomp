/* Entry 0x089BD1BC | file offset 0x001BA194 | FUN_089bd1bc | bytes 80 */

uint FUN_089bd1bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (uVar2 = (uint)*(ushort *)(param_1 + 0x12), 0 < param_2)) &&
      (*(char *)(param_1 + 0x28) == '\x01')) && (iVar1 = 0, -1 < param_2 + -1)) {
    do {
      iVar1 = iVar1 + 1;
      uVar2 = (uVar2 + 1) / 2;
    } while (param_2 != iVar1);
    return uVar2;
  }
  return uVar2;
}


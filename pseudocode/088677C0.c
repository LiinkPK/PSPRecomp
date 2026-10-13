/* Entry 0x088677C0 | file offset 0x00064798 | FUN_088677c0 | bytes 64 */

int FUN_088677c0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar1 = uVar2 * (param_2 / uVar2);
  if (param_2 % uVar2 != 0) {
    iVar1 = iVar1 + uVar2;
  }
  return iVar1;
}


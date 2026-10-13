/* Entry 0x089BD154 | file offset 0x001BA12C | FUN_089bd154 | bytes 36 */

uint FUN_089bd154(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(byte *)(param_1 + 0x19) - 1;
    uVar1 = param_2 + uVar1 & ~uVar1;
  }
  return uVar1;
}


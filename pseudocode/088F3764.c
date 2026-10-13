/* Entry 0x088F3764 | file offset 0x000F073C | FUN_088f3764 | bytes 88 */

uint FUN_088f3764(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (iVar1 = FUN_088bf4cc(param_2,0xf6); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar2 = uVar2 | 1 << ((int)*(short *)(iVar1 + 4) & 0x1fU);
  }
  return uVar2;
}


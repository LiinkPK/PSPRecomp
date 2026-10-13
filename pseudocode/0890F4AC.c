/* Entry 0x0890F4AC | file offset 0x0010C484 | FUN_0890f4ac | bytes 152 */

void FUN_0890f4ac(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0891705c(0xffffffff);
  while (iVar3 = FUN_0890f544(param_1,iVar3,0), iVar3 != 0) {
    puVar2 = (uint *)(iVar1 + ((uint)(int)*(short *)(iVar3 + 0xc) >> 5) * 4 + 0x130);
    *puVar2 = *puVar2 & ~(1 << ((int)*(short *)(iVar3 + 0xc) & 0x1fU));
  }
  return;
}


/* Entry 0x08804498 | file offset 0x00001470 | FUN_08804498 | bytes 236 */

void FUN_08804498(undefined4 param_1,int param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_2 + 0x180);
  bVar2 = false;
  if (((sVar1 == 1) || (sVar1 == 2)) || (sVar1 == 3)) {
    bVar2 = true;
  }
  if (((sVar1 == 0x66) && (iVar3 = FUN_0883739c(param_2), iVar3 != 0)) &&
     (iVar3 = func_0x08b2f9bc(param_2), iVar3 != 0)) {
    bVar2 = true;
  }
  if ((((*(byte *)(param_2 + 0x193) & 1) != 0) && (iVar3 = FUN_0883739c(param_2), iVar3 != 0)) &&
     (iVar3 = func_0x08b2f9bc(param_2), iVar3 != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_0882fac4(0x41000000,0,param_2 + 0x130,param_3,0);
  }
  return;
}


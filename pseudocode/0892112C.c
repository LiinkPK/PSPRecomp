/* Entry 0x0892112C | file offset 0x0011E104 | FUN_0892112c | bytes 156 */

void FUN_0892112c(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((((*param_1 & 8) != 0) &&
      (iVar1 = func_0x08b3486c(*(undefined4 *)(param_1[3] + 4)), iVar1 != 0)) &&
     ((*(int *)(param_1[3] + 0x44) == 0 || (iVar1 = FUN_088a751c(), iVar1 == 0)))) {
    uVar2 = *param_1;
    *param_1 = uVar2 & 0xfffffff7;
    *param_1 = uVar2 & 0xfffffff5;
  }
  return;
}


/* Entry 0x08857824 | file offset 0x000547FC | FUN_08857824 | bytes 448 */

void FUN_08857824(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  param_1[4] = param_1[4] + 1;
  if (*param_1 == 0) {
    iVar1 = FUN_0885ca98(param_2,3,0x656e696d,0);
    if (iVar1 != 0) {
      iVar1 = FUN_0886646c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      *param_1 = iVar1;
    }
    iVar1 = FUN_0885ca98(param_2,3,0x656e696d,1);
    if (iVar1 != 0) {
      iVar1 = FUN_0886646c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      param_1[1] = iVar1;
    }
    iVar1 = FUN_0885ca98(param_2,3,0x656e696d,2);
    if (iVar1 != 0) {
      iVar1 = FUN_0886646c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      param_1[3] = iVar1;
    }
    iVar1 = FUN_0885ca98(param_2,3,0x675f6d74,0);
    if (iVar1 != 0) {
      iVar1 = FUN_0886646c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      param_1[2] = iVar1;
    }
  }
  return;
}


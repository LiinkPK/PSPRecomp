/* Entry 0x088BF52C | file offset 0x000BC504 | FUN_088bf52c | bytes 100 */

undefined4 FUN_088bf52c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c [2];
  
  iVar1 = *(int *)(param_1 + 0x5d8);
  if ((iVar1 != 0) &&
     (local_c[0] = param_2,
     iVar1 = FUN_088befe0(iVar1,iVar1 + *(int *)(param_1 + 0x5dc) * 8,local_c,0), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  return 0;
}


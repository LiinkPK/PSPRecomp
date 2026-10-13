/* Entry 0x08896240 | file offset 0x00093218 | FUN_08896240 | bytes 244 */

void FUN_08896240(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x14;
  if (*(int *)(param_1 + 0x38) == 2) {
    FUN_0889f830(iVar1,0);
    FUN_0889f704(iVar1);
  }
  FUN_0889f6a0(iVar1,3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_0889f750(0x3f800000,iVar1,1,FUN_088967b4,param_1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_088a2664(0,*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_088a2664(0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_088a24d4(0,0x18703,1,0);
  FUN_088a24d4(0,0x18704,1,0);
  FUN_08895fe4(param_1);
  return;
}


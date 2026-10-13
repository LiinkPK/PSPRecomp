/* Entry 0x08896558 | file offset 0x00093530 | FUN_08896558 | bytes 156 */

void FUN_08896558(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x14;
  if ((*(int *)(param_1 + 0x38) == 1) || (*(int *)(param_1 + 0x38) == 2)) {
    FUN_0889f830(iVar1,0);
    FUN_0889f704(iVar1);
  }
  FUN_0889f6a0(iVar1,3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  FUN_0889f750(0x3f800000,iVar1,1,FUN_088967b4,param_1);
  *(undefined4 *)(param_1 + 0x38) = 3;
  return;
}


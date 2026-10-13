/* Entry 0x088F78B0 | file offset 0x000F4888 | FUN_088f78b0 | bytes 112 */

void FUN_088f78b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_089d8360;
  if (DAT_089d8360 != 0) {
    uVar2 = FUN_0890e9bc();
    *(undefined4 *)(param_1 + 0x3196c) = uVar2;
    FUN_08909758(param_1,iVar1,uVar2,param_2);
    *(int *)(param_1 + 0x14c64) = param_1 + 0x14c68;
  }
  return;
}


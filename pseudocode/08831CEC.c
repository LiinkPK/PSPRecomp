/* Entry 0x08831CEC | file offset 0x0002ECC4 | FUN_08831cec | bytes 208 */

void FUN_08831cec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0886b254(*(undefined4 *)(param_1 + 0x394));
  if ((iVar1 != -1) &&
     (iVar2 = FUN_0886b2a8(*(undefined4 *)(param_1 + 0x394),iVar1,param_3), iVar2 != -1)) {
    if (*(short *)(**(int **)(*(int *)(param_1 + 0x394) + 0x84) + iVar1 * 0x60 + 0x4a) != iVar2) {
      FUN_0886a9b0(*(int *)(param_1 + 0x394),iVar1,iVar2,0xffffffff);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x528) + iVar1 * 4) = 2;
  }
  return;
}


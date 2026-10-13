/* Entry 0x088AA4E0 | file offset 0x000A74B8 | FUN_088aa4e0 | bytes 216 */

int FUN_088aa4e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088a7dbc(0x280);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_088a6690(iVar1);
    iVar2 = iVar1;
  }
  if (iVar2 != 0) {
    FUN_088a68fc(iVar2,param_1,param_2,param_3,param_4,param_5);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(int *)(param_1 + 0x20) = iVar2;
      *(int *)(param_1 + 0x1c) = iVar2;
      *(undefined4 *)(iVar2 + 0x27c) = 0;
    }
    else {
      *(int *)(*(int *)(param_1 + 0x20) + 0x27c) = iVar2;
      *(undefined4 *)(iVar2 + 0x27c) = 0;
      *(int *)(param_1 + 0x20) = iVar2;
    }
  }
  return iVar2;
}


/* Entry 0x08843CF4 | file offset 0x00040CCC | FUN_08843cf4 | bytes 600 */

void FUN_08843cf4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20;
  
  FUN_08843a80(param_1,param_1 + 0x24,param_2,param_3);
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_0887a644(*(int *)(param_1 + 0xcc),3);
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  iVar1 = FUN_08843a80(param_1,param_1 + 200,param_2,param_3);
  if (iVar1 != 0) {
    iVar2 = FUN_0887b080(0x10);
    iVar1 = 0;
    if (iVar2 != 0) {
      FUN_0887a61c(iVar2);
      iVar1 = iVar2;
    }
    *(int *)(param_1 + 0xcc) = iVar1;
    FUN_0887ac24(iVar1,*(undefined4 *)(param_1 + 200));
  }
  FUN_08843a80(param_1,param_1 + 0x1c,param_2,param_3);
  local_20 = *(int *)(param_1 + 0x18);
  iVar1 = FUN_08843a80(param_1,&local_20,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x18) = local_20;
  }
  FUN_08843a80(param_1,param_1 + 0x8c,param_2,param_3);
  FUN_08843a80(param_1,param_1 + 0x90,param_2,param_3);
  FUN_08843a80(param_1,param_1 + 0x88,param_2,param_3);
  FUN_08843a80(param_1,param_1 + 0x30,param_2,param_3);
  iVar1 = FUN_08843a80(param_1,param_1 + 8,param_2,param_3);
  if (iVar1 != 0) {
    FUN_08843448(param_1);
  }
  iVar1 = FUN_08843a80(param_1,param_1 + 0x10,param_2,param_3);
  if (iVar1 != 0) {
    FUN_088434c8(param_1);
  }
  local_20 = *(int *)(param_1 + 0x20);
  iVar1 = FUN_08843a80(param_1,&local_20,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x20) = local_20;
  }
  local_20 = *(int *)(param_1 + 0x94);
  iVar1 = FUN_08843a80(param_1,&local_20,param_2,param_3);
  if (iVar1 != 0) {
    FUN_08828ac8(param_1 + 0x94);
    FUN_08828a98(param_1 + 0x94,local_20);
  }
  local_20 = *(int *)(param_1 + 0xa4);
  if (local_20 != 0) {
    uVar3 = FUN_0885c648(param_3,local_20);
    iVar1 = FUN_08843a80(param_1,&local_20,param_2,param_3);
    if (iVar1 != 0) {
      FUN_088105e0(param_1 + 0xa0);
      FUN_088105fc(param_1 + 0xa0,local_20,uVar3);
    }
  }
  return;
}


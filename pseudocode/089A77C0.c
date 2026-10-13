/* Entry 0x089A77C0 | file offset 0x001A4798 | FUN_089a77c0 | bytes 288 */

undefined4 FUN_089a77c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30;
  int local_2c;
  
  if ((*(uint *)(param_1 + 0x28) & 0x10) != 0) {
    iVar1 = FUN_089a92c4();
    iVar3 = FUN_089a84f8(param_1,param_2,param_3,param_4);
    if (iVar3 != 0) {
      return 0x80660001;
    }
    iVar3 = FUN_089a92c4(param_1);
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + (iVar3 - iVar1);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    local_30 = 0x31786469;
    iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54);
    local_2c = iVar3 * 0x10;
    iVar3 = iVar3 * 4;
    iVar1 = FUN_089a9470(param_1,&local_30);
    if ((iVar1 == 0) && (iVar1 = FUN_089a9540(param_1,param_2,iVar3), iVar1 == iVar3)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80660001;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* Entry 0x088395B8 | file offset 0x00036590 | FUN_088395b8 | bytes 420 */

void FUN_088395b8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_20 [4];
  
  FUN_089a3868();
  FUN_089a3868(param_1 + 0x10,param_4);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_4 + 0x24);
  *(short *)(param_1 + 0x30) = (short)*(undefined4 *)(param_4 + 0x38);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_2 + 0x2a);
  *(bool *)(param_1 + 0x34) = *(short *)(param_2 + 0x2c) == 2;
  *(undefined2 *)(param_1 + 0x36) = 0xffff;
  iVar2 = *(int *)(param_1 + 0x24);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x542) == '\x03')) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x5d4);
  }
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x542) == '\x03')) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x5d4);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  local_20[0] = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x542) == '\x03') {
      iVar1 = *(int *)(iVar1 + 0x5d4);
    }
    if ((iVar1 != 0) && (iVar2 = FUN_0883739c(iVar1), iVar2 == 1)) {
      if (*(short *)(param_2 + 0x2c) == 2) {
        uVar3 = *(undefined4 *)(param_2 + 0xbc);
        iVar1 = func_0x08ab86fc(iVar1 + 0xf70,uVar3,local_20);
        if (iVar1 != 0) {
          local_20[0] = 0;
        }
        *(short *)(param_1 + 0x36) = (short)uVar3;
      }
      else {
        iVar2 = func_0x08b30898(iVar1);
        if ((iVar2 != 0) && (iVar1 = func_0x08ab863c(iVar1 + 0xf70,local_20), iVar1 != 0)) {
          local_20[0] = 0;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x35) = local_20[0];
  return;
}


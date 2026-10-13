/* Entry 0x08932788 | file offset 0x0012F760 | FUN_08932788 | bytes 516 */

void FUN_08932788(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 char cStackX_0,char cStackX_4,char cStackX_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [64];
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  local_3c = param_7;
  local_38 = param_8;
  (**(code **)(*(int *)(param_1 + 0xc) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x18));
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,0,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_0887b3ec(param_2,param_5,0,param_6,0,0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  local_40 = auStack_80;
  FUN_089347e8(auStack_80,&DAT_089cf3e8,local_38);
  uVar1 = local_3c;
  uVar2 = FUN_0887b3ec(param_2,local_3c,0,0x13,&local_40,1);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (cStackX_0 == '\0') {
    uVar2 = FUN_0887b3ec(param_2,uVar1,0,0x16,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  else {
    uVar2 = FUN_0887b3ec(param_2,uVar1,0,0x15,0,0);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if (cStackX_4 == '\0') {
    uVar2 = FUN_0887b3ec(param_2,uVar1,0,0x16,0,0);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  else {
    uVar2 = FUN_0887b3ec(param_2,uVar1,0,0x15,0,0);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  uVar1 = FUN_0887b3ec(param_2,uVar1,0,0x21,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_088d428c(param_1 + 0x10,param_1 + 0x20,&DAT_089cf308,1);
  if (cStackX_8 == '\0') {
    FUN_0887b944(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}


/* Entry 0x0883241C | file offset 0x0002F3F4 | FUN_0883241c | bytes 296 */

void FUN_0883241c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 char param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  
  if (param_6 == '\0') {
    (**(code **)(*(int *)(param_4 + 0x544) + 0x1dc))
              ((*(float *)(param_4 + 0x84) - *(float *)(param_4 + 0x3c0)) -
               *(float *)(param_4 + 0x84),param_4 + *(short *)(*(int *)(param_4 + 0x544) + 0x1d8));
    uVar1 = *(uint *)(param_4 + 900);
    *(uint *)(param_4 + 900) = uVar1 | 0x200;
    *(uint *)(param_4 + 900) = uVar1 & 0xfffffeff | 0x200;
    *(uint *)(param_4 + 900) = uVar1 & 0xfffff6ff | 0x200;
    FUN_08834c10(param_4,0,0);
    uVar2 = 0x259;
  }
  else {
    uVar2 = 600;
  }
  FUN_08832150(param_3,param_4,param_5);
  FUN_089a3890(auStack_30);
  local_2c = param_1;
  local_24 = param_2;
  func_0x08a58a5c(param_4,auStack_30);
  *(uint *)(param_5 + 0x28) = *(uint *)(param_5 + 0x28) | 1;
  FUN_0882fa10(0,0,param_4 + 0x130,uVar2,0);
  FUN_08834934(param_4,0xffffffff,0x66);
  return;
}


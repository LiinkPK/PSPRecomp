/* Entry 0x08932238 | file offset 0x0012F210 | FUN_08932238 | bytes 252 */

void FUN_08932238(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x18));
  uVar1 = FUN_0887ad78(&DAT_09b4e838,0,param_4,0,0,0);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_0887ad78(&DAT_09b4e848,0,param_5,0,0,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (param_6 != -1) {
    uVar1 = FUN_0887b3ec(param_2,param_3,0,param_6,0,0);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
  }
  FUN_088d428c(param_1 + 0x10,param_1 + 0x18,&DAT_089cf2e8,1);
  return;
}


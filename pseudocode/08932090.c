/* Entry 0x08932090 | file offset 0x0012F068 | FUN_08932090 | bytes 232 */

void FUN_08932090(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_60 [64];
  undefined1 auStack_20 [4];
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x10));
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)(param_1 + 8) = param_5;
  uVar1 = FUN_088daa40(param_2,10,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_088daa40(param_3,param_6,0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  FUN_088da0a8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_60,auStack_20);
  FUN_088d9b84(*(undefined4 *)(param_1 + 0x10),auStack_60);
  FUN_088d9af4(*(undefined4 *)(param_1 + 0x10),auStack_20);
  FUN_088d3cf0(0,param_1 + 0x10,&DAT_089cf2d8);
  return;
}


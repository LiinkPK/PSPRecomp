/* Entry 0x088841EC | file offset 0x000811C4 | FUN_088841ec | bytes 244 */

undefined4 * FUN_088841ec(undefined4 *param_1,undefined1 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  FUN_08885b0c();
  if (*(short *)(param_3 + 0xc) == -1) {
    *param_1 = 0;
    sVar1 = *(short *)(param_3 + 0x10);
  }
  else {
    uVar4 = FUN_088d0700(DAT_089d7830,param_2,*(short *)(param_3 + 0xc),
                         *(undefined2 *)(param_3 + 0xe));
    *param_1 = uVar4;
    sVar1 = *(short *)(param_3 + 0x10);
  }
  if (sVar1 == -1) {
    param_1[2] = 0;
    uVar2 = *(undefined2 *)(param_3 + 0xe);
    uVar3 = *(undefined2 *)(param_3 + 10);
  }
  else {
    uVar4 = FUN_088d0700(DAT_089d7830,param_2,sVar1,*(undefined2 *)(param_3 + 0x12));
    param_1[2] = uVar4;
    uVar2 = *(undefined2 *)(param_3 + 0xe);
    uVar3 = *(undefined2 *)(param_3 + 10);
  }
  uVar4 = FUN_088d0700(DAT_089d7830,param_2,uVar3,uVar2);
  param_1[1] = uVar4;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}


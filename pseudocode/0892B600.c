/* Entry 0x0892B600 | file offset 0x001285D8 | FUN_0892b600 | bytes 252 */

void FUN_0892b600(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_60 [64];
  undefined1 *local_20;
  
  FUN_0892b7a4();
  local_20 = auStack_60;
  FUN_089347e8(auStack_60,&DAT_089ced1c,param_4);
  uVar1 = FUN_0887b3ec(param_2,param_3,0,0,&local_20,1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_089347e8(auStack_60,&DAT_089ced1c,param_5);
  uVar1 = FUN_0887b3ec(param_2,param_3,0,1,&local_20,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  FUN_088d428c(param_1 + 8,param_1 + 0x24,&DAT_089ceca0,1);
  return;
}


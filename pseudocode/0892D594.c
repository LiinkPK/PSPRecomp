/* Entry 0x0892D594 | file offset 0x0012A56C | FUN_0892d594 | bytes 268 */

void FUN_0892d594(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  FUN_0892d838();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,2,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_0892d76c(param_1,param_2,param_3,param_4);
  uVar1 = FUN_0887b3ec(param_2,param_3,0,3,0,0);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_0892d6a0(param_1,param_2,param_3,param_5);
  FUN_0892d8f0(param_1,param_2,param_3,param_6);
  FUN_088d428c(param_1 + 0x30,param_1 + 0x44,&DAT_089cee20,1);
  return;
}


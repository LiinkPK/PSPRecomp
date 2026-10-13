/* Entry 0x0892D76C | file offset 0x0012A744 | FUN_0892d76c | bytes 204 */

void FUN_0892d76c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_60 [64];
  undefined1 *local_20;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  local_20 = auStack_60;
  FUN_089347e8(auStack_60,&DAT_089cee88,param_4);
  uVar1 = FUN_0887b3ec(param_2,param_3,0,4,&local_20,1);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  FUN_088d428c(param_1 + 0x30,param_1 + 0x44,&DAT_089cee20,1);
  return;
}


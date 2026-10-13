/* Entry 0x088D7C30 | file offset 0x000D4C08 | FUN_088d7c30 | bytes 128 */

undefined4 FUN_088d7c30(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  FUN_088d7bf0();
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x10) = param_2;
    *(int *)(param_1 + 0x14) = param_3;
    *(int *)(param_1 + 0x18) = param_4;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}


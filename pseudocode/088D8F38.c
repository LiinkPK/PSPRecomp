/* Entry 0x088D8F38 | file offset 0x000D5F10 | FUN_088d8f38 | bytes 152 */

undefined4
FUN_088d8f38(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d8e18();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined4 *)(param_1 + 0x24) = param_5;
    *(undefined1 *)(param_1 + 0x28) = param_6;
    uVar2 = 0;
  }
  return uVar2;
}


/* Entry 0x088D8328 | file offset 0x000D5300 | FUN_088d8328 | bytes 176 */

undefined4 FUN_088d8328(int param_1,int param_2,uint param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d82b0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (((param_2 == 0) || (7 < param_3)) || (param_3 <= param_4)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(uint *)(param_1 + 0x14) = param_4;
    *(int *)(param_1 + 0x18) = param_2;
    *(uint *)(param_1 + 0x1c) = param_3;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = param_5;
    *(undefined4 *)(param_1 + 0xc) = 1;
    uVar2 = 0;
  }
  return uVar2;
}


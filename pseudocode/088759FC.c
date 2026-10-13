/* Entry 0x088759FC | file offset 0x000729D4 | FUN_088759fc | bytes 136 */

undefined4
FUN_088759fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08875978();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_5 + 4) = param_1;
    *(undefined4 *)(param_5 + 8) = param_2;
    *(undefined4 *)(param_5 + 0xc) = param_3;
    *(undefined4 *)(param_5 + 0x10) = param_4;
    *(undefined1 *)(param_5 + 0x14) = param_6;
    uVar2 = 0;
  }
  return uVar2;
}


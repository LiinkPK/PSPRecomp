/* Entry 0x088D743C | file offset 0x000D4414 | FUN_088d743c | bytes 312 */

undefined4 FUN_088d743c(int param_1,int param_2,int param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (((param_2 == 0) || (param_3 < 0)) || (1 < param_4)) {
    uVar2 = 0xfffffffe;
  }
  else if (*(int *)(param_1 + 0x10) == 2) {
    uVar2 = FUN_088d93e0(param_1 + 0x5c);
    FUN_088d8328(param_1 + 0x24,param_2,uVar2,param_3,param_5);
    FUN_088d87e4(param_1 + 0x4c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_088d9628(param_1 + 0x5c,uVar2);
      uVar2 = *(undefined4 *)(param_1 + 0x20);
    }
    FUN_088d7eac(param_1 + 0x244,param_4,uVar2);
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      FUN_088d9924(param_1 + 0x264);
    }
    *(undefined4 *)(param_1 + 0x10) = 3;
    *(uint *)(param_1 + 0x14) = param_4;
    FUN_088d7078(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}


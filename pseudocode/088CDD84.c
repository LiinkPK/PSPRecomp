/* Entry 0x088CDD84 | file offset 0x000CAD5C | FUN_088cdd84 | bytes 288 */

undefined4
FUN_088cdd84(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_088cd704,"Update");
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(undefined1 **)(iVar1 + 4) = param_1;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x16) = 2;
      *(undefined1 *)(*(int *)(param_1 + 4) + 0x15) = 200;
      FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 4));
      if (param_5 == '\0') {
        FUN_088cdc60(param_1);
        FUN_0887b120();
        iVar1 = FUN_0887aacc(param_1 + 0x2c,"text/JP/common/pause_help.bin",
                             *(undefined4 *)(DAT_089d7830 + 4));
        if (iVar1 == 0) {
          FUN_0887b130();
          return 0xfffffffd;
        }
        FUN_0887b130();
        param_1[0x28] = 1;
      }
      DAT_089d7810 = param_1;
      param_1[0x20] = param_5;
      *param_1 = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}


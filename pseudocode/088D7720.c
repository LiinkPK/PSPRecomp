/* Entry 0x088D7720 | file offset 0x000D46F8 | FUN_088d7720 | bytes 356 */

undefined4
FUN_088d7720(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_088823c4(param_2,param_3,param_4,FUN_088d7028,"Update");
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      *(undefined1 **)(iVar1 + 4) = param_1;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x16) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x15) = 200;
      FUN_088cff30(DAT_089d7830,*(undefined4 *)(param_1 + 0xc));
      if (param_7 == '\x01') {
        *(byte *)(*(int *)(param_1 + 0xc) + 0x14) = *(byte *)(*(int *)(param_1 + 0xc) + 0x14) | 0x20
        ;
      }
      puVar3 = param_1 + 0x24;
      FUN_088d804c(puVar3,param_1 + 0x5c,param_7);
      puVar4 = param_1 + 0x4c;
      FUN_088d85e4(puVar4,*(undefined4 *)(param_1 + 0xc));
      FUN_088d92ac(param_1 + 0x5c,*(undefined4 *)(param_1 + 0xc),puVar3,puVar4);
      FUN_088d7c30(param_1 + 0x244,*(undefined4 *)(param_1 + 0xc),puVar3,puVar4);
      FUN_088d9790(param_1 + 0x264,*(undefined4 *)(param_1 + 0xc),puVar4);
      *(undefined4 *)(param_1 + 4) = param_5;
      param_1[8] = param_7;
      *param_1 = 1;
      uVar2 = 0;
    }
  }
  return uVar2;
}


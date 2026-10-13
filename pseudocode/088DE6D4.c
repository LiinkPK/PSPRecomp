/* Entry 0x088DE6D4 | file offset 0x000DB6AC | FUN_088de6d4 | bytes 220 */

undefined4 FUN_088de6d4(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_088de6cc();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (((param_2 == 0) || (param_3 < 0)) || (1 < param_4)) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_088df330(param_1 + 0x14,param_2,param_4);
    FUN_088dec14(param_1 + 0x30);
    iVar1 = 0;
    iVar3 = param_1 + 0x48;
    do {
      FUN_088def7c(iVar3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar1 < 2);
    FUN_088df908(param_1 + 0x80,param_3,*(undefined1 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    FUN_088de5fc(param_1);
    uVar2 = 0;
  }
  return uVar2;
}


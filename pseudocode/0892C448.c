/* Entry 0x0892C448 | file offset 0x00129420 | FUN_0892c448 | bytes 736 */

void FUN_0892c448(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,undefined2 param_8,char param_9,undefined2 uStackX_0,
                 undefined2 uStackX_4,undefined2 uStackX_8,undefined2 uStackX_c)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0892b750();
  *(undefined4 *)(param_2 + 0x34) = param_7;
  *(undefined2 *)(param_2 + 0x38) = param_8;
  *(undefined2 *)(param_2 + 0x3a) = uStackX_0;
  *(undefined2 *)(param_2 + 0x3c) = uStackX_4;
  *(undefined2 *)(param_2 + 0x3e) = uStackX_8;
  *(undefined2 *)(param_2 + 0x40) = uStackX_c;
  if (param_3 != 0) {
    if (20.0 < param_1) {
      uVar2 = FUN_088daa40(param_3,3,0);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      uVar1 = *(undefined2 *)(param_2 + 0x3a);
    }
    else {
      uVar2 = FUN_088daa40(param_3,2,0);
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      uVar1 = *(undefined2 *)(param_2 + 0x3a);
    }
    FUN_0892b7f8(param_2,uVar4,uVar2,uVar1);
    FUN_088d9aec(param_1,*(undefined4 *)(param_2 + 0x18));
    FUN_088d9f08(param_1,*(undefined4 *)(param_2 + 0x18));
    if (20.0 < param_1) {
      uVar2 = FUN_088daa40(param_3,4,0);
      *(undefined4 *)(param_2 + 0x1c) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      uVar1 = *(undefined2 *)(param_2 + 0x3c);
    }
    else {
      uVar2 = FUN_088daa40(param_3,5,0);
      *(undefined4 *)(param_2 + 0x1c) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      uVar1 = *(undefined2 *)(param_2 + 0x3c);
    }
    FUN_0892b7f8(param_2,uVar4,uVar2,uVar1);
    uVar2 = FUN_088daa40(param_3,6,0);
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    FUN_0892b7f8(param_2,*(undefined4 *)(param_2 + 0x34),uVar2,*(undefined2 *)(param_2 + 0x3e));
  }
  if (param_4 != 0) {
    uVar2 = FUN_088daa40(param_4,0,0);
    *(undefined4 *)(param_2 + 0x10) = uVar2;
    FUN_0892b7f8(param_2,*(undefined4 *)(param_2 + 0x34),uVar2,*(undefined2 *)(param_2 + 0x38));
  }
  if (param_5 != 0) {
    uVar2 = FUN_088daa40(param_5,0,0);
    *(undefined4 *)(param_2 + 0xc) = uVar2;
    FUN_0892b7f8(param_2,*(undefined4 *)(param_2 + 0x10),uVar2,1);
  }
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 != 0) {
    if (param_9 == '\0') {
      uVar2 = FUN_088daa40(iVar3,0,0);
      *(undefined4 *)(param_2 + 8) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      uVar2 = FUN_088daa40(iVar3,1,0);
      *(undefined4 *)(param_2 + 8) = uVar2;
      uVar4 = *(undefined4 *)(param_2 + 0x10);
    }
    FUN_0892b7f8(param_2,uVar4,uVar2,0);
  }
  if (param_6 != 0) {
    uVar2 = FUN_088daa40(param_6,0,0);
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    FUN_0892b7f8(param_2,*(undefined4 *)(param_2 + 0x34),uVar2,*(undefined2 *)(param_2 + 0x40));
    FUN_088d9cfc(*(undefined4 *)(param_2 + 0x14));
  }
  return;
}


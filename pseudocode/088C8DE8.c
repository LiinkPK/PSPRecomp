/* Entry 0x088C8DE8 | file offset 0x000C5DC0 | FUN_088c8de8 | bytes 380 */

undefined4 FUN_088c8de8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 < 3) {
    iVar1 = FUN_088c83fc(param_1);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xbda8);
      *(int *)(param_1 + 0xbda8) = iVar1 + 1;
      while (param_2 < iVar1) {
        iVar3 = FUN_088c9044(param_1,iVar1);
        iVar1 = iVar1 + -1;
        iVar4 = FUN_088c9044(param_1,iVar1);
        if ((iVar3 == 0) || (iVar4 == 0)) {
          return 0;
        }
        FUN_089a34c0(iVar3,iVar4);
        FUN_089a34c0(iVar3 + 0xc,iVar4 + 0xc);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
        *(undefined2 *)(iVar3 + 0x1c) = *(undefined2 *)(iVar4 + 0x1c);
        iVar5 = 0;
        *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(iVar4 + 0x1e);
        *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)(iVar4 + 0x20);
        iVar6 = iVar4;
        do {
          iVar7 = iVar5 + iVar3;
          iVar5 = iVar5 + 1;
          *(undefined1 *)(iVar7 + 0x21) = *(undefined1 *)(iVar6 + 0x21);
          iVar6 = iVar5 + iVar4;
        } while (iVar5 < 3);
      }
      iVar1 = FUN_088c9044(param_1,param_2);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x18) = param_3;
        *(char *)(iVar1 + 0x20) = (char)param_4;
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


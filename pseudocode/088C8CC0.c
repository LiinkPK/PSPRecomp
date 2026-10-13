/* Entry 0x088C8CC0 | file offset 0x000C5C98 | FUN_088c8cc0 | bytes 296 */

undefined4 FUN_088c8cc0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < *(uint *)(param_1 + 0xbda8)) {
    iVar3 = *(uint *)(param_1 + 0xbda8) - 1;
    if ((int)param_2 < iVar3) {
      do {
        iVar3 = FUN_088c9044(param_1,param_2);
        param_2 = param_2 + 1;
        iVar2 = FUN_088c9044(param_1,param_2);
        if ((iVar3 == 0) || (iVar2 == 0)) {
          return 0;
        }
        FUN_089a34c0(iVar3,iVar2);
        FUN_089a34c0(iVar3 + 0xc,iVar2 + 0xc);
        *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
        *(undefined2 *)(iVar3 + 0x1c) = *(undefined2 *)(iVar2 + 0x1c);
        iVar4 = 0;
        *(undefined2 *)(iVar3 + 0x1e) = *(undefined2 *)(iVar2 + 0x1e);
        *(undefined1 *)(iVar3 + 0x20) = *(undefined1 *)(iVar2 + 0x20);
        iVar5 = iVar2;
        do {
          iVar6 = iVar4 + iVar3;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(iVar6 + 0x21) = *(undefined1 *)(iVar5 + 0x21);
          iVar5 = iVar4 + iVar2;
        } while (iVar4 < 3);
        iVar3 = *(int *)(param_1 + 0xbda8) + -1;
      } while ((int)param_2 < iVar3);
    }
    *(int *)(param_1 + 0xbda8) = iVar3;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


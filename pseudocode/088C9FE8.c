/* Entry 0x088C9FE8 | file offset 0x000C6FC0 | FUN_088c9fe8 | bytes 412 */

undefined4 FUN_088c9fe8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0xbda0);
  iVar7 = param_1 + 0xa180;
  if ((0 < iVar3) && (iVar4 = 0, 0 < iVar3)) {
    iVar5 = iVar7;
    do {
      if (((iVar4 == 0) || (*(int *)(iVar5 + 0x18) <= *(int *)(param_1 + 0xbde4))) &&
         ((iVar4 == iVar3 + -1 || (*(int *)(param_1 + 0xbde4) < *(int *)(iVar5 + 0x3c))))) {
        if (iVar4 < iVar3) {
          iVar6 = iVar7 + iVar4 * 0x24;
          iVar5 = iVar4;
          iVar7 = iVar7 + iVar4 * 0x24;
          do {
            iVar8 = iVar7 + 0x24;
            FUN_089a34c0(iVar6,iVar8);
            FUN_089a34c0(iVar6 + 0xc,iVar7 + 0x30);
            *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar7 + 0x3c);
            *(undefined2 *)(iVar6 + 0x1c) = *(undefined2 *)(iVar7 + 0x40);
            iVar1 = 0;
            *(undefined2 *)(iVar6 + 0x1e) = *(undefined2 *)(iVar7 + 0x42);
            *(undefined1 *)(iVar6 + 0x20) = *(undefined1 *)(iVar7 + 0x44);
            iVar7 = iVar8;
            do {
              iVar2 = iVar1 + iVar6;
              iVar1 = iVar1 + 1;
              *(undefined1 *)(iVar2 + 0x21) = *(undefined1 *)(iVar7 + 0x21);
              iVar7 = iVar1 + iVar8;
            } while (iVar1 < 3);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 0x24;
            iVar7 = iVar8;
          } while (iVar5 < iVar3);
          iVar3 = *(int *)(param_1 + 0xbda0);
        }
        *(int *)(param_1 + 0xbda0) = iVar3 + -1;
        if ((iVar4 == 0) && (0 < *(int *)(param_1 + 0xbda0))) {
          *(undefined4 *)(param_1 + 0xa198) = 0;
        }
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x24;
    } while (iVar4 < iVar3);
  }
  return 0;
}


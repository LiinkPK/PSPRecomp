/* Entry 0x08822B34 | file offset 0x0001FB0C | FUN_08822b34 | bytes 468 */

undefined4 FUN_08822b34(int param_1,uint param_2,char param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = 0;
    iVar4 = ((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80;
    iVar7 = 0;
    if (0 < iVar4) {
      iVar5 = 0;
      iVar6 = *(int *)(param_1 + 0x28);
      do {
        if (*(byte *)(iVar6 + 0x128) == param_2) {
          iVar7 = *(int *)(param_1 + 0x28) + iVar5;
          break;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x130;
        iVar6 = iVar6 + 0x130;
      } while (iVar3 < iVar4);
    }
    if (iVar7 == 0) {
      uVar2 = 0xfffffffe;
    }
    else {
      bVar1 = *(byte *)(iVar7 + 299);
      if ((bVar1 & 1) == 0) {
        if (param_3 == '\x01') {
          iVar3 = FUN_0881e67c(DAT_089d4910,*(undefined4 *)(*(int *)(param_1 + 0x24) + 0x568),
                               param_2);
          iVar4 = FUN_08842164();
          if ((iVar3 != 0) && (iVar4 != 0)) {
            FUN_089a38fc(auStack_30,iVar4 + 0x80,
                         *(int *)(param_1 + 0x2c) + ((int)*(char *)(iVar7 + 0x129) & 0x7fU) * 0x80);
            uVar8 = FUN_089a3bf8(auStack_30);
            uVar2 = FUN_0881baa8();
            FUN_0881c82c(uVar8,0x7f7fffff,uVar2,*(undefined4 *)(iVar3 + 0x10));
          }
          bVar1 = *(byte *)(iVar7 + 299);
        }
        *(byte *)(iVar7 + 299) = bVar1 | 1;
        *(byte *)(iVar7 + 299) = *(byte *)(iVar7 + 299) | 2;
        local_40 = 0x7f7fffff;
        local_3c = 0x7f7fffff;
        local_38 = 0x7f7fffff;
        local_34 = 0x3f800000;
        FUN_089a3868(iVar7 + 0xd0,&local_40);
        local_34 = 0x3f800000;
        local_40 = 0xff7fffff;
        local_3c = local_40;
        local_38 = local_40;
        FUN_089a3868(iVar7 + 0xe0,&local_40);
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


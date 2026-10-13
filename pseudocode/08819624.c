/* Entry 0x08819624 | file offset 0x000165FC | FUN_08819624 | bytes 720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_08819624(int param_1,undefined1 *param_2,char param_3,undefined4 param_4,char param_5,
            undefined4 param_6,char param_7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_40 [16];
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar6 = 0xffffffff;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x4c);
    if ((iVar5 == 0) ||
       ((*(int *)(iVar5 + 4) != 0 && ((param_5 != '\0' || (*(int *)(iVar5 + 4) != 3)))))) {
      iVar3 = *(int *)(param_1 + 0x10);
      if ((iVar3 == 1) || (iVar3 == 3)) {
        if (*(char *)(param_1 + 0x24) == '\0') {
          if (param_3 == '\x01') {
            uVar6 = 0;
          }
          else if (iVar5 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(iVar5 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x28) = uVar6;
        }
        uVar6 = 0;
      }
      else if (iVar3 == 2) {
        uVar6 = 0;
      }
      else {
        FUN_08818b28(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 2;
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar5 = *(int *)(param_1 + 0x4c);
        uVar6 = 0;
        if (iVar5 != 0) {
          if (param_3 == '\0') {
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar5 + 0xc);
          }
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar5 + 0x28);
        }
        uVar2 = FUN_0881baa8();
        iVar5 = FUN_0881c48c(uVar2);
        if (iVar5 == 0) {
          FUN_0881c1e8(uVar2,*(undefined4 *)(param_1 + 0x48),0);
          sVar1 = **(short **)(param_1 + 0x48);
        }
        else {
          FUN_0881c2cc(uVar2,*(undefined4 *)(param_1 + 0x48),0);
          sVar1 = **(short **)(param_1 + 0x48);
        }
        FUN_0881cae0(uVar2,(int)sVar1,0,1);
        if (*(int *)(param_1 + 0x14) != 0) {
          FUN_08816174(*(int *)(param_1 + 0x14),param_4,param_6);
        }
        FUN_088193a4(0,param_1);
        FUN_08819480(0,param_1);
        if ((((*(int *)(param_1 + 0x4c) != 0) && (iVar5 == 0)) && (param_7 == '\x01')) &&
           (iVar5 = FUN_08842164(), iVar5 != 0)) {
          if (*(int *)(param_1 + 0x14) == 0) {
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1c);
          }
          else {
            FUN_089a38fc(auStack_40,*(int *)(param_1 + 0x14) + 0x80,iVar5 + 0x80);
            uVar6 = FUN_089a3bf8(auStack_40);
            uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1c);
          }
          FUN_0881c82c(uVar6,0x7f7fffff,uVar2,uVar4);
        }
        FUN_0881c4ac(uVar2,param_4);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        func_0x08b537b0(_DAT_08b54330,(int)**(short **)(param_1 + 0x48));
        FUN_0881a124(param_1 + 0x18);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}


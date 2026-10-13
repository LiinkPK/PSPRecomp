/* Entry 0x08887730 | file offset 0x00084708 | FUN_08887730 | bytes 388 */

void FUN_08887730(int param_1)

{
  bool bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 local_f10;
  undefined2 uStack_f0a;
  undefined4 local_f04;
  undefined4 local_798;
  undefined2 uStack_792;
  undefined4 local_78c;
  
  uVar3 = FUN_08887928();
  uVar4 = FUN_08887a30(param_1,*(undefined1 *)(param_1 + 0x25));
  uVar2 = FUN_0888795c(param_1);
  FUN_088f9f88(1,uVar3,uVar4,0xffffffff,0xffffffff,0);
  iVar5 = DAT_089d8140;
  if (*(int *)(param_1 + 4) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x79c);
    iVar5 = 0;
    iVar6 = 0xef;
    uVar4 = *(undefined4 *)(param_1 + 0x7a0);
    do {
      puVar7 = (undefined4 *)(param_1 + 0x24 + iVar5);
      uVar8 = puVar7[1];
      *(undefined4 *)((int)&local_f10 + iVar5) = *puVar7;
      *(undefined4 *)(&stack0xfffff0f4 + iVar5) = uVar8;
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar6 != 0);
    uStack_f0a = (undefined2)uVar4;
    local_f04 = uVar3;
    FUN_088f8e14(&DAT_09afb8a0,&local_f10);
    local_78c = *(undefined4 *)(param_1 + 0x10);
    iVar5 = 0;
    iVar6 = 0xef;
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    do {
      uVar4 = *(undefined4 *)((int)&DAT_09afc904 + iVar5);
      *(undefined4 *)((int)&local_798 + iVar5) = *(undefined4 *)(&DAT_09afc900 + iVar5);
      *(undefined4 *)(&stack0xfffff86c + iVar5) = uVar4;
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar6 != 0);
    uStack_792 = (undefined2)uVar3;
    FUN_088f8e14(&DAT_09afc900,&local_798);
  }
  else {
    uVar3 = 0;
    bVar1 = (char)DAT_09afde50 == '\0';
    if ((char)DAT_09afde50 == '\x05') {
      iVar6 = FUN_08900e60(DAT_089d8140);
      if (iVar6 == 1) {
        uVar3 = *(undefined4 *)(iVar5 + 0x18);
      }
    }
    FUN_088f9b74(uVar3,bVar1);
  }
  DAT_09afde4c._0_2_ = uVar2;
  return;
}


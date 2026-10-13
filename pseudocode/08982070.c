/* Entry 0x08982070 | file offset 0x0017F048 | FUN_08982070 | bytes 736 */

void FUN_08982070(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = *(int *)(param_2 + 0x8c);
  if (*(int *)(param_3 + 0xc) < 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined4 **)(iVar3 + *(int *)(param_3 + 0xc) * 4);
    }
  }
  puVar2 = *(undefined1 **)
            (*(int *)(iVar1 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(uVar5,param_2,iVar1,*(undefined4 *)(iVar1 + 0x50),*puVar2,puVar2[1],puVar2[2],
               auStack_f0);
  FUN_0896fb5c(auStack_f0);
  uVar5 = FUN_08983db4(0,0,1,2);
  FUN_08983cd8(uVar5);
  FUN_08983b74(0);
  iVar1 = *(int *)(param_2 + 0x8c);
  iVar3 = *(int *)(param_3 + 0xc);
  if (iVar3 < 0) {
    uVar5 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(iVar4 + iVar3 * 4) + 0x10);
    }
  }
  if (*(char *)(param_3 + 0x6c) == '\0') {
    FUN_089720e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_2 + 0xa0),uVar5,*(undefined4 *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  }
  else {
    local_30 = *(undefined4 *)(param_3 + 0x58);
    if (iVar3 < 0) {
      uVar6 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(iVar4 + iVar3 * 4);
      }
    }
    puVar2 = *(undefined1 **)
              (*(int *)(iVar1 + 0x48) +
              (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
    local_2c = local_30;
    local_28 = local_30;
    local_24 = local_30;
    FUN_08946ac4(uVar6,param_2,iVar1,*(undefined4 *)(iVar1 + 0x50),*puVar2,puVar2[1],puVar2[2],
                 auStack_70);
    iVar1 = *(int *)(param_2 + 0x8c);
    if (*(int *)(param_3 + 0xc) < 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x34);
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(iVar3 + *(int *)(param_3 + 0xc) * 4);
      }
    }
    FUN_08947b88(uVar6,param_2,iVar1,*(undefined4 *)(iVar1 + 0x50),
                 *(undefined1 *)
                  (*(int *)(*(int *)(iVar1 + 0x48) +
                           (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1),
                 *(undefined1 *)(param_3 + 0x6d),param_3,&local_30,auStack_b0);
    uVar6 = FUN_0896fd08(auStack_70,auStack_b0);
    FUN_0896fd88(uVar6);
    FUN_089720e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_2 + 0xa0),uVar5,*(undefined4 *)(param_1 + 0x54),
                 *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    FUN_0896fe50();
  }
  return;
}


/* Entry 0x088AFBCC | file offset 0x000ACBA4 | FUN_088afbcc | bytes 536 */

void FUN_088afbcc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar2 + 0x2b70) != 0) && (*(char *)(iVar2 + 0x2b7f) == '\0')) {
    if (*(int *)(iVar2 + 0x2b64) == 0) {
      iVar4 = *(int *)(iVar2 + 0x2b74);
      if ((iVar4 == 0) || (*(int *)(iVar2 + 0x2b78) == 0)) {
        uVar1 = FUN_08862c40(*(undefined4 *)(iVar2 + 0x2b98),1,0xffffffc0);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b60) = uVar1;
        uVar1 = FUN_0885c6cc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b70),
                             *(int *)(*(int *)(param_1 + 0xc) + 0x2b60) + 0x40,0,0,1,0);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b64) = uVar1;
        iVar2 = *(int *)(param_1 + 0xc);
        uVar3 = *(int *)(iVar2 + 0x2b64) + 0x3fU & 0xffffffc0;
        FUN_08862854(*(undefined4 *)(iVar2 + 0x2b98),uVar3,*(undefined4 *)(iVar2 + 0x2b60),1);
        iVar2 = *(int *)(param_1 + 0xc);
        uVar1 = *(undefined4 *)(iVar2 + 0x2b60);
      }
      else {
        *(int *)(iVar2 + 0x2b60) = iVar4;
        uVar1 = FUN_0885c6cc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b70),iVar4 + 0x40,0,0,1,0)
        ;
        *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b64) = uVar1;
        iVar2 = *(int *)(param_1 + 0xc);
        uVar3 = *(int *)(iVar2 + 0x2b64) + 0x3fU & 0xffffffc0;
        FUN_08935524(uVar3,*(undefined4 *)(iVar2 + 0x2b78),*(undefined4 *)(iVar2 + 0x2b60));
        iVar2 = *(int *)(param_1 + 0xc);
        uVar1 = *(undefined4 *)(iVar2 + 0x2b60);
      }
      FUN_088adf68(DAT_089d712c,iVar2 + 0xd68,uVar3,uVar1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (*(int *)(iVar2 + 0x2b6c) == 0) {
      uVar1 = FUN_08862c40(*(undefined4 *)(iVar2 + 0x2b9c),1);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b68) = uVar1;
      uVar1 = FUN_0885c6cc(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b70),
                           *(int *)(*(int *)(param_1 + 0xc) + 0x2b68) + 0x40,0,0,1,0);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b6c) = uVar1;
      iVar2 = *(int *)(param_1 + 0xc);
      uVar3 = *(int *)(iVar2 + 0x2b6c) + 0x3fU & 0xffffffc0;
      FUN_08862854(*(undefined4 *)(iVar2 + 0x2b9c),uVar3,*(undefined4 *)(iVar2 + 0x2b68),1);
      FUN_088adf68(DAT_089d712c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xda8),uVar3,
                   *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b68));
      iVar2 = *(int *)(param_1 + 0xc);
    }
    *(undefined1 *)(iVar2 + 0x2b7f) = 1;
  }
  return;
}


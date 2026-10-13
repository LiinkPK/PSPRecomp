/* Entry 0x0888F3E0 | file offset 0x0008C3B8 | FUN_0888f3e0 | bytes 308 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0888f3e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar1 = _DAT_08a22ab0;
  uVar3 = 0;
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 4);
  do {
    iVar2 = *piVar5;
    iVar6 = *(int *)(iVar2 + 0x52c);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x544) + 0x134))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x130));
    iVar2 = *(int *)(iVar2 + 0x52c);
    *(undefined1 *)((int)piVar5 + 5) = 0;
    if (((char)piVar5[1] == '\0') && ((*(uint *)(*piVar5 + 900) & 0x800000) != 0)) {
      iVar6 = *(int *)(iVar6 + 0xc) - *(int *)(iVar6 + 8);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      iVar2 = FUN_08842f1c((int)*(short *)(iVar2 + 0x14),iVar6);
      if ((iVar2 == 1) && (iVar2 = func_0x08a22744(uVar1,iVar4), iVar2 == 1)) {
        func_0x08a222c8(uVar1,iVar4);
        *(undefined1 *)((int)piVar5 + 5) = 1;
        *(undefined1 *)(piVar5 + 1) = 1;
        uVar3 = 1;
      }
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar4 < 2);
  return uVar3;
}


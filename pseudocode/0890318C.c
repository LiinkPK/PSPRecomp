/* Entry 0x0890318C | file offset 0x00100164 | FUN_0890318c | bytes 328 */

void FUN_0890318c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_1d0 [112];
  int local_10;
  
  piVar5 = local_1d0;
  local_10 = 0x1c0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  iVar4 = sceNetAdhocctlGetScanInfo(&local_10,local_1d0);
  if (-1 < iVar4) {
    if ((0 < local_10) && (&stack0x00000000 != (undefined1 *)0x1d0)) {
      iVar4 = *(int *)(param_1 + 0x188);
      do {
        iVar6 = param_1 + iVar4 * 0x18;
        uVar1 = *(undefined1 *)((int)piVar5 + 9);
        uVar2 = *(undefined1 *)((int)piVar5 + 10);
        *(char *)(iVar6 + 8) = (char)piVar5[2];
        uVar3 = *(undefined1 *)((int)piVar5 + 0xb);
        *(undefined1 *)(iVar6 + 9) = uVar1;
        iVar4 = piVar5[3];
        *(undefined1 *)(iVar6 + 10) = uVar2;
        uVar1 = *(undefined1 *)((int)piVar5 + 0xd);
        *(undefined1 *)(iVar6 + 0xb) = uVar3;
        uVar2 = *(undefined1 *)((int)piVar5 + 0xe);
        *(char *)(iVar6 + 0xc) = (char)iVar4;
        uVar3 = *(undefined1 *)((int)piVar5 + 0xf);
        *(undefined1 *)(iVar6 + 0xd) = uVar1;
        *(undefined1 *)(iVar6 + 0xe) = uVar2;
        *(undefined1 *)(iVar6 + 0xf) = uVar3;
        uVar1 = *(undefined1 *)((int)piVar5 + 0x11);
        uVar2 = *(undefined1 *)((int)piVar5 + 0x12);
        *(char *)(iVar6 + 0x10) = (char)piVar5[4];
        uVar3 = *(undefined1 *)((int)piVar5 + 0x13);
        *(undefined1 *)(iVar6 + 0x11) = uVar1;
        iVar4 = piVar5[5];
        *(undefined1 *)(iVar6 + 0x12) = uVar2;
        uVar1 = *(undefined1 *)((int)piVar5 + 0x15);
        *(undefined1 *)(iVar6 + 0x13) = uVar3;
        uVar2 = *(undefined1 *)((int)piVar5 + 0x16);
        *(char *)(iVar6 + 0x14) = (char)iVar4;
        uVar3 = *(undefined1 *)((int)piVar5 + 0x17);
        *(undefined1 *)(iVar6 + 0x15) = uVar1;
        *(undefined1 *)(iVar6 + 0x16) = uVar2;
        *(undefined1 *)(iVar6 + 0x17) = uVar3;
        *(int *)(iVar6 + 0x18) = piVar5[1];
        *(int *)(iVar6 + 0x1c) = piVar5[6];
        iVar4 = *(int *)(param_1 + 0x188) + 1;
        *(int *)(param_1 + 0x188) = iVar4;
        if (0xf < iVar4) break;
        piVar5 = (int *)*piVar5;
      } while (piVar5 != (int *)0x0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


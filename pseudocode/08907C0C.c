/* Entry 0x08907C0C | file offset 0x00104BE4 | FUN_08907c0c | bytes 320 */

void FUN_08907c0c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_c0 [144];
  uint local_30;
  int local_2c;
  
  iVar6 = 1;
  if (*(int *)(param_1 + 0x1644) == 0) {
    iVar6 = *(int *)(param_1 + 0x804);
  }
  iVar7 = 0;
  bVar1 = false;
  if (0 < iVar6) {
    iVar8 = param_1 + 4;
    do {
      iVar2 = sceNetAdhocctlGetPeerInfo(iVar8,0x98,auStack_c0);
      if (iVar2 < 0) {
        bVar1 = true;
        break;
      }
      uVar9 = sceKernelGetSystemTimeWide();
      uVar4 = (uint)((uint)uVar9 < local_30);
      uVar5 = (int)((ulonglong)uVar9 >> 0x20) - local_2c;
      if (uVar5 == uVar4 && 60000000 < (uint)uVar9 - local_30 || uVar5 != uVar4) {
        bVar1 = true;
        break;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x80;
    } while (iVar7 < iVar6);
  }
  if (bVar1) {
    piVar3 = *(int **)(param_1 + 0x1660);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))((int)piVar3 + (int)*(short *)(*piVar3 + 0x18),0);
    }
    FUN_089072ac(param_1,1);
    FUN_08906f6c(param_1);
  }
  return;
}


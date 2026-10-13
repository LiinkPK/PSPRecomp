/* Entry 0x08907F14 | file offset 0x00104EEC | FUN_08907f14 | bytes 428 */

void FUN_08907f14(int param_1)

{
  int *piVar1;
  short *psVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int aiStack_f0 [26];
  undefined1 auStack_88 [108];
  
  FUN_08935524(aiStack_f0,&DAT_089d8150,0x68);
  FUN_08935524(auStack_88,&DAT_089d81b8,0x68);
  iVar4 = 0;
  iVar5 = param_1 + 0x808;
  do {
    FUN_08906740(iVar5);
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x2e0;
  } while (iVar4 < 3);
  iVar4 = FUN_0890c5bc(param_1 + 0x10d8);
  if (iVar4 == 1) {
    *(undefined1 *)(param_1 + 0x16e4) = 0;
    iVar4 = *(int *)(param_1 + 0x16e0) + 1;
    *(int *)(param_1 + 0x16e0) = iVar4;
    if ((899 < iVar4) && (piVar1 = *(int **)(param_1 + 0x1660), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x1c))((int)piVar1 + (int)*(short *)(*piVar1 + 0x18),5);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x16e4) = 1;
    *(undefined4 *)(param_1 + 0x16e0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x1658);
  piVar1 = aiStack_f0 + iVar4 * 2;
  if (iVar4 != *(int *)(param_1 + 0x165c)) {
    iVar5 = (int)*(short *)((int)aiStack_f0 + (iVar4 * 4 + 1) * 2);
    pcVar3 = (code *)aiStack_f0[iVar4 * 2 + 1];
    if (((iVar5 != 0) || ((short)*piVar1 != 0)) || (pcVar3 != (code *)0x0)) {
      iVar4 = param_1 + (short)*piVar1;
      if (iVar5 != 0) {
        psVar2 = (short *)(*(int *)(pcVar3 + iVar4) + iVar5 * 8);
        pcVar3 = *(code **)(psVar2 + 2);
        iVar4 = iVar4 + *psVar2;
      }
      (*pcVar3)(iVar4);
      iVar4 = *(int *)(param_1 + 0x1658);
      piVar1 = aiStack_f0 + iVar4 * 2;
    }
    *(int *)(param_1 + 0x165c) = iVar4;
  }
  iVar4 = (int)*(short *)((int)piVar1 + 0x6a);
  pcVar3 = (code *)piVar1[0x1b];
  if (((iVar4 != 0) || ((short)piVar1[0x1a] != 0)) || (pcVar3 != (code *)0x0)) {
    param_1 = param_1 + (short)piVar1[0x1a];
    if (iVar4 != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + param_1) + iVar4 * 8);
      pcVar3 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar3)(param_1);
  }
  return;
}


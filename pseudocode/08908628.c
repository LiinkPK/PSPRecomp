/* Entry 0x08908628 | file offset 0x00105600 | FUN_08908628 | bytes 784 */

void FUN_08908628(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  
  pfVar6 = (float *)(param_1 + 0x168c);
  bVar2 = false;
  FUN_08907c0c();
  iVar3 = *(int *)(param_1 + 0x16d4);
  if (*(int *)(param_1 + 0x1644) == 0) {
    if (iVar3 < 1) {
      if (-1 < iVar3) {
        piVar5 = *(int **)(param_1 + 0x1098);
        bVar1 = false;
        if (piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar5 + 0x44))((int)piVar5 + (int)*(short *)(*piVar5 + 0x40),0);
          bVar1 = false;
          if (iVar3 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          FUN_089067d8(param_1 + 0xdc8,param_1 + 0x1694,0x40,0);
          *(undefined4 *)(param_1 + 0x16d4) = 1;
        }
      }
    }
    else if (iVar3 < 2) {
      piVar5 = *(int **)(param_1 + 0x1098);
      bVar2 = false;
      if (piVar5 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar5 + 0x3c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x38),0);
        bVar2 = false;
        if (iVar3 != 0) {
          bVar2 = true;
        }
      }
    }
  }
  else if (iVar3 < 1) {
    if (-1 < iVar3) {
      piVar5 = *(int **)(param_1 + 0x1098);
      bVar1 = false;
      if (piVar5 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar5 + 0x44))((int)piVar5 + (int)*(short *)(*piVar5 + 0x40),0);
        bVar1 = false;
        if (iVar3 != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        bVar2 = true;
      }
    }
  }
  else if (iVar3 < 2) {
    piVar5 = *(int **)(param_1 + 0x1098);
    bVar1 = false;
    if (piVar5 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar5 + 0x3c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x38),0);
      bVar1 = false;
      if (iVar3 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      FUN_08906848(param_1 + 0xdc8,param_1 + 0x1694,0x40,param_1 + 4);
      *(undefined4 *)(param_1 + 0x16d4) = 0;
    }
  }
  if (bVar2) {
    iVar3 = 0;
    bVar2 = true;
    piVar5 = *(int **)(param_1 + 0x1660);
    if (0 < *(int *)(param_1 + 0x804)) {
      pfVar4 = pfVar6;
      do {
        if (*(float *)(param_1 + 0x1690) != pfVar4[2]) {
          bVar2 = false;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x804));
    }
    if (bVar2) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x34))((int)piVar5 + (int)*(short *)(*piVar5 + 0x30));
      }
      *(undefined4 *)(param_1 + 0x1658) = 6;
    }
    else {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18),4);
      }
      *(undefined4 *)(param_1 + 0x1658) = 6;
    }
  }
  if ((0.0 < *pfVar6) &&
     (fVar7 = *pfVar6 - *(float *)(DAT_089d69e0 + 0x18), *pfVar6 = fVar7, fVar7 <= 0.0)) {
    piVar5 = *(int **)(param_1 + 0x1660);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x1c))((int)piVar5 + (int)*(short *)(*piVar5 + 0x18),3);
    }
    *(undefined4 *)(param_1 + 0x1658) = 6;
  }
  return;
}

